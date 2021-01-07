#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class student{
	public:
	string array[5];
	int get_Record()
	{
		   cout<<"Enter the Five numbers:";
		    for(int i=0;i<5;i++)
		 {
			cout<<endl<<endl<<i+1<<".Enter The Name:";
			cin>>array[i];
		 }
	}
		void store_data()
		{
			ofstream fout("Student_Record.txt",ios::app | ios::binary);
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
	
	//	char array1[500];
		string name;
		ifstream fai;
		fai.open("Student_record.txt");
		//fai.read((char*)this,sizeof(this));
	
	
	while(!fai.eof())
	
	{
		if(a==array[0]||a==array[1]||a==array[2]||a==array[3]||a==array[4])
		cout<<endl<<"The Name "<<a<<" is found in Student Record File";
		else
		cout<<endl<<a<<" is not found in Student Record File";
		//fai.read((char*)this,sizeof(this));
	break;
	cout<<endl<<"\nThe data is search successfully from the  file";
	}
}
};
int main()
{
	student s;
	s.get_Record();
	s.store_data();
	s.show_data();
	s.access_data("FAIZAN");
	return 0;

}
