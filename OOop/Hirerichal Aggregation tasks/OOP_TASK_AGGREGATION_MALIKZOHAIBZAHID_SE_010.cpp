#include<iostream>
#include<string>
using namespace std;
class Employee{
	public:
		int id;
		string Ename;
		string Eskill;
		Employee(int a,string b,string c)
		{
			id = a;
			Ename = b;
			Eskill = c;
		}
		void disp()
			{
				cout<<"Employee ID     :"<<id<<"\n";
				cout<<"Employee Name   :"<<Ename<<"\n";
				cout<<"Eskill          :"<<Eskill<<"\n";
			}
};
class Skill{
	private:
		Employee* emp;
		public:
			string skills;
			Skill(string skills,Employee* emp)
			{
				this->skills=skills;
				this->emp=emp;
			}
			void disp_info()
			{
				cout<<"Reference     :"<<emp<<"\n";
				cout<<"Skills        :"<<skills<<"\n";
			}
};
int main()
{
	Employee e1(1914,"MalikZohaibZahid","PYTHON,C++,HTML");
	Skill s1("Java",&e1);
	e1.disp();
	s1.disp_info();
	return 0;
	
}
