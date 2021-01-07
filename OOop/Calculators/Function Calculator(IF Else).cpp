#include<iostream>
using namespace std;
void add()//creating add function
{
	int x,y;
	cout<<"Enter the value of 1st number\n"<<endl;
	cin>>x;
	cout<<"Enter the value of 2nd number\n"<<endl;
	cin>>y;
	cout<<x<<"+"<<y<<"="<<x+y;	
}
void subtract()//creating subtract function
{
	int x,y;
	cout<<"Enter the value of 1st number\n"<<endl;
	cin>>x;
	cout<<"Enter the value of 2nd number\n"<<endl;
	cin>>y;
	cout<<x<<"-"<<y<<"="<<x-y;	
}
void division()//creating division function
{
	int x,y;
	cout<<"Enter the value of 1st number\n"<<endl;
	cin>>x;
	cout<<"Enter the value of 2nd number\n"<<endl;
	cin>>y;
	cout<<x<<"/"<<y<<"="<<x/y;	
}
void multiply()//creating multiplication function
{
	int x,y;
	cout<<"Enter the value of 1st number\n"<<endl;
	cin>>x;
	cout<<"Enter the value of 2nd number\n"<<endl;
	cin>>y;
	cout<<x<<"*"<<y<<"="<<x*y;	
}
void remainder()//creating remainder function
{
	int x,y;
	cout<<"Enter the value of 1st number\n"<<endl;
	cin>>x;
	cout<<"Enter the value of 2nd number\n"<<endl;
	cin>>y;
	cout<<x<<"%"<<y<<"="<<x%y<<endl;	
}
void evenodd()//creating even odd function
{
	int x;
	cout<<"Enter the number\n"<<endl;
	cin>>x;
	if(x%2==0)
	{
		cout<<x<<" is an Even number"<<endl;
	}	
	else
	{
		cout<<x<<" is an odd number"<<endl;
	}
}
int main()//program body
{
	 char get;//declarartion
	do 		 
	
	{
	 	int number;
		cout<<"\nWelcome to my calculator\tFaizan Nadeem";
		cout<<"\n\t\tpress\n";
		cout<<"\t\t1. For addition\n";
		cout<<"\t\t2. For subtraction\n";
		cout<<"\t\t3. For division\n";
		cout<<"\t\t4. For multiplication\n";
		cout<<"\t\t5. For remainder\n";
		cout<<"\t\t6. For Even odd function\n";
		cin>>number;		
			
				if(number==1)
			{
				add();
				cout<<"\nDo you want to use this calculator again(yes or no)";
				cin>>get;
			}
				else if(number==2)
			{
				subtract();
				cout<<"\nDo you want to use this calculator again(yes or no)";
				cin>>get;
			}
				else if(number==3)
			{	
				division();
				cout<<"\nDo you want to use this calculator again(yes or no)";
				cin>>get;
			}
				else if(number==4)
			{	
				multiply();
				cout<<"\nDo you want to use this calculator again(yes or no)";
				cin>>get;
			}
				else if(number==5)
			{	
				remainder();
				cout<<"\nDo you want to use this calculator again(yes or no)";
				cin>>get;
			}
				else if(number==6)
			{	
				evenodd();
				cout<<"\nDo you want to use this calculator again(yes or no)";
				cin>>get;
			}
				else
			{	
				cout<<"\nDo you want to use this calculator again(yes or no)";
				cin>>get;
			}
		
		}
		while(get=='y'||get=='Y');
	}
