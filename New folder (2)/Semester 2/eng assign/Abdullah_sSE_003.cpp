#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Students{
	public:
		string student1 = "Name: Abdullah\n\nID: 003\n";
		string student2 = "Name: Haider\nID: 025\n";
		string student3 = "Name: Zohaib\nID: 16\n";
		string student4 = "Name: Qamar\nID: 19\n";
		string student5 = "Name: Faizan\nID: 002\n";
//		public:`	
        	Students()
			{
				cout<<"                   Student's Data        "<<endl;
				cout<<"1st Student's  data\n"<<student1<<endl;
				cout<<"2nd Student's  data\n"<<student2<<endl;
				cout<<"3rd Student's  data\n"<<student3<<endl;
				cout<<"4th Student's  data\n"<<student4<<endl;
				cout<<"5th Student's  data\n"<<student5<<endl;
				
			}
			void store_student_data()
			{
				ofstream fout;
				fout.open("Student_Data.txt",ios::app|ios::binary);
				fout<<"\nStudent_Data\n"<<student1<<"\n"<<student2<<"\n"<<endl;
				fout<<student3<<"\n"<<student4<<"\n"<<student5<<endl;
				cout<<"\nThe File Is Created Successfully :)"<<endl;
			}
			void search_with_name()
			{
				int offset;
				string search;
				string line;
				ifstream myfile("Student's Record.txt");
			//	myfile.open("Student's Record.txt");
				cout<<"\nEnter Name you want to search"<<endl;
				cin>>search;
				if(myfile.is_open())
				{
					while(!myfile.eof())
					{
						getline(myfile,line);
						if((offset = line.find(search, 0)) !=string::npos)
						{
							cout<<"Name id found\n\n"<<search<<endl;
						}
					}
					myfile.close();
				}
				else
				cout<<"Fialed in searching your Name"<<endl;
			}
};
int main()
{
	Students s;
	s.store_student_data();
	s.search_with_name();
	return 0;
}
