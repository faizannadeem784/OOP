#include<iostream>
#include<string>
using namespace std;
namespace virus
	{
	class virus{
		public:
			string about_virus = "A virus is an infectionus agent";
			void disp_data()
			{
				cout<<"What is virus"<<about_virus;
			}
	};
}

namespace corona_virus{
	class corona_virus: virus::virus
		{
		public:
			char symp[1000]="Shortness";
			public:
			void disp()
			{
				cout<<"Symptoms ="<<symp;
				cout<<"Lenght of corona_virus symptoms ="<<strlen(*symp)<<endl;
			} 
	};
}
using namespace virus;
using namespace corona_virus;
int main()
{
	virus::disp_data();
	corona_virus::disp();
	return 0;
}
