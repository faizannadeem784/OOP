#include<iostream>
#include<string>
using namespace std;
int main()
{
	int size;
	cout<<"How many names you want to print"<<endl;
	cin>>size;
	string array[size];//={"shan","ali","faizan","nadeem"};
	for(int i=0;i<size;i++)
	{
		cout<<endl<<i+1<<".Enter the "<<i+1<<" string=";
		cin>>array[i];
		
	}
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";//<<endl;//<<endl;
		
	}
	
	int x;
	cout<<"\nhow many time this name you want to print"<<endl;
	cin>>x;
	//for(int i=0;i<size;i++)
	
	{
		for(int i=1;i<=x;i++)	
		cout<<array[i]<<" ";//<<endl;
		cout<<endl;
	}
	
	//cout<<" "<<endl;
	/*{
		break;
	}*/
	
	/*if(x==infinity||Infinity)
	{
		for(int i=1;i<=x;i--)
		cout<<array[i]<<endl;
	}*/
}
