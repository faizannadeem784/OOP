#include<iostream>
using namespace std;
class Triangle{
	private:
	float area,base,height;
	public:
	int get_input()
	{
		cout<<endl<<"Enter the base of Tringle=";
		cin>>base;
		cout<<endl<<"Enter the height of Triangle=";
		cin>>height;
	}
	int area()
	{
		area=0.5*(base*height);
		cout<<endl<<"Area of a Triangle is="<<area;
	}
	friend int comparison(Triangle tri);
};
	int comparison(Triangle tri);
	{
		tri.area();
		return area;
	}
	class Rectangle{
		private:
		float area,length,width;
		public:
		int get_input()
	{
		cout<<endl<<"Enter the base of Rectangle=";
		cin>>length;
		cout<<endl<<"Enter the height of Rectangle=";
		cin>>width;
	}	
	int area_calculator()
	{
		area=length*width;
		cout<<endl<<"Area of Rectangle is="<<area;
	}
	friend int comparison(Rectangle rect);
	};
	int comparison(Rectangle rect)
	{
		rect.area_calculator();
		return area;
	}
	class square{
		private:
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
    	cout<<"*\nArea of Square : "<<area<<"\n\t\t**********";	
    }
   	friend int comparison(square sqr);
};
int comparison(square sqr)
{
	sqr.area_Calculator();
	return area;
}
int main()
{
	square sqr;
	sqr.area_Calculator();
	Rectangle rect;
	rect.area_calculator();
}
