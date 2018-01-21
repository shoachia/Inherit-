#ifndef SALARIED_H
#define SALARIED_H

#include "Employee.h"

class SalariedEmployee : public Employee //inheritance from Employee.h
{
	public:
		SalariedEmployee (const string&,const string&,const string&,int=1,int=1,int=1900,double=0.0);
		void setWeeklySalary(double);
		double getWeeklySalary() const;
		virtual double earnings() const;
		virtual void print() const;
		//virtual Date getBirthDate() const=0;
	private:
		double weeklySalary;

		
};
#endif
