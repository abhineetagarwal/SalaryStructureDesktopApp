#ifndef SALARY_STRUCTURE_H
#define SALARY_STRUCTURE_H

#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 30 //Maximum length of name

#define CALC_VIA(X) ((X==1) ? (CALCULATE_VIA_GROSS) : ((X==2) ? (CALCULATE_VIA_CTC) : CALCULATE_VIA_NETPAY))
#define GRADE_TYPE(X) ((X==1) ? (GRADE_ONE) : ((X==2) ? (GRADE_TWO) : GRADE_THREE))
#define IS_MONTHLY(X) (((X=='Y')||(X=='y')) ? true : false)

//Structuring Via Gross or CTC or Net Pay
#define CALCULATE_VIA_GROSS		11 //Structure the salary component based on Gross Salary
#define CALCULATE_VIA_CTC		12 //Structure the salary component based on CTC
#define CALCULATE_VIA_NETPAY	13 //Structure the salary component based on Net Pay

typedef double UDT;

typedef struct SEmployeeBasicNorms
{
	short calculationChoosen;
	int mediumSalaryRange;
	int lowSalaryRange;
	UDT highSalariedEmployee;
	UDT mediumSalariedEmployee;
	UDT lowSalariedEmployee;
	int maxESIProvisionRange;
	UDT gradeOneMRI;
	UDT gradeTwoMRI;
	UDT gradeThreeMRI;
	UDT conveyanceAllowance;
	UDT employeeBonus;
	void vInitializeBasicNorms(bool isCalOnMonthlyBasis);		
}EMPBASICNORMS,*PTRBASICNORMS;

typedef struct SEmployeeData
{
	char employeeName[MAX_NAME_LENGTH];
	UDT employeeBasicSalary;
	UDT employeeHRA;
	UDT employeeSpecialAllowance;
	UDT employeeConveyanceAllowance;
	UDT employeeGrossSalary;
	UDT employeeMedicalReimbursement; 
	UDT employeeEmployerPF;
	UDT employeeEmployeePF;
	UDT employeeGratuity;
	UDT employeeBonus;
	UDT employeeCTC;
	UDT employeeNetSalary;
	UDT employeeEmployerESI;
	UDT employeeEmployeeESI;
	UDT employeeProfessionalTax;
	SEmployeeData();
}EMPDATA,*PTREMPDATA;

class ISalaryStructure
{	
public:
	//Member Function
	virtual ~ISalaryStructure(){}
	virtual void getEmployeeData(PTREMPDATA ptrEmpData) = 0;
	virtual void structureSalaryComponent(UDT empAmount,short calcViaType) = 0;
	virtual void salaryStructuringViaGross() = 0;
	virtual void salaryStructuringViaCTC() = 0;
	virtual void salaryStructuringViaNetPay() = 0;
};

class AbstractSalaryStructure:public ISalaryStructure
{	
public:
	//Member Function
	virtual ~AbstractSalaryStructure(){}
	virtual void getEmployeeData(PTREMPDATA ptrEmpData) = 0;
	virtual void structureSalaryComponent(UDT empAmount,short calcViaType) = 0;
	void salaryStructuringViaGross();
	void salaryStructuringViaCTC();
	void salaryStructuringViaNetPay();
public:
	//Data Members
	EMPBASICNORMS empBasicNorms;
	EMPDATA empData;
};
#endif
