#include<iostream>
#include<fstream>
using namespace std;
class shape{
	public:
	int radius=5;
	float area;
	shape();
	{	
		0;	
	}
	void showdata();
	{
		cout<<"The radius is:"<<radius;
		cout<<"The area is:"<<area;
	}
	void store_data()
	{
			ofstream fout;
			fout.open("shape.dat",ios::app | ios::binary);
			fout.write((char*)this,sizeof(*this));
			fout.close();
	
	}
};
int main()
{
	shape s;
	s.showdata();
	s.storedata();
}
	

