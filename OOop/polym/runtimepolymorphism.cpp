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
//Q#4: Yes! I applied above in the code as well.
//Q#5: In Encapsulation we can protect our data from the user . So as we used private member so they should not be accessed outside of the classes .
//Q#6: Function overloading is a C++ programming is to have more than one function having same name and compiler will run them based on the parameters.

