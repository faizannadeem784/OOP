#include<iostream>
using namespace std;
class Distance{
	private:
		int meter;
		public:
			Distance():meter(0){
			}
			friend int addfive(Distance);
			
};
int addfive(Distance D)
{
	D.meter+=5;
	return D.meter;
 } 
 int main()
 {
 	Distance D;
 	cout<<"Distance: "<<addfive(D);
 }
