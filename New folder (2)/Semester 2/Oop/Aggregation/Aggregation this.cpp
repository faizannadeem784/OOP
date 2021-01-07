#include<iostream>
#include<string>
using namespace std;
class Employee{
	public:
	int E_id;
	string E_name,E_skills;
	Employee(int a,string b,string c)
	{
		E_id=a;
		E_name=b;
		E_skills=c;
	}
	void display()
	{
		cout<<endl<<"The Employee ID is:"<<E_id;
		cout<<endl<<"The Employee Name is:"<<E_name;
		cout<<endl<<"The Employee Skills is:"<<E_skills;
	}
};
class skills{
	protected:
	Employee* emp;
	public:
	string Skills;
	skills(string a,Employee* emp)
	{
		this->Skills=a;
		this->emp=emp;
	}
	void display()
	{
		cout<<endl<<"The Employee Expert in:"<<Skills;
		cout<<endl<<"The Employee Refrence is:"<<emp;
	}
};
int main()
{
	Employee e1=Employee(5002,"FAIZAN_NADEEM","C++,Python,Java_Script");
	skills s1=skills("C++,JAVA,Python",&e1);
	e1.display();
	s1.display();
}
