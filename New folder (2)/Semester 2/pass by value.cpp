#include<iostream>
using namespace std;
void function(int &a)
{
	a+=4;
	cout<<a<<endl;
}
int main()
{
	int x=5;
	function(x);
	cout<<x;
}

