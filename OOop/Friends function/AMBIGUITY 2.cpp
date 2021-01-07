#include<iostream>
using namespace std;
void fun(int a);
void fun(int a,int b);
void fun(int a)
{
	int x;
	x=a;
	cout<<endl<<"This is single parameter function:"<<x;
}
void fun(int a,int b=9)
{
	int x,y;
	x=a;
	y=b;
	cout<<endl<<"This is multiple parameter function:"<<x;
	cout<<endl<<"This is multiple parameter function:"<<y;
}
int main()
{
	fun(12,5);
}
