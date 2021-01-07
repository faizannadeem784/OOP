#include<iostream>
#include<cstring>
using namespace std;
namespace virus{
class virus1{
	public:
	char about_virus[1000]="\n\nVirus is an infectious diseses";
	void display()
	{
		cout<<endl<<"\nWhat is a virus?"<<about_virus;
		cout<<endl<<"\nThe length of virus is:"<<strlen(about_virus);
	}	
};
}
namespace corona_virus
{
class corona_virus1//:virus::virus1
{
	public:
	char symp[1000]="\nSneezing,Fever,Coughing";
	void display()
	{
		cout<<endl<<"\nThe symptoms of virus is:"<<symp;
		cout<<endl<<"\nThe length of virus is:"<<strlen(symp);
		}	
};
using namespace virus;
using namespace corona_virus;
}
class access{
	public:
	int Access()
	{
	virus::virus1 vir;
	corona_virus::corona_virus1 covid;
	vir.display();
	covid.display();	
	
	}	
};
int main()
{
	access A;
	A.Access();
	
}
