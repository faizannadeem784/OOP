#include<iostream>
#include<string>
using namespace std;
class Virus{
	public:
	int id;
	string name,type;
	int virus()
	{
		id=20;
		name='COVID-19';
		type='FEVER';
	}
};
class corona_virus:public Virus
{
	public:
	string properties;
	int Properties()
	{
		properties='Fever,Flue,Sneezing,Coughing,Breath problems';	
	}	
};
int main()
{
	corona_virus covid;
	cout<<covid.name;
}
