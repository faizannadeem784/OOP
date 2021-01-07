#include<iostream>
using namespace std;
class Animals{
	public:
		void Zebra()
		{
			cout<<endl<<"/t hy I am a Zebra(-:";
		}
		void Lion()
		{
			cout<<endl<<"/t Hy I am Lion(-:";
		}
	friend int animals(Animals);
};
int animals(Animals A)
{
	A.Zebra();
	A.Lion();
}
int main()
{
	Animals Aa;
	Aa.animals(Aa);
}
