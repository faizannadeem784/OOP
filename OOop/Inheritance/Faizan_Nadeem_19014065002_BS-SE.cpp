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
class corona_virus:public virus
{
	public:
	string Properties;
	int properties()
	{
		Properties="Fever,Flue,Coughing,sneezing,Breath Problems";
		
	}	
};
int main()
{
	corona_virus COV;
	cout<<endl<<"\t\t**********Properties & Symptoms of Corona Virus**********";
	cout<<endl<<"The ID is:"<<COV.ID;
	cout<<endl<<"The Name is:"<<COV.Name;
	cout<<endl<<"The Type is:"<<COV.type;
	cout<<endl<<"The Properties of Corona is:"<<COV.Properties;
}
