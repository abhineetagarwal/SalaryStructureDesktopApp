#include "SalaryStructure.h"

#define MONTHLY_CALCULATION 1
#define YEARLY_CALCULATION 12

void SEmployeeBasicNorms::vInitializeBasicNorms(bool isCalOnMonthlyBasis){
		//Choose calculation on Monthly basis or Yearly basis
		if(isCalOnMonthlyBasis){
			calculationChoosen = MONTHLY_CALCULATION;
		}else{
			calculationChoosen = YEARLY_CALCULATION;
		}

		//Professional Tax Range
		mediumSalaryRange = (calculationChoosen * 15000);
		lowSalaryRange = (calculationChoosen * 10000);

		//Professional Tax Deduction
		highSalariedEmployee = (calculationChoosen * 200);
		mediumSalariedEmployee = (calculationChoosen * 150);
		lowSalariedEmployee = 0;

		//ESI Provision Range - ESI provided to employee for Gross salary less than or equal to 15000 per month
		maxESIProvisionRange = (calculationChoosen * 15000); 

		//Medical Reimbursement
		gradeOneMRI =	(calculationChoosen * 1250);    //Grade One Employee MRI
		gradeTwoMRI =	(calculationChoosen * 800);     //Grade Two Employee MRI
		gradeThreeMRI  = (calculationChoosen * 500);  //Grade Three Employee MRI

		//Conveyance Allowance
		conveyanceAllowance = (calculationChoosen * 800);

		//Employee Bonus
		employeeBonus = (calculationChoosen * 350);
}
SEmployeeData::SEmployeeData(){
	employeeBasicSalary = 0;
	employeeHRA = 0;
	employeeSpecialAllowance = 0;
	employeeGrossSalary = 0;
	employeeEmployerPF = 0;
	employeeEmployeePF = 0;
	employeeGratuity = 0;
	employeeCTC = 0;
	employeeNetSalary = 0;
	employeeEmployerESI = 0;
	employeeEmployeeESI = 0;
	employeeProfessionalTax = 0;
}
void AbstractSalaryStructure::salaryStructuringViaGross(){
	//Calculate Gross Dependent Component
	calculateGrossDependentComponent();

	//Employee CTC
	empData.employeeCTC = empData.employeeGrossSalary + empData.employeeEmployerESI + empData.employeeMedicalReimbursement + empData.employeeEmployerPF + empData.employeeGratuity + empData.employeeBonus;
}
void AbstractSalaryStructure::salaryStructuringViaCTC(short empGradeType){
	if(empGradeType == GRADE_ONE && empData.employeeCTC >= CTC_LIMIT_GRADE_ONE){
		//Employee Gross Salary for Grade One Employee whose MRI is considered instead of ESI
		empData.employeeGrossSalary = ((empData.employeeCTC - (empData.employeeMedicalReimbursement + empData.employeeBonus)) / CTC_GROSS_MRI_RATIO);
	}else if(empGradeType == GRADE_TWO && empData.employeeCTC >= CTC_LIMIT_GRADE_TWO){
		//Employee Gross Salary for Grade Two Employee whose MRI is considered instead of ESI
		empData.employeeGrossSalary = ((empData.employeeCTC - (empData.employeeMedicalReimbursement + empData.employeeBonus)) / CTC_GROSS_MRI_RATIO);
	}else if(empGradeType == GRADE_THREE && empData.employeeCTC >= CTC_LIMIT_GRADE_THREE){
		//Employee Gross Salary for Grade Three Employee whose MRI is considered instead of ESI
		empData.employeeGrossSalary = ((empData.employeeCTC - (empData.employeeMedicalReimbursement + empData.employeeBonus)) / CTC_GROSS_MRI_RATIO);
	}else if(empData.employeeCTC <= CTC_LIMIT_ANY_GRADE){
		//Employee Gross Salary for any Grade Employee whose ESI is considered instead of MRI
		empData.employeeGrossSalary = ((empData.employeeCTC - empData.employeeBonus) / CTC_GROSS_ESI_RATIO);
	}

	//Calculate Gross Dependent Component
	calculateGrossDependentComponent();

}
void AbstractSalaryStructure::salaryStructuringViaNetPay(){
}
void AbstractSalaryStructure::calculateGrossDependentComponent(){
	//Gross Dependent Component
	empData.employeeBasicSalary = (empData.employeeGrossSalary * 40)/100;	//40% of Gross Salary
	empData.employeeHRA = (empData.employeeBasicSalary * 50)/100;			//50% of Basic Salary
	empData.employeeEmployerPF = (empData.employeeBasicSalary * 12)/100;	//12% of Basic Salary
	empData.employeeEmployeePF = (empData.employeeBasicSalary * 12)/100;	//12% of Basic Salary
	empData.employeeGratuity = (empData.employeeBasicSalary * 481)/10000;	//4.81% of Basic Salary
	
	//Employee Special Allowance
	empData.employeeSpecialAllowance = (empData.employeeGrossSalary - (empData.employeeBasicSalary + empData.employeeHRA + empData.employeeConveyanceAllowance));
	
	//Employee Professional Tax
	if(empData.employeeGrossSalary >= empBasicNorms.mediumSalaryRange){
		//If Gross Salary is greater than or equal to 15000/-, then Professional Tax is 200/-
		empData.employeeProfessionalTax = empBasicNorms.highSalariedEmployee;
	}
	else if(empData.employeeGrossSalary >= empBasicNorms.lowSalaryRange && empData.employeeGrossSalary < empBasicNorms.mediumSalaryRange){
		//If Gross Salary is in between 10000/- to 15000/-, then Professional Tax is 150/-
		empData.employeeProfessionalTax = empBasicNorms.mediumSalariedEmployee; 
	}
	else{
		//If Gross Salary is less than 10000/-, then Professional Tax is 0/-
		empData.employeeProfessionalTax = empBasicNorms.lowSalariedEmployee;
	}

	//Employee ESI & MRI - ESI provided to employee for Gross salary less than or equal to 15000/- per month
	if(empData.employeeGrossSalary <= empBasicNorms.maxESIProvisionRange){		
		//Employer Contribution 4.75% on Gross Salary
		empData.employeeEmployerESI = (empData.employeeGrossSalary * 475)/10000; 

		//Employee Contribution 1.75% on Gross Salary
		empData.employeeEmployeeESI = (empData.employeeGrossSalary * 175)/10000; 

		//Since company is providing ESI for Employee, MRI will not be provided. Therefore MRI will be reset to zero.
		empData.employeeMedicalReimbursement = 0;
	}

	//Employee Net Salary
	empData.employeeNetSalary = (empData.employeeGrossSalary - (empData.employeeEmployeeESI + empData.employeeProfessionalTax + empData.employeeEmployeePF));
}
