#include<iostream>
using namespace std;
class employee{
	public:
	int id;
	string E_name,E_skills;
	employee(int id,string E_name,string E_skills)
	{
		id=id;
		E_name=E_name;
		E_skills=E_skills;	
	}	
	void dispay()
	{
		cout<<endl<<"The Employee ID is:"<<id;
		cout<<endl<<"The Employee Name is:"<<E_name;
		cout<<endl<<"The Employee Skills is:"<<E_skills;	
	}
};
class Skills{
	private:
		employee* emp;
		public:
		string skills;
		Skills(string skills,employee* emp)
		{
			this->skills=skills;
			this->emp=emp;
		}	
		void disp()
		{
			cout<<endl<<"Reference is:"<<emp;
			cout<<endl<<"The Skills  is:"<<skills;
		}
			
};
int main()
{
	employee e1(19014065002,"Faizan Nadeem","C++,Java,Python");
	Skills s1("Java Script",&e1);
	e1.dispay();
	s1.disp();
}
