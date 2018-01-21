#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
#include"Date.h"
using namespace std;
class Employee
{
	public:
		
		Employee(const string&,const string &,const string&,int=1,int=1,int=1900);
		void setFirstName(const string&);
		string getFirstName() const;
		void setLastName(const string&);
		string getLastName() const;
		void setSocialSecurityNumber(const string&);
		string getSocialSecurityNumber() const;
		virtual double earnings() const=0;
		virtual void print() const;
		virtual Date getBirthDate() const;
		
	private:
		string firstName;
		string lastName;
		string socialSecurityNumber;
		int month;
		int day;
		int year;
};
#endif
