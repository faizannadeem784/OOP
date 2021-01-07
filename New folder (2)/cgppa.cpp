#include<iostream>
#include<fstream>
using namespace std;
int main()
{



char data[10000];
				ifstream ifile; 
				ifile.open("CGPA_BSSE.txt");
				while (!ifile.eof()) 
				{	  
      				ifile.getline(data, 10000); 
    				cout << "\t\t\t\t"<<data << endl;

    			}
    		}
