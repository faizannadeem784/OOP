#include<iostream>
using namespace std;
void fun(int);
void fun(int &);
int main()
{
	//int a=10;
	fun(10);
}
void fun(int x)
{
	int a;
	a=x;
	cout<<endl<<"Value of X is:"<<a;
}
void fun(int &y)
{
	//int a;
	//a=x;
	cout<<endl<<"Value of Y is:"<<y;
}
