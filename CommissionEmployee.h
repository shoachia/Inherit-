#ifndef COMMISSION_H
#define COMMISSION_H

#include "Employee.h"
class CommissionEmployee:public Employee
{
	public:
		CommissionEmployee(const string&,const string&,const string&,int=1,int=1,int=1900,double=0.0,double=0.0);
		void setCommissionRate(double);
		double getCommissionRate() const;
		void setGrossSales(double);
		double getGrossSales() const;
		virtual double earnings() const;
		virtual void print() const;
		//virtual Date getBirthDate() const=0;
	private:
		double grossSales;
		double commissionRate;
};
#endif

