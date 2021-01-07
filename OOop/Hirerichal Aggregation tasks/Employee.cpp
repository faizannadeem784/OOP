#include<iostream>
#include<string>
using namespace std;
class Employee{
	private:
		int E_ID;
		string E_name,E_skills;
		public:
		Employee(int a,string b,string c)
		{
			E_ID=a;
			E_name=b;
			E_skills=c;
		}
		void display()
		{
			cout<<endl<<"The Employee ID is:"<<E_ID;
			cout<<endl<<"The Employee Name is:"<<E_name;
			cout<<endl<<"The Employee Skills is:"<<E_skills;		
		}
};
class skills{
	protected:
	Employee * employee;
	public:
	string Skills;
	skills(string a,Employee* employee)
	{
		this->Skills=a;
		this->employee=employee;
	}
	void disp()
	{
		cout<<endl<<"The Employee Expert in:"<<Skills;
		cout<<endl<<"The Reference is:"<<employee;
	}
};
int main()
{
	Employee e1=Employee(5002,"Faizan_Nadeem","Python,Java,C++");
	skills s1=skills("JAVA_SCRIPT,HTML",&e1);
	e1.display();
	s1.disp();
}
