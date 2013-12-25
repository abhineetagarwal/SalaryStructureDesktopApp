#include "CGradeThree.h"

CGradeThree::CGradeThree(char *executiveName,bool isCalOnMonthlyBasis){
	empBasicNorms.vInitializeBasicNorms(isCalOnMonthlyBasis);
	strcpy(empData.employeeName,executiveName);
	empData.employeeConveyanceAllowance = empBasicNorms.conveyanceAllowance;
	empData.employeeMedicalReimbursement = empBasicNorms.gradeThreeMRI; //For Grade Three Medical Reimbursement is 500/-
	empData.employeeBonus = empBasicNorms.employeeBonus;
}

CGradeThree::~CGradeThree(){}


void CGradeThree::getEmployeeData(PTREMPDATA ptrEmpData){
	*ptrEmpData = empData;
}

void CGradeThree::structureSalaryComponent(UDT empAmount, short calcViaType){
	if(calcViaType == CALCULATE_VIA_GROSS){
		empData.employeeGrossSalary = empAmount;
		salaryStructuringViaGross();
	}
	else if(calcViaType == CALCULATE_VIA_CTC){
		empData.employeeCTC = empAmount;
		salaryStructuringViaCTC(GRADE_THREE);
	}
	else if(calcViaType == CALCULATE_VIA_NETPAY){
		empData.employeeNetSalary = empAmount;
		salaryStructuringViaNetPay();
	}
}