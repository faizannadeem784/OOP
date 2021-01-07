#include<iostream>
#include<string>
using namespace std;
class virus{
	protected:
		int id;
		string name,type;
		public:
		void Virus(int a,string b,string c)
		{
			id=a;
			name=b;
			type=c;
		}
};
class corona_virus:public virus{
protected:
	string Properties;
	public:
	void properties(string x)
	{
		Properties=x;

	}
	void display()
	{
	cout<<endl<<"The ID is :"<<id<<endl<<"The name is :"<<name<<endl<<"The Type is :"<<type<<endl<<"The Properties is :"<<Properties;
	}
};
int main()
{
	corona_virus cov;
	cout<<endl<<"\t\t**********Symptoms & Properties of Corona Virus**********";
	cov.Virus(19,"Fever","Covid_19");
	cov.properties("Fever,Flue,Coughing,sneezing,Breath Problems");
	cov.display();
}
