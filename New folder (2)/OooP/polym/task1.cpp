#include<iostream>
using namespace std;
class Container
{
	protected:
		float length, width, height;
};
class Box : public Container
{
	public:
		float volume;
		void Volume()
		{
			cout<<"\n\n\n\t\t\t\t********* BOX *********\n\n";
			cout<<"\t*****\tEnter the length: ";
			cin>>length;
			cout<<"\t*****\tEnter the width:  ";
			cin>>width;
			cout<<"\t*****\tEnter the Height: ";
			cin>>height;
			volume = length*width*height;
			cout<<"\n\n\tVolume of a Box is: \t\t"<<volume;
		}
};
class Circle
{
	protected:
		float Radius, area;
		public:
		void Area()
		{
			cout<<"\n\n\n\t\t\t\t********* Circle *********\n\n"<<endl;
			cout<<"\t*****\tEnter the Radius: ";cin>>Radius;
			area = 3.14*(Radius * Radius);
			cout<<"\n\n\tArea of a circle is: \t\t"<<area<<endl<<endl;
		}
};
class Cylinder : public Container, public Circle
{
	public:
		float volume;
		void in()
		{
			cout<<"\n\n\n\t\t\t\t********* Cylinder *********\n\n"<<endl;
		cout<<"\t*****\tEnter the Radius: ";cin>>Radius;
		cout<<"\t*****\tEnter the Height: ";cin>>height;
		}
		void Volume1()
		{
			volume = 3.14*(Radius*Radius*height);
			cout<<"\n\n\tVolume of a Cylinder is: \t"<<volume;
		}
		void Area1()
		{
			area = (2 * 3.14*(Radius*height)) + (2 * 3.14*(Radius*Radius));
			cout<<endl<<"\tArea of a Cylinder is: \t\t"<<area<<endl;
		}		
};
int main()
{
	Box b;
	b.Volume();
	Circle cr;
	cr.Area();
	Cylinder Cy;
	Cy.in();
	Cy.Volume1();
	Cy.Area1();
}
