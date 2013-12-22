#include "SalaryStructure.h"

#define MONTHLY_CALCULATION 1
#define YEARLY_CALCULATION 12

void SEmployeeBasicNorms::vInitializeBasicNorms(bool isCalOnMonthlyBasis){
		//Choose calculation on yearly basis or monthly basis
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

		//ESI Provision Range
		maxESIProvisionRange = (calculationChoosen * 15000); //ESI provided to employee for Gross salary less than or equal to 15000 per month

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
	empData.employeeBasicSalary = (empData.employeeGrossSalary * 40)/100;	//40% of Gross Salary
	empData.employeeHRA = (empData.employeeBasicSalary * 50)/100;			//50% of Basic Salary
	empData.employeeEmployerPF = (empData.employeeBasicSalary * 12)/100;	//12% of Basic Salary
	empData.employeeEmployeePF = (empData.employeeBasicSalary * 12)/100;	//12% of Basic Salary
	empData.employeeGratuity = (empData.employeeBasicSalary * 481)/10000;	//4.81% of Basic Salary
	
	//Employee Special Allowance
	empData.employeeSpecialAllowance = (empData.employeeGrossSalary - (empData.employeeBasicSalary + empData.employeeHRA + empData.employeeConveyanceAllowance));
	
	//Employee Professional Tax
	if(empData.employeeGrossSalary >= empBasicNorms.mediumSalaryRange){
		empData.employeeProfessionalTax = empBasicNorms.highSalariedEmployee; //If Gross Salary is greater than 15000, then Professional Tax is 200/-
	}
	else if(empData.employeeGrossSalary >= empBasicNorms.lowSalaryRange && empData.employeeGrossSalary < empBasicNorms.mediumSalaryRange){
		empData.employeeProfessionalTax = empBasicNorms.mediumSalariedEmployee; //If Gross Salary is in between 10000/- to 15000/-, then Professional Tax is 150/-
	}
	else{
		empData.employeeProfessionalTax = empBasicNorms.lowSalariedEmployee;
	}

	//Employee ESI & MRI
	if(empData.employeeGrossSalary <= empBasicNorms.maxESIProvisionRange){
		empData.employeeEmployerESI = (empData.employeeGrossSalary * 475)/10000; //Employee Contribution 4.75% on Gross Salary
		empData.employeeEmployeeESI = (empData.employeeGrossSalary * 175)/10000; //Employee Contribution 1.75% on Gross Salary

		//Since company is providing ESI for Employee, MRI will not be provided. Therefore MRI will be reset to zero.
		empData.employeeMedicalReimbursement = 0;
	}
	
	//Employee CTC
	empData.employeeCTC = empData.employeeGrossSalary + empData.employeeEmployerESI + empData.employeeMedicalReimbursement + empData.employeeEmployerPF + empData.employeeGratuity + empData.employeeBonus;

	//Employee Net Salary
	empData.employeeNetSalary = (empData.employeeGrossSalary - (empData.employeeEmployeeESI + empData.employeeProfessionalTax + empData.employeeEmployeePF));
}
void AbstractSalaryStructure::salaryStructuringViaCTC(){
}
void AbstractSalaryStructure::salaryStructuringViaNetPay(){
}