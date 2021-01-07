#include<iostream>
#include<string>
using namespace std;
class person{
	public:
		int pass;
		string uname;
		virtual void login()
		{
			//pass = 0;
			//uname = 0;
		}
};
class student:public person{
	public:
		int pass;
		string uname;
		public:
			void login()
			{
				cout<<"*****STUDENT*****"<<endl;
				if(pass==123&&uname=="Zohaib")
				{
					cout<<"Welcome to student drived class"<<endl;
				}
				else
				{
					cout<<"You Have Enter An Invalid ID or PASS";
				}
				//break;
			}
};
class batch_advisor:public person{
	public:
		int pass;
		string uname;
		
		void login()
		{
			cout<<"*****Batch_Advisor*****"<<endl;
			if(pass==123&&uname="Talha")
			{
				cout<<"Welcome to batch advisor derived class"<<endl;
			}
			else
			{
				cout<<"You Have Enter An Invalid ID or PASS";
			}
				break;
		}
};
int main()
{
	person *p
	student std;
	p = &std;
	p->login();
	batch_advisor ba;
	p = &ba;
	p->login()
	return 0;
	
}
