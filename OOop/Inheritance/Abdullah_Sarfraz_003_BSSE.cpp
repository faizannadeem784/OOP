#include <iostream>
#include <string>
using namespace std;
	class virus
	{
	public: 
		int id; 
		string name,type;
		
		co_virus()
		{
			id=22;
			name="Covid_19";
			type="Pneumonia";
			
		}
	};
	
	
	class corona_vrius : public virus
	{
	public:
	string properties;
		
	corona_vrius()
	{
		properties="Influenza, Sneezing, Shortness Of Breath, Fever";
	}
	};
	
	
int main()
{
	corona_vrius covid_19;
	cout<<"ID       : 	"<<covid_19.id<<"\n";
	cout<<"Name     : 	"<<covid_19.name<<"\n";
	cout<<"Type     : 	"<<covid_19.type<<"\n";
	cout<<"Symtoms  : 	"<<covid_19.properties;
}
