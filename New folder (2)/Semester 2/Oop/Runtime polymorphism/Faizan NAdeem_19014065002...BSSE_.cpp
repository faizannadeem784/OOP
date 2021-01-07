#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		int password;
		string uname;
		virtual void login()=0;
		
};
class Batch_adviser:public Person{
	public:
		int password;
		string uname;
		
		void login()
		{
			cout<<"**********Batch_Advisor portal**********"<<endl;
			cout<<"Enter username"<<endl;
			cin>>uname;
			cout<<"Enter password"<<endl;
			cin>>password;
			if(password==123&&uname=="batch")
			{
				cout<<"Welcome to batch advisor derived class"<<endl;
			}
			else
			{
				cout<<"You Have an Invalid ID or Password";
			}
	}
};

class Student:public Person{
	public:
		int password;
		string uname;
		public:
			void login()
			{
				cout<<"**********STUDENT Portal**********"<<endl;
				cout<<"Enter userame"<<endl;
				cin>>uname;
				cout<<"Enter password"<<endl;
				cin>>password;
				if(password==123&&uname=="student")
				{
					cout<<"Welcome to student drived class"<<endl;
				}
				else
				{
					cout<<"You Have Enter an invalid password";
				}
	}
};
int main()
{
	Person *p;
	Student std;
	p = &std;
	p->login();
	Batch_adviser b;
	p = &b;
	p->login();
	return 0;
	
}
