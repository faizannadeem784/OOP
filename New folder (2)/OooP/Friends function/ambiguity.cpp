#include<iostream>
using namespace std;
void fun(int i);
void fun(float j);
void fun(int i)
{
	int a;
	a=i;
	cout<<"value of i is:"<<a;
}
void fun(float j)
{
	float a;
	a=j;
	cout<<endl<<"Value of j is:"<<j;
}
int main()
{
	fun(5);
	fun(float(1.2));
}
