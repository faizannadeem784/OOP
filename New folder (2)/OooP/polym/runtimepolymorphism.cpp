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

class access{
	public:
	int Access()
	{
	int x;
	cout<<"\n\tpress.1 for cat\n\n\tpress 2.for dog";	
	cin>>x;
	if(x==1)
	{
	Animal *a;
	dog d;
	a=&d;
	a->walk();
	}
	else if(x==2)
	{
	Animal *a;
	cat c;
	a=&c;
	a->walk();
	}
	else
	{
		cout<<"\nYou enter an invalid number";
	}
		}
};
int main()
{
	access a;
	a.Access();
	
	return 0;
	
}
