#include<iostream>
#include<string>
using namespace std;
class virus{
	public:
	int ID;
	string Name,type;
	int Virus()
	{
		ID=20;
		type="Fever";
		Name="COVID_19";
	}
};
class corona_virus:public virus{
	public:
	string Properties;
	void properties()
	{
		Properties="Fever,Flue,Coughing,sneezing,Breath Problems";
	}	
};
int main()
{
	corona_virus cov;
	cout<<endl<<"\t\t**********Symptoms & Properties of Corona Virus**********";
	cout<<endl<<"The ID is="<<cov.ID;
	cout<<endl<<"The Name is:"<<cov.Name;
	cout<<endl<<"The Type is="<<cov.type;
	cout<<endl<<"The Properties of Corona is:"<<cov.Properties;
}
