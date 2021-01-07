#include <iostream>
#include <string>
using namespace std;
	class virus
	{
	public: 
		int id; 
		string name,type;
	virus()
		{
			id=31;
			name="Covid_19";
			type="Fever";
		}
	};
class corona_vrius:public virus
	{
	public:
	string symtoms;
	corona_vrius()
	{
		symtoms="Fever,Flue,Coughing,Sneezing,Breath Problems";
	}
	};
int main()
{
	corona_vrius cov;
	cout<<endl<<"\t\t\t**********Symptoms & Properties of Corona Virus**********"<<endl;
	cout<<"ID       : 	"<<cov.id<<endl;
	cout<<"Name     : 	"<<cov.name<<endl;
	cout<<"Type     : 	"<<cov.type<<endl;
	cout<<"Symtoms  : 	"<<cov.symtoms<<endl;
}
