#include<iostream>
using namespace std;
int main()
{
	int x=4,pssw,usr;
	do
	{
		
		cout<<endl<<"\n\n\t\tEnter the Username:";
		cin>>usr;
		cout<<endl<<"\n\n\t\tEnter the Password:";
		cin>>pssw;
		if(usr==1234&&pssw==1234)
		{
			cout<<endl<<"Welcome to the Login:)";
			cout<<endl<<"\t\t\t****************************************";
			break;
		}
		else
		{
			cout<<endl<<"Invalid Username or Password";
			cout<<endl<<"\t\t\t****************************************";
		}
		cout<<endl<<"You have "<<x<<" more try";
	--x;
	
	}
	while(x>1);
	
	if(usr!=1234&&pssw!=1234)
	{
		cout<<"\n\t**********Sorry You cannot try again***********";
	}
}
