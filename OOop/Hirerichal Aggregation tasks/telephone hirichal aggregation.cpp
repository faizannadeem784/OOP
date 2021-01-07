#include<iostream>
#include<string>
using namespace std;
class address{
	
	string address_line,city,state;
	public:
	address(string a,string b,string c)
	{
		address_line=a;
		city=b;
		state=c;
	}
	void display()
	{
		//cout<<endl<<"The Employee ID is:"<<id;
		//cout<<endl<<"The Employee Name is:"<<name;	
		cout<<endl<<"The Address Line is:"<<address_line;
		cout<<endl<<"The City is:"<<city;
		cout<<endl<<"The State is:"<<state;
	}
	
};
class employee{
	
	address* Address;
	public:
	int id;
	string name;
	employee(int id,string name,address*Address)
	{
		this->id=id;
		this->name=name;
		this->Address=Address;	
	}
	void display()
	{
		cout<<endl<<"The Employee ID is:"<<id;
		cout<<endl<<"The Employee Name is:"<<name;	
		cout<<endl<<"The Reference Address is:"<<Address;
		//cout<<endl<<"The Address Line is:"<<address_line;
		//cout<<endl<<"The City is:"<<city;
		//cout<<endl<<"The State is:"<<state;
	}
};
int main()
{
	address a1=address("C_146","SEC_15","Punjab");
	employee e1=employee(101,"Faizan",&a1);
	a1.display();
	e1.display();
}
