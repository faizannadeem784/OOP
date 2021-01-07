#include<iostream>
using namespace std;
class account{
	public:
		float salary=5000;
};
class programmer:public account{
	
	public:
		float bouns=1000;
};
int main()
{
	programmer p1;
	cout<<endl<<"The Salary is="<<p1.salary;
	cout<<endl<<"The Bonus is="<<p1.bouns;
}

