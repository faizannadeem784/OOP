#include<iostream>
using namespace std;
class Animal{
	public:
		virtual void walk()
		{
			cout<<"\n animal walk";
		}
							
};
class dog: public Animal
{
	void walk()
	{
		cout<<"dog walk";
	}
};
class cat: public Animal
{
	void walk()
	{
		cout<<"Inside cat walk";
	}
};
int main()
{
	Animal *a;
	dog d;
	a=&d;
	a->walk();
	
	return 0;
	
}
