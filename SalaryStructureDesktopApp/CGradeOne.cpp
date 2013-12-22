#include "CGradeOne.h"


CGradeOne::CGradeOne(char *executiveName,bool isCalOnMonthlyBasis){
	empBasicNorms.vInitializeBasicNorms(isCalOnMonthlyBasis);
	strcpy(empData.employeeName,executiveName);	
	empData.employeeConveyanceAllowance = empBasicNorms.conveyanceAllowance;	
	empData.employeeMedicalReimbursement = empBasicNorms.gradeOneMRI; //For Grade One Medical Reimbursement is 1250/- 	
	empData.employeeBonus = empBasicNorms.employeeBonus;	
}

CGradeOne::~CGradeOne(){}

void CGradeOne::getEmployeeData(PTREMPDATA ptrEmpData){
	*ptrEmpData = empData;
}

void CGradeOne::structureSalaryComponent(UDT empAmount, short calcViaType){
	if(calcViaType == CALCULATE_VIA_GROSS){
		empData.employeeGrossSalary = empAmount;
		salaryStructuringViaGross();
	}
	else if(calcViaType == CALCULATE_VIA_CTC){
		empData.employeeCTC = empAmount;
		salaryStructuringViaCTC();
	}
	else if(calcViaType == CALCULATE_VIA_NETPAY){
		empData.employeeNetSalary = empAmount;
		salaryStructuringViaNetPay();
	}
}