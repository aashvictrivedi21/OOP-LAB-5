#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
	private:
		char name[30];
		int id;
		char dept[30];
		float basic_salary;
		float DA;
		float HRA;
		float TA;
		float gross_salary;
		
		
	public:
	
	
		Employee(char *name1, int id1,  char *dept1, float bs) // parameterized constructor
		{
			cout<<"\nParameterised Constructor"<<endl;
			strcpy(name, name1);
			id = id1;
			strcpy(dept, dept1);
			basic_salary = bs;
			
		}
		Employee(Employee &e2) // copy constructor
		{
			cout<<"\nCopy Constructor"<<endl;
			strcpy(name, e2.name);
			id = e2.id;
			strcpy(dept, e2.dept);
			basic_salary = e2.basic_salary;
			
		}
		void display()
		{
			
			DA = basic_salary *0.50;
			HRA = basic_salary * 0.30;
			TA = basic_salary * 0.10;
			gross_salary = DA + HRA + TA + basic_salary;
			
			cout<<"\nID: "<<id<<endl;
			cout<<"NAME: "<<name<<endl;
			cout<<"DEPARTMENT: "<<dept<<endl;
			cout<<"BASIC SALARY: "<<basic_salary<<endl;
			cout<<"DEARNESS ALLOWANCE: "<<DA<<endl;
			cout<<"HOUSE RENT ALLOWANCE: "<<HRA<<endl;
			cout<<"TRAVELLING ALLOWANCE: "<<TA<<endl;
			cout<<"GROSS SALARY: "<<gross_salary<<endl;
			
		}
};

int main()
{
	Employee e2("Aashvi", 102, "HR", 25000); // para. constructor
		e2.display();
	Employee e3(e2); //copy constructor
	e3.display();
	
	return 0;
}

