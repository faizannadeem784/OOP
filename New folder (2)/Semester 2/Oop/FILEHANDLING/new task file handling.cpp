#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class NAME{
	public:
		string array[5];
		int get_name()
		{
			
		    cout<<"Enter the Five numbers:";
		    for(int i=0;i<5;i++)
		 {
			cout<<endl<<endl<<i+1<<".Enter The Name:";
			cin>>array[i];
		 }
}
		void store_shapedata()
		{
			ofstream fout("NAMES.txt",ios::app | ios::binary);
			for(int i=0;i<5;i++)
			{
			 fout<<"\nThe Names is:"<<array[i];
				
			}
			cout<<endl<<"The data is stored successfully in NAME file";
			fout.close();
			cout<<"\n********************";
		}
		void show_data()
		{
			for(int i=0;i<4;i++)
			{
				cout<<endl<<"The "<<i+1<<" Name is:"<<array[i];
			}
			cout<<"\n********************";
		}
		void access_data(string a)
		{
		char array1[500];
		string name;
		ifstream fai;
		fai.open("NAMES.txt");
		fai.read((char*)this,sizeof(this));
	cout<<endl<<"\nThe data is Access successfully from the SHAPE file";
	while(!fai.eof())
	{
		//if(array1==a);
		
		//fai.read((char*)this,sizeof(this));
		cout<<array1;	
	//fai.getline(array1,500);
	//cout<<endl<<array1<<endl;
	}
	/*else
	{
		cout<<endl<<"This Name is not found in this file";
	}*/
	fai.close();
	//cout<<"\n********************";
}
};
int main()
{
	NAME N;
	N.get_name();
	N.show_data();
	N.store_shapedata();
	N.access_data();
}
