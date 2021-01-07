#include<iostream>
using namespace std;
class Distance{
	private:
	int meter;
	public:
	Distance():meter(0){}
	void good()
	{
		cout<<"\n\tI am a good boy(-:\n\t\t";	
	}		
	friend int addfive(Distance);
};
class Animal{
	private:
	int height;
	public:
	Animal():height(12){}
	int Zebra()
	{
		height=21;
		cout<<"\n\tThe Height of Zebra is="<<height<<" inches";
		cout<<"\n\tI am the Tallest Animal\n\t\t";
	}
	int Lion()
	{
		height=8;
		cout<<"\n\tThe Height of Lion is="<<height<<" inches";
		cout<<"\n\tI am the king of the jungle";
	}
	friend int animal(Animal);	
};
int addfive(Distance D)
{
	D.meter+=5;
	D.good();
	return D.meter;
	//cout<<"The meter value is:"<<D.meter;
}
int animal(Animal A)
{
	A.Lion();
	A.Zebra();
}
int main()
{
	Distance d;
	Animal a;
	cout<<addfive(d);
	cout<<animal(a);
}
