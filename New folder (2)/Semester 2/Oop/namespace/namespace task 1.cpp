#include<iostream>
#include<cstring>
using namespace std;
namespace virus{
	class virus1{
		public:
			char about_virus[1000]="\n\nVirus is a infectious agent";
			int display()
			{
				cout<<"\nWhat is a virus?"<<about_virus;
				cout<<"\nThe length of Virus information is:"<<strlen(about_virus)<<" characters";
			}
	};
}
namespace corona_virus{
	class corona_virus1:virus::virus1{
	public:
		char symp[100]="SHORTNESS.";
		void display()
		{
			cout<<"\nThe Symptoms of Corona Virus is:"<<symp;
			cout<<"\nThe Length of Symptoms is:"<<strlen(symp);
		}
	};
	using namespace virus;
	using namespace corona_virus;
}
int main()
{
	virus::virus1 a;
	corona_virus::corona_virus1 b;
	a.display();
	b.display();
}
