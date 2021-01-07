#include<iostream>
#include<fstream>
using namespace std;
int main()
{
//	char array[150];
//	cout<<"Enter your Name And Age: ";
//	cin.getline(array,150);
//	ofstream myfile("Faizan.txt");
//	// myfile.open();
//	myfile<<array;
//	myfile.close();
//	cout<<"Your code is successfully run!!";
//	char array1[1000];
//	ifstream obj("Faizan.txt");
//	obj.getline(array1,1000);
//	cout<<"Copied Content: \t"<<array1;
	char data[1000]; 
  				ifstream ifile("Faizan.txt"); 
			//	ifile.open;
				while (!ifile.eof()) 
				{	  
      				ifile.getline(data, 1000); 
    				cout << "FAIZAN\t\t\t\t"<<data << endl;
    			}
    			ifile.close();
}

