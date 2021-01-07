#include<iostream>
using namespace std;
class animal{
						public:
						virtual void walk()
						{
							cout<<"\n animal walk";
						}
							
};
class dog: public animal
{
	void walk()
	{
		cout<<"dog walk";
	}
};
class cat: public animal
{
	void walk()
	{
		cout<<"Inside cat walk";
	}
};
int main()
{
	animal *a;
	dog d;
	a=&d;
	a->walk();
	cat c;
	a=&c;
	a->walk();
	return 0;
	
}
