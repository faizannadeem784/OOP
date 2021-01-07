#include<iostream>
#include<string>
using namespace std;
class container{
	public:
		float length = 12.3;
		float width = 4.56;
		float height = 8.43;
};
class box: public container
{
	public:
		float volume = 5.34;
			public:
				void calculate()
				{
				volume = length * width * height;
				cout<<"Box Class"<<endl;
				cout<<"Volume of box =\t"<<volume<<endl;
				}	
};
class cylinder:public container
{
	public:
		float volume;
		float radius = 2.4;
		float area;
		public:
			void area_calculate()
			{
				area = 2*3.14*radius*height + 2*3.14*radius*radius;
				cout<<"\nCylinder Class"<<endl;
				cout<<"Area of cylinder =\t"<<area<<endl;
			}
			void volume_calculate()
			{
				volume = 3.14*radius*radius*height;
				cout<<"Volume of cylinder =\t"<<volume<<endl;
			}
};
class circle: public cylinder
{
	public:
		float area;
		public:
			area_calculate()
			{
				area = 3.14*radius*radius;
				cout<<"\nCircle Class"<<endl;
				cout<<"\Area of circle =\t"<<area;
			}
};
int main()
{
	box b;
	b.calculate();
	cylinder c;
	c.area_calculate();
	c.volume_calculate();
	circle cir;
	cir.area_calculate();
	cir.volume_calculate();
	return 0;
}
