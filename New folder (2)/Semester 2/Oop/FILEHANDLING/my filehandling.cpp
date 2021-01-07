#include<iostream>
#include<fstream>
using namespace std;
int main()
{
/*	char array[1000];
	cout<<endl<<"Enter the text";
	cin.getline(array,1000);
	ofstream objj("Good.txt");
//	myfile.open();
	objj<<array;
	objj.close();
	cout<<endl<<"Your code is successfully run";*/
	char array1[500];
	ifstream objjj("Good.TXt");
	
	while(!objjj.eof())
	{
	objjj.getline(array1,500);
	cout<<array1<<endl;
	}
objjj.close();
//system("CLS");
}
