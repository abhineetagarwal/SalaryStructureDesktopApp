#include "CGradeTwo.h"

CGradeTwo::CGradeTwo(char *executiveName,bool isCalOnMonthlyBasis){
	empBasicNorms.vInitializeBasicNorms(isCalOnMonthlyBasis);
	strcpy(empData.employeeName,executiveName);
	empData.employeeConveyanceAllowance = empBasicNorms.conveyanceAllowance;
	empData.employeeMedicalReimbursement = empBasicNorms.gradeTwoMRI; //For Grade Two Medical Reimbursement is 800/-
	empData.employeeBonus = empBasicNorms.employeeBonus;
}

CGradeTwo::~CGradeTwo(){}

void CGradeTwo::getEmployeeData(PTREMPDATA ptrEmpData){
	*ptrEmpData = empData;
}

void CGradeTwo::structureSalaryComponent(UDT empAmount, short calcViaType){
if(calcViaType == CALCULATE_VIA_GROSS){
		empData.employeeGrossSalary = empAmount;
		salaryStructuringViaGross();
	}
	else if(calcViaType == CALCULATE_VIA_CTC){
		empData.employeeCTC = empAmount;
		salaryStructuringViaCTC(GRADE_TWO);
	}
	else if(calcViaType == CALCULATE_VIA_NETPAY){
		empData.employeeNetSalary = empAmount;
		salaryStructuringViaNetPay();
	}
}