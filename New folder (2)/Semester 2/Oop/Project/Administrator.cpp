#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Administrator{
	private:
	int choice,go_back,department;
	char x;
	public:
	int Administrator_portal()
	{
	do
	{
		cout<<"\n\t\t\t\t************Administrator Portal************";
		cout<<"\n\nPlease Select From The Following : ";
		cout<<"\n\n1-CGPA List\n*\n2_Fee Record\n*\n3-Cource's Prerequires\n*\n4-Online Applications\n*\n5-Edit Student Detail\n";
		cout<<"*\n6-Add New Student Detail\n*\n7-View Student Detail\n*\n8-Logged Out\n\n";
		cout<<"Enter Your Choice Here : ";
		cin>>choice;
		system("CLS");
			switch (choice)
		{
			case 1:
				{
					//display();
					CGPA_detail();
					break;
				}
				
			case 2:
				{
					fee_record();
					break;
				}
			case 3:
				{
					prerquires();
					break;
				}
			case 4:
				{
					//applications();
					//break;
				}
			case 5:
				{
				//	applications();
				//	break;
				}
			case 6:
				{
				//	applications();
				//	break;
				}
			case 7:
				{
				//	applications();
				//	break;
				}
			case 8:
				{
					logedout();
					break;
				}
		}
		{
			cout<<endl<<"Do you want to check Again(Y/N)";
			cin>>x;
		}

	}	
	while(x=='Y'||x=='y');
	}
	 
};
