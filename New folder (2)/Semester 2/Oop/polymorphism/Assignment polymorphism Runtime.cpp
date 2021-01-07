#include<iostream>
#include<string>
using namespace std;
class person{
	public:
	int ID,age;
	string name,DOB="18_October_1999";
	virtual void printinfo(int a,string b,int c)
	{
		ID=a;
		name=b;
		age=c;
		cout<<endl<<"**********Person**********";
		cout<<endl<<"The Person ID is:"<<ID;
		cout<<endl<<"The Person Name is:"<<name;
		cout<<endl<<"The Person Age is:"<<age;
		cout<<endl<<"The Person Date of birth is:"<<DOB;
	} 
		
};
class batch_advisor:public person{
	public:
	int ID,age;
	string name,DOB="12_March_2001";
	void printinfo(int a,string b,int c)
	{
		ID=a;
		name=b;
		age=c;
		cout<<"\n**********Batch Advisor**********";
		cout<<endl<<"The Batch Advisor ID is:"<<ID;
		cout<<endl<<"The Batch Advisor Name is:"<<name;
		cout<<endl<<"The Batch Advisor Age is:"<<age;
		cout<<endl<<"The Batch Advisor Date of birth is:"<<DOB;
		
	}
};
class student:public person{
	public:
	int ID,age;
	string name,DOB="12_january_1999";
	void printinfo(int a,string b,int c)
	{
		ID=a;
		name=b;
		age=c;
		cout<<endl<<endl<<"**********Student**********";	
		cout<<endl<<"The Student ID is:"<<ID;
		cout<<endl<<"The Student Name is:"<<name;
		cout<<endl<<"The Student Age is:"<<age;
		cout<<endl<<"The Student Date of birth is:"<<DOB;
		
	}	
};
int main()
{
	//person *p;
	person P;
	P.printinfo(1826,"Zain",20);
	batch_advisor B;
	p=&B;
	p->printinfo(19014,"Faizan",19);
	student S;
	p=&S;
	p->printinfo(1422,"Abdullah",19);
	
}

