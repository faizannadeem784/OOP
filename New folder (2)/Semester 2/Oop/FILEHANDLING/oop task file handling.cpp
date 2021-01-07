#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	//public:
		int offset;
		string search,line;
		//void access_data(string a)
		//{
		ifstream fai;
		fai.open("NAMES.txt");
	//	fai.read((char*)this,sizeof(this));
	cout<<endl<<"\nType the Name you want to Search:";
	cin>>search;
//	search=a;
	while(!fai.eof())
	if(fai.is_open())
	{
		//while(!fai.eof())
	{
		getline(fai,line);
		if((offset=line.find(search, 0))!= string::npos){
		cout<<endl<<"The word has been founded:"<<search<<endl;
		}
	}

	}
	else
	{
	cout<<endl<<"Could not search name from the required file";
	}
	//system("PAUSE");
	fai.close();
}
