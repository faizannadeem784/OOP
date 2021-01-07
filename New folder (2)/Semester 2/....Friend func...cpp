#include<iostream>
using namespace std;
class distance{
	private:
		int meter;
		public:
	distance():meter(0) {}
	friend int addfive(distance);		
};
int addfive(distance d);
{
	d.meter+=5;
	return d.meter;
}
int main()
{
	distance D;
	cout<<"DISTANCE:"<<addfive(D);
}
