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
		Employee() //default constructor
		{
			cout<<"\nDefault Constructor"<<endl;
			strcpy(name, "amit");
			id = 101;
			strcpy(dept,"sales");
			basic_salary = 15000;
			
		}
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
		Employee(char *name2, int *id1, char *dept2, int *basic) // dynamic constructor
		{
			cout<<"\nDynamic Constructor"<<endl;
			strcpy(name, name2);
			id = *id1;
			strcpy(dept, dept2);
			basic_salary = *basic;
		}
		
		~Employee()
		{
			cout<<"\nDestructor"<<endl;
			
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
	Employee e1; // default constructor
	Employee e2("Aashvi", 102, "HR", 25000); // para. constructor
	Employee e3(e2); //copy constructor
	char name[] = "Zeel";
	int id = 104;
	char dept[] = "Marketing";
	int bs = 21000;
	Employee e4(name, &id, dept, &bs); // dynamic constructor
	
	e1.display();
	e2.display();
	e3.display();
	e4.display();
	
	
	
	
}
