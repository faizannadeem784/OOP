#include<iostream>
#include<string>
using namespace std;
class virus{
	protected:
		int Id;
		string name,type;
		public:
		void Virus(int a,string b,string c)
		{
			Id=a;
			name=b;
			type=c;
		}
};
class corona_virus:public virus{
protected:
	string Properties;
	public:
	void propertie(string z)
	{
		Properties=z;
	}
};
class hynta_virus
{
	public:
	int ID;
	string Name,Type,Property;
	void property(int d,string e,string f,string g)
{
	ID=d;
	Name=e;
	Type=f;
	Property=g;
}
};
	class Display:public corona_virus,public hynta_virus
	{
		public:
		void display()
	{
	cout<<endl<<"The ID is :"<<Id<<endl<<"The name is :"<<name<<endl<<"The Type is :"<<type<<endl<<"The Properties is :"<<Properties;
	cout<<endl<<"\t\t**********Symptoms & Properties of Hynta Virus**********";
	cout<<endl<<"The ID is :"<<ID<<endl<<"The name is :"<<Name<<endl<<"The Type is :"<<Type<<endl<<"The Properties is :"<<Property;
	}
};
int main()
{
	Display disp;
	cout<<endl<<"\t\t**********Symptoms & Properties of Corona Virus**********";
	disp.Virus(19,"Fever","Covid_19");
	disp.propertie("Fever,Flue,Coughing,sneezing,Breath Problems");
	disp.property(28,"Hynta_17","Fever_Death","Fever,Flue,Coughing and than after Death");
	disp.display();
	
}
