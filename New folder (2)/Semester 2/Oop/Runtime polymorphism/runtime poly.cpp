#include<iostream>
#include<string>
using namespace std;
class person{
	public:
		int pass;
		string uname;
		virtual void login()=0;
		
};
class student:public person{
	public:
		int pass;
		string uname;
		public:
			void login()
			{
				cout<<"*****STUDENT Portal*****"<<endl;
				cout<<"Enter uname"<<endl;
				cin>>uname;
				cout<<"Enter pass"<<endl;
				cin>>pass;
				if(pass==123&&uname=="student")
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
			cout<<"*****Batch_Advisor portal*****"<<endl;
			cout<<"Enter uname"<<endl;
			cin>>uname;
			cout<<"Enter pass"<<endl;
			cin>>pass;
			if(pass==123&&uname=="batch")
			{
				cout<<"Welcome to batch advisor derived class"<<endl;
			}
			else
			{
				cout<<"You Have Enter An Invalid ID or PASS";
			}
				//break;
		}
};
int main()
{
	person *p;
	student std;
	p = &std;
	p->login();
	batch_advisor ba;
	p = &ba;
	p->login();
	return 0;
	
}
