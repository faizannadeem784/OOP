#include<iostream>
#include<fstream>
using namespace std;
class shape{
	public:
		int radius =5;
		float area = 10;
		
		shape()
		{
			//0;
		}
		void show_data()
		{
			cout<<"radius ="<<radius<<endl;
			cout<<"Area ="<<area<<endl;
			cout<<"\n\t\t********************";
		}
		void store_shapedata()
		{
			ofstream fout("SHAPE.txt",ios::app | ios::binary);
			fout<<"\tThe shape of Radius is:"<<radius<<"The shape of Area is:"<<area;
			cout<<endl<<"\t\tThe data is stored successfully in shapee file\n\n";
			fout.close();
			cout<<"\n\t\t********************";
		}
		void access_shapedata()
		{
		char array1[500];
		ifstream fai("SHAPE.txt");
	
	cout<<endl<<"\n\nThe data is Access successfully from the shape file";
	while(!fai.eof())
	{
	fai.getline(array1,500);
	cout<<endl<<array1<<endl;
	}
	fai.close();
	cout<<"\n\t\t********************";
}
};
int main()
{
	shape s;
	s.show_data();
	s.store_shapedata();
	s.access_shapedata();
}
