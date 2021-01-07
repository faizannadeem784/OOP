#include<iostream>
#include<string>
using namespace std;
class Virus{
	public:
	string name,type;
	int id;
	int virus()
	{
		id=29;
		name="COVIID_19";
		type="FEVER";
		
	}
};
	class corona_virus:public Virus
	{
		string properties;
		int Properties()
		{
			properties="Fever,Flue,Sneezing,Coughing,Breath problems";
		}
	};
	int main()
	{
		corona_virus cov;
		cout<<cov.id;
		cout<<cov.type;
		
	}

