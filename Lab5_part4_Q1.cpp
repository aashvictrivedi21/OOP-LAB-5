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
	Employee(char *name2, int *id1, char *dept2, int *basic) // dynamic constructor
		{
			cout<<"\nDynamic Constructor"<<endl;
			strcpy(name, name2);
			id = *id1;
			strcpy(dept, dept2);
			basic_salary = *basic;
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
	char name[] = "Zeel";
	int id = 104;
	char dept[] = "Marketing";
	int bs = 21000;
	Employee e4(name, &id, dept, &bs); // dynamic constructor
	e4.display();
	
	return 0;
}

