#ifndef GRADE_THREE_H
#define GRADE_THREE_H

#include "SalaryStructure.h"

class CGradeThree: public AbstractSalaryStructure
{
public:
	CGradeThree(char *executiveName,bool isCalOnMonthlyBasis);
	~CGradeThree();
private:
	void getEmployeeData(PTREMPDATA ptrEmpData);
	void structureSalaryComponent(UDT empAmount,short calcViaType);
};
#endif