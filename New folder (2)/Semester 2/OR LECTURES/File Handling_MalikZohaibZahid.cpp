#include<iostream>
#include<fstream>
using namespace std;
class shape{
	public:
		int radius =5;
		float area = 10;
		
		shape()
		{
			0;
		}
		void show_data()
		{
			cout<<"radius ="<<radius<<endl;
			cout<<"Area ="<<area<<endl;
		}
		void store_shapedata()
		{
			ofstream fout;
			fout.open("Shape.dat",ios::app | ios::binary);
			fout.write((char*)this,sizeof(*this));
			fout.close();
		}
};
int main()
{
	shape s;
	s.show_data();
	s.store_shapedata();
}
