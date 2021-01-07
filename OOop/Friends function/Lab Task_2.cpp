#include <iostream>
using namespace std;
class Rectangle
{
	float length,width,area;
public: 
    int input() 
    {
    cout<<"Enter The length of Rectangle : ";
    cin>>length;
    cout<<"Enter the width  of Rectangle : ";
    cin>>width;
    }
    int area_Calculator()
    {
    	area=length*width;	
    	cout<<"*\nArea of Rectangle : "<<area<<"\n\t\t**********";
	}
     friend int comparision(Rectangle);
};
int comparision(Rectangle rect)
	 {
 		rect.area;
 		return rect.area;
	 }
class Triangle
{
	float base,hieght,area;
public: 
    int input() 
    {
    cout<<"\n\n\nEnter The base   of Triangle : ";
    cin>>base;
    cout<<"Enter the height of Triangle : ";
    cin>>hieght;
    }
    int area_Calculator()
    {
    	area=0.5*(base*hieght);	
    	cout<<"*\nArea of Triangle : "<<area<<"\n\t\t**********";	
    }
     friend int comparision(Triangle tri);
};
int comparision(Triangle tri)
	 {
 		tri.area;
 		return tri.area;
	 }
class Square
{
	float length,area;
public: 
    void input() 
    {
   	cout<<"\n\n\nEnter The length of Square : ";
    cin>>length;
    }
    void area_Calculator()
    {
    	area=length*length;	
    	cout<<"*\nArea of Square:"<<area<<"\n\t\t**********";	
    }
    friend int comparision(Square squ);
};
 int comparision(Square squ)
	 {
 		squ.area;
 		return squ.area;
	 }
int main()
{
	Rectangle rec;
	rec.input();
	rec.area_Calculator();
	comparision(rec);
	
	Triangle tri;
	tri.input();
	tri.area_Calculator();
	
	Square squ;
	squ.input();
	squ.area_Calculator();
	
	
	
	if (comparision(rec)>comparision(tri)&&comparision(rec)>comparision(squ))
	{
		cout<<"\n\n\n\t\t__________The Area Of Rectangle Is Largest__________";
	}
	else if(comparision(tri)>comparision(rec)&&comparision(tri)>comparision(squ))
	{
		cout<<"\n\n\n\t\t___________The Area Of Triangle Is Largest___________";
	}
	else
	{
		cout<<"\n\n\n\t\t___________The Area Of Square Is Largest___________";
	}
}






