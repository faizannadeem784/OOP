#include<iostream>
using namespace std;
class Distance{
	private:
	int meter=8;
		public:
		Distance(): meter(0){}
		void good()
		{
			cout<<endl<<"I am Good ";
		}
		friend int addfive(Distance);
};
int addfive(Distance a)
{
	a.meter+=5;
	a.good();
	return a.meter;
	
}
int main()
{
	Distance d;
	cout<<"Distance\n "<<addfive(d);
}
