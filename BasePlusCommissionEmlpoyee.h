#ifndef BASEPLUS_H
#define BASEPLUS_H
#include "CommissionEmployee.h" 
class BasePlusCommissionEmployee:public CommissionEmployee
{
	public:
		BasePlusCommissionEmployee(const string&, const string&,const string&,int=1,int=1,int=1900,double=0.0,double=0.0,double=0.0);
		void setBaseSalary(double);
		double getBaseSalary() const;
		virtual double earnings() const;
		virtual void print() const;
		//virtual Date getBirthDate() const=0;
	private:
		double baseSalary;
};
#endif
