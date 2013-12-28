#ifndef SALARY_STRUCTURE_H
#define SALARY_STRUCTURE_H

#include <string.h>

#define MAX_NAME_LENGTH 30 //Maximum length of name

#define CALC_VIA(X) ((X==1) ? (CALCULATE_VIA_GROSS) : ((X==2) ? (CALCULATE_VIA_CTC) : CALCULATE_VIA_NETPAY))
#define GRADE_TYPE(X) ((X==1) ? (GRADE_ONE) : ((X==2) ? (GRADE_TWO) : GRADE_THREE))
#define IS_MONTHLY(X) (((X=='Y')||(X=='y')) ? true : false)

//Structuring Via Gross or CTC or Net Pay
#define CALCULATE_VIA_GROSS		1 //Structure the salary component based on Gross Salary
#define CALCULATE_VIA_CTC		2 //Structure the salary component based on CTC
#define CALCULATE_VIA_NETPAY	3 //Structure the salary component based on Net Pay

//Executive Grade
#define GRADE_ONE	1	//SENIOR EXECUTIVE & ASSISTANT MANAGER
#define GRADE_TWO	2	//JUNIOR EXECUTIVE & EXECUTIVE
#define GRADE_THREE 3	//ASSISTANT SUPERVISOR & SUPERVISOR

//CTC Calculation Technique Data
#define CTC_LIMIT_GRADE_ONE (17610)
#define CTC_LIMIT_GRADE_TWO (17160)
#define CTC_LIMIT_GRADE_THREE (16860)
#define CTC_LIMIT_ANY_GRADE (17071)
#define CTC_GROSS_MRI_RATIO (1.06724) 
#define CTC_GROSS_ESI_RATIO (1.11474)
/* 
	Lets assume x = Gross Salary
	Basic Salary = 40% of Gross Salary, i.e. = 0.4x
	PF = 12% of Basic, i.e. = (0.12*0.4)x
	Gratuity = 4.81% of Basic Salary, i.e. = (0.0481*0.4)x
	Employer ESI = 4.75 of Gross Salary, i.e. = (0.0475)x

	CTC = [Gross Salary + PF + Gratuity + (MRI OR Employer ESI) + Bonus]

	For MRI: CTC = [Gross Salary + PF + Gratuity + MRI + Bonus]
	.'. CTC = x + (0.12*0.4)x + (0.0481*0.4)x + MRI + 350
	.'. CTC = [1 + (0.12*0.4) + (0.0481*0.4)]x + MRI + 350
	.'. CTC = [(1.06724)x + MRI + 350]
	,', CTC_GROSS_MRI_RATIO is set to (1.06724)

	
	For ESI: CTC = [Gross Salary + PF + Gratuity + ESI + Bonus]
	.'. CTC = x + (0.12*0.4)x + (0.0481*0.4)x + (0.0475)x + 350
	.'. CTC = [1 + (0.12*0.4) + (0.0481*0.4) + (0.0475)]x + 350
	.'. CTC = [(1.11474)x + 350]
	,', CTC_GROSS_ESI_RATIO is set to (1.11474)
*/

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
	virtual void salaryStructuringViaCTC(short empGradeType) = 0;
	virtual void salaryStructuringViaNetPay() = 0;
	virtual void calculateGrossDependentComponent() = 0;
};

class AbstractSalaryStructure:public ISalaryStructure
{	
public:
	//Member Function
	virtual ~AbstractSalaryStructure(){}
	virtual void getEmployeeData(PTREMPDATA ptrEmpData) = 0;
	virtual void structureSalaryComponent(UDT empAmount,short calcViaType) = 0;
	void salaryStructuringViaGross();
	void salaryStructuringViaCTC(short empGradeType);
	void salaryStructuringViaNetPay();
	void calculateGrossDependentComponent();
public:
	//Data Members
	EMPBASICNORMS empBasicNorms;
	EMPDATA empData;
};
#endif
