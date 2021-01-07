#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student{
	public:
		string student_info_1 = "First Name: Zohaib\nLast Name: Zahid\nRoll #: 001\n";
		string student_info_2 = "First Name: Haider\nLast Name: Javed\nRoll #: 002\n";
		string student_info_3 = "First Name: Abdullah\nLast Name: Sarfaraz\nRoll #: 003\n";
		string student_info_4 = "First Name: Faizan\nLast Name: Nadeem\nRoll #: 004\n";
		string student_info_5 = "First Name: Qamar\nLast Name: Shazib\nRoll #: 005\n";
		public:
			student()
			{
				cout<<"**********STUDENTS INFOMATION**********"<<endl;
				cout<<"1st Student info\n"<<student_info_1<<endl;
				cout<<"2nd Student info\n"<<student_info_2<<endl;
				cout<<"3rd Student info\n"<<student_info_3<<endl;
				cout<<"4th Student info\n"<<student_info_4<<endl;
				cout<<"5th Student info\n"<<student_info_5<<endl;
				
			}
			void store_st_data()
			{
				ofstream fout;
				fout.open("Student's Record.txt",ios::app|ios::binary);
				fout<<"\n*****Student's Record*****\n"<<student_info_1<<"\n"<<student_info_2<<"\n"<<endl;
				fout<<student_info_3<<"\n"<<student_info_4<<"\n"<<student_info_5<<endl;
				cout<<"\nThe File Is Created Successfully :)"<<endl;
			}
			void search_by_name()
			{
				int offset;
				string search;
				string line;
				ifstream fout;
				fout.open("Student's Record.txt");
				cout<<"\nType the name you want to search"<<endl;
				cin>>search;
				if(fout.is_open())
				{
					while(!fout.eof())
					{
						getline(fout,line);
						if((offset = line.find(search, 0)) !=string::npos)
						{
							cout<<"The word has been founded:"<<search<<endl;
						}
					}
					fout.close();
				}
				else
				cout<<"Could not open file:"<<endl;
				system("PAUSE");
			}
};
int main()
{
	student s;
	s.store_st_data();
	s.search_by_name();
	return 0;
}
