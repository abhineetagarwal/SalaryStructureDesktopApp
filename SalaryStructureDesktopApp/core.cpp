#include "core.h"

#define CSV_DEFAULT_PATH "" //"C:\\project\\MISC\\SalaryStructure\\"


SEmployeeInputDetails::SEmployeeInputDetails():calcViaType(CALCULATE_VIA_GROSS),execGradeType(GRADE_ONE),isCalOnMonthlyBasis(true){}
SEmployeeInputDetails::SEmployeeInputDetails(char* srcName,UDT totalAmount,short calType,short gradeType,bool isMonthly){
		strcpy(execName,srcName);
		execAmount = totalAmount;
		calcViaType = calType;
		execGradeType = gradeType;
		isCalOnMonthlyBasis = isMonthly;
}
CSalaryCore::CSalaryCore(PTREMPINPUTDETAILS execInputDetails){
	executiveInputDetails = *execInputDetails;
	empObj = getInstance();
}
CSalaryCore::~CSalaryCore(){
	delete empObj;
}
AbstractSalaryStructure* CSalaryCore::getInstance(){
	if(executiveInputDetails.execGradeType == GRADE_ONE){
		return new CGradeOne(executiveInputDetails.execName,executiveInputDetails.isCalOnMonthlyBasis);
	}
	else if(executiveInputDetails.execGradeType == GRADE_TWO){
		return new CGradeTwo(executiveInputDetails.execName,executiveInputDetails.isCalOnMonthlyBasis);
	}
	else if(executiveInputDetails.execGradeType == GRADE_THREE){
		return new CGradeThree(executiveInputDetails.execName,executiveInputDetails.isCalOnMonthlyBasis);
	}
	return NULL;
}

void CSalaryCore::doStructuringOfSalary(){
	empObj->structureSalaryComponent(executiveInputDetails.execAmount,executiveInputDetails.calcViaType);
}
void CSalaryCore::printSalaryComponent(){
	EMPDATA getEmpData;
	empObj->getEmployeeData(&getEmpData);
	vWriteToFile(&getEmpData);
}
void CSalaryCore::vWriteToFile(PTREMPDATA ptrWriteEmpData){
	char myFile[100];
	strcpy(myFile,CSV_DEFAULT_PATH);	
	strcat(myFile,ptrWriteEmpData->employeeName);	
	strcat(myFile,".csv");
	//remove(myFile);
	FILE* fp = fopen(myFile,"a");
	if (fp == NULL){
		return;		
	}
	vWriteData(fp,ptrWriteEmpData);
	fclose(fp);
	fp = NULL;	
}
void CSalaryCore::vWriteData(FILE* fp,PTREMPDATA ptrWriteEmpData){
	fprintf(fp,"\nANNEXURE 1\nCOMPENSATION AND BENEFITS FITMENT\n");
	fprintf(fp,"\nEmployee Name:,%s",ptrWriteEmpData->employeeName);
	fprintf(fp,"\nJob Title:,");
	fprintf(fp,"\nGrade:,");
	fprintf(fp,"\nReporting Manager:,");
	fprintf(fp,"\n,Particulars,Salary (P.M),Salary (P.A)");
	fprintf(fp,"\nSalary");
	fprintf(fp,"\n,Basic Salary,%.0f,%.0f",calcChoice(true,ptrWriteEmpData->employeeBasicSalary),calcChoice(false,ptrWriteEmpData->employeeBasicSalary));
	fprintf(fp,"\n,House Rent Allowance,%.0f,%.0f",calcChoice(true,ptrWriteEmpData->employeeHRA),calcChoice(false,ptrWriteEmpData->employeeHRA));
	fprintf(fp,"\n,Special Allowance,%.0f,%.0f",calcChoice(true,ptrWriteEmpData->employeeSpecialAllowance),calcChoice(false,ptrWriteEmpData->employeeSpecialAllowance));
	fprintf(fp,"\n,Conveyance,%.0f,%.0f",calcChoice(true,ptrWriteEmpData->employeeConveyanceAllowance),calcChoice(false,ptrWriteEmpData->employeeConveyanceAllowance));
	fprintf(fp,"\nGross Salary,,%.0f,%.0f\n",calcChoice(true,ptrWriteEmpData->employeeGrossSalary),calcChoice(false,ptrWriteEmpData->employeeGrossSalary));
	fprintf(fp,"\nBenefits");
	if(ptrWriteEmpData->employeeMedicalReimbursement == 0){
		fprintf(fp,"\n,ESI,%.0f,%.0f",calcChoice(true,ptrWriteEmpData->employeeEmployerESI),calcChoice(false,ptrWriteEmpData->employeeEmployerESI));
	}else{
		fprintf(fp,"\n,Medical Reimbursement,%.0f,%.0f",calcChoice(true,ptrWriteEmpData->employeeMedicalReimbursement),calcChoice(false,ptrWriteEmpData->employeeMedicalReimbursement));
	}
	fprintf(fp,"\n,Provident Fund,%.0f,%.0f",calcChoice(true,ptrWriteEmpData->employeeEmployerPF),calcChoice(false,ptrWriteEmpData->employeeEmployerPF));
	fprintf(fp,"\n,Gratuity,%.0f,%.0f",calcChoice(true,ptrWriteEmpData->employeeGratuity),calcChoice(false,ptrWriteEmpData->employeeGratuity));
	fprintf(fp,"\n,Bonus,%.0f,%.0f",calcChoice(true,ptrWriteEmpData->employeeBonus),calcChoice(false,ptrWriteEmpData->employeeBonus));
	fprintf(fp,"\nCOST TO COMPANY,,%.0f,%.0f",calcChoice(true,ptrWriteEmpData->employeeCTC),calcChoice(false,ptrWriteEmpData->employeeCTC));
	fprintf(fp,",,,,,NET PAY");
	fprintf(fp,"\n,,,,,,,ESI,%.0f",calcChoice(true,ptrWriteEmpData->employeeEmployeeESI));
	fprintf(fp,"\n,,,,,,,PF,%.0f",calcChoice(true,ptrWriteEmpData->employeeEmployeePF));
	fprintf(fp,"\nFor Aditya Birla Nuvo Limited,,,,,,,PT,%.0f",calcChoice(true,ptrWriteEmpData->employeeProfessionalTax));
	fprintf(fp,"\n(Unit: Europa),,,,,,,TD,%.0f,%.0f",calcChoice(true,(ptrWriteEmpData->employeeEmployeeESI+ptrWriteEmpData->employeeEmployeePF+ptrWriteEmpData->employeeProfessionalTax)),calcChoice(true,ptrWriteEmpData->employeeNetSalary));
	fprintf(fp,"\n\n\n");
	fprintf(fp,"\nM. Krishnamoorthy");
	fprintf(fp,"\nManager - Human Resources\n\n\n");
}

UDT CSalaryCore::calcChoice(bool isMonthly,UDT value){
	if(executiveInputDetails.isCalOnMonthlyBasis){
		if(isMonthly){
			return value;
		}
		else{
			return (value * 12);
		}
	}
	else{
		if(isMonthly){
			return (value/12);
		}
		else{
			return value;
		}
	}
}