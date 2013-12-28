#ifndef CORE_H
#define CORE_H

#include <stdio.h>

#include "CGradeOne.h"
#include "CGradeTwo.h"
#include "CGradeThree.h"

typedef struct SEmployeeInputDetails
{
	char execName[MAX_NAME_LENGTH];
	short execGradeType;
	short calcViaType;
	bool isCalOnMonthlyBasis;
	UDT execAmount;
	SEmployeeInputDetails();
	SEmployeeInputDetails(char* srcName,UDT totalAmount,short calType,short gradeType,bool isMonthly);
}EMPINPUTDETAILS,*PTREMPINPUTDETAILS;

class CSalaryCore
{
public:
	CSalaryCore(PTREMPINPUTDETAILS execInputDetails);
	~CSalaryCore();
	void doStructuringOfSalary();
	void printSalaryComponent();
private:
	AbstractSalaryStructure* getInstance();
	void vWriteToFile(PTREMPDATA ptrWriteEmpData);	
	void vWriteData(FILE* fp,PTREMPDATA ptrWriteEmpData);
	UDT calcChoice(bool isMonthly,UDT value);// Used for checking the calculation choosen and displaying the number accordingly
public:
	//Data Members
	EMPINPUTDETAILS executiveInputDetails;
	AbstractSalaryStructure *empObj;
};
#endif