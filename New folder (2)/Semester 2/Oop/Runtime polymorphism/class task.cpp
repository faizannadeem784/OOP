#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
	string uname="person";
	int password=123;
	virtual void login()=0;	
};
class batch_adviser:public Person{
	public:
	string uname;
	int password;
	void login(string a,int b)
	{
		uname=a;
		password=b;
		if(uname=="batch"&&password==123)
	{
		
		
			cout<<endl<<"Welcome to batch adviser portal";
		
	}
	
	else
	{
		cout<<endl<<"You enter invalid password";
	}
}
};
class student:public Person{
	public:
	string uname;
	int password;
	
	void login(string a,int b)
	{
		uname=a;
		password=b;
		if(uname=="student"&&password==123)
	{
		
		
			cout<<endl<<"Welcome to the student portal";
		
	}
	
	else
	{
		cout<<endl<<"You enter invalid password";
	}
}
};
int main()
{
	Person *P;
	//person P;
	//P.printinfo(1826,"Zain",20);
	batch_adviser b;
	P=&b;
	P->login("batch",123);
	student S;
	P=&S;
	P->login("student",123);

}
