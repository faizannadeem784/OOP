#include<iostream>
using namespace std;
class car{
	public:
	static int car_no,car_model;
	car()
	{
		car_no++;
		car_model++;
		cout<<endl<<car_no<<" car is participant in a game";
		cout<<endl<<"The Car participant model is Aaeqs66_"<<car_model;
		cout<<endl<<"**************************************";
		cout<<endl<<endl;
	}
		
};
	int car::car_no=0;
	int car::car_model=18;
int main()
{
	car c1,c2,c3,c4,c5;
	return 0;
}
