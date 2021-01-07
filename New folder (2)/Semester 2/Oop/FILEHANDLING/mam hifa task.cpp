#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream offile;
	offile.open("file.txt");
	offile<<"\nthis is a first line";
	offile<<"\nthis is a second line";
	cout<<"Data written to this file";
	offile.close();
	char array[100];
	ifstream ofile;
	ofile.open("file.txt");
	
	while(!ofile.eof())
	{
		ofile.getline(array,100);
		cout<<array<<endl;
	}
	ofile.close();
	cout<<endl<<"\t\tthe data is access successfully";
	
}
