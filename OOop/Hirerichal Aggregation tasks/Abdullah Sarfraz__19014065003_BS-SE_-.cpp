#include<iostream>
#include<string>
using namespace std;
class Employee{
	private:
		int E_ID;
		string E_name,E_skills;
		public:
		Employee(int ID,string name,string skills)
		{
			E_ID=ID;
			E_name=name;
			E_skills=skills;
		}
		void disp()
		{
			cout<<endl<<"Employee ID is:"<<E_ID;
			cout<<endl<<"Employee Name is:"<<E_name;
			cout<<endl<<"Employee Skills is:"<<E_skills;		
		}
};
class skills{
	protected:
	Employee * employ;
	public:
	string Skills;
	skills(string a,Employee* employ)
	{
		this->Skills=a;
		this->employ=employ;
	}
	void disp()
	{
		cout<<endl<<"The Employee Expert in:"<<Skills;
		cout<<endl<<"The Reference is:"<<employ;
	}
};
int main()
{
	Employee e1=Employee(6298,"Abdullah Sarfraz","C++,Python,Java,HTML");
	skills s1("JAVA_SCRIPT",&e1);
	e1.disp();
	s1.disp();
}
