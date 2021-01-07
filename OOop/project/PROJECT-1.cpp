#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;


class student
{
	private:
		int ID,Password,Phone_number,choice,go_back;
		string email,Address,Section;
	public:
		
			int student_portal()
			{
				cout<<"\n\t\t************Welcome To Student Portal************"<<endl;
				cout<<"\n 1.See Courses\n"<<endl;
				cout<<"\n 2.Fill Form\n"<<endl;
				cout<<"\n 3.View Form\n"<<endl;
				cout<<"\n 4.Submit Form\n"<<endl;
				cout<<"\n 5.Check Fee\n"<<endl;
				cout<<"\n 6.Check CGPA\n"<<endl;
				cout<<"\n Enter Your Choice Here\t";
				cin>>choice;
				system("CLS");
			
				switch(choice)
				{
				
				case 1:
					{
						cout<<"\n\t\t**********Courses Our University Offers**********"<<endl;
						cout<<"\n\tDepartment Of Information & Technology"<<endl;
						cout<<"\n\t  *BS-SOFTWARE ENGINEERING"<<endl;
						cout<<"\n\t  *BS-INFORMATION TECHNOLOGY"<<endl;
						cout<<"\n\t  *BS-COMPUTER SCIENCE"<<endl;
						cout<<"\n\tDepartment Of Engineering"<<endl;
						cout<<"\n\t  *BS-MECHANICAL ENGINEERING"<<endl;
						cout<<"\n\t  *BS-ELECTRICAL ENGINEERING"<<endl;
						cout<<"\n\t  *BS-CHEMICAL ENGINEERING"<<endl;
						cout<<"\n\tUndergraduate Programs"<<endl;
						cout<<"\n\t  *BS-MATH"<<endl;
						cout<<"\n\t  *BS-CHEMISTRY"<<endl;
						cout<<"\n\t  *BS-PHYSICS"<<endl;
						cout<<"\n\t  *BS-BIOTECHNOLOGY"<<endl;
						cout<<"\n\tGraduate Programs"<<endl;
						cout<<"\n\t  *MS-Math"<<endl;
						cout<<"\n\t  *MS-Physics"<<endl;
						cout<<"\n\t  *MS-Chemistry"<<endl;	
					}
				case 2:
					{
						char data[2000];
						ifstream viewform;
						viewform.open("View.txt");
						if (!viewform)
 						{
 							cout << "Can't open input file named " << viewform << endl;
 							exit(1);
 						}
						while(!viewform.eof())
						{
							viewform.getline(data, 2000);
							cout<<data<<endl;
						}
						cout<<"Press 1. For Go Back\t\t";
						cin>>go_back;
						break;
					}
				case 3:
					{
						char data[2000];
						ifstream ifile;
						ifile.open("Fee check.txt");
						if (!ifile)
						{
						 cout << "Can't open input file named " << ifile << endl;
						 exit(1);
						}
						while(!ifile.eof())
						{
							ifile.getline(data, 2000);
							cout<<data<<endl;
						}
						cout<<"Press 1.For Go Back\t\t";
						cin>>go_back;
						break;
					}
				case 4:
					{
						char data[1000];
						ifstream ifile;
						ifile.open("CGPA.txt");
						while(!ifile.eof())
						{
							ifile.getline(data, 1000);
							cout<<data<<endl;
						}
						cout<<"Press 1.For Go Back\t\t";
						cin>>go_back;
						break;
					}
				}
				
				cout<<"\nEnter your pass ID :\t";
				cin>>ID;
				cout<<"\nEnter Password :\t";
				cin>>Password;
				system("CLS");
			}
};






























/*****************************************************************************************************************************/


class CGPA
{
	private:
	int choice,go_back,Department,menue;
	public:

	int CGPA_detail()
	{
		cout<<"Please Select The Department\n\n\t1-BSSE\n\t2-BSCS\n\t3-BSIT\n\n\tOr Press\n4-To Go Back\t\t";
		cin>>Department;
		system("CLS");
	do
	{
		switch (Department)
		{
			
			case 1:
			{
				char data[10000];
				ifstream ifile; 
				ifile.open("BSSE_CGPA.txt");
				while (!ifile.eof()) 
				{	  
      				ifile.getline(data, 10000); 
    				cout << "\t\t\t\t"<<data << endl;
    			}
    			cout<<"\n\nPress\n1-For Going Back\t\t\t";
    			cin>>go_back;
				break;
			}
			case 2:
			{
				char data[1000]; 
  				ifstream ifile; 
				ifile.open("CGPA_BSCS.txt");
				while (!ifile.eof()) 
				{	  
      				ifile.getline(data, 1000); 
    				cout << "\t\t\t\t"<<data << endl;
    			}
    			cout<<"\n\nPress\n1-For Going Back\t\t\t";
    			cin>>go_back;
				break;
			}
			case 3:
			{
				char data[1000]; 
  				ifstream ifile; 
				ifile.open("CGPA_BSIT.txt");
				while (!ifile.eof()) 
				{	  
      				ifile.getline(data, 1000); 
    				cout << "\t\t\t\t"<<data << endl;
    			}
    			cout<<"\n\nPress\n1-For Going Back\t\t\t";
    			cin>>go_back;
				break;
			}
			case 4:
			{
				CGPA C;
				break;
			}
		
		}
	system("CLS");
	
	}	
	while(go_back==1);
	}
	friend int go_back_to_menue(CGPA);
};

int go_back_to_menue(CGPA C)
{
}


/******************************************************************************************************************************/


/******************************************************************************************************************************/



class fee
{
	private:
	int choice,go_back,Department;
	public:
		
	int fee_record()	
	{
		cout<<"Please Select The Department\n\n\t1-BSSE\n\t2-BSCS\n\t3-BSIT";
		cin>>Department;
		system("CLS");
		switch (Department)
		{
			case 1:
			{
				char data[1000]; 
  				ifstream ifile; 
				ifile.open("FEE_BSSE.txt");
				while (!ifile.eof()) 
				{	  
      				ifile.getline(data, 1000); 
    				cout << "\t\t\t\t"<<data << endl;
    			}
    				cout<<"\n\nPress\n1-For Going Back\t\t\t";
    				cin>>go_back;
					break;
			}
			case 2:
			{
				char data[1000]; 
  				ifstream ifile; 
				ifile.open("FEE_BSCS.txt");
				while (!ifile.eof()) 
				{	  
      				ifile.getline(data, 1000); 
    				cout << "\t\t\t\t"<<data << endl;
    			}
    			cout<<"\n\nPress\n1-For Going Back\t\t\t";
    			cin>>go_back;
				break;
			}
			case 3:
			{
				char data[1000]; 
  				ifstream ifile; 
				ifile.open("FEE_BSIT.txt");
				while (!ifile.eof()) 
				{	  
      				ifile.getline(data, 1000); 
    				cout << "\t\t\t\t"<<data << endl;
    			}
    				cout<<"\n\nPress\n1-For Going Back\t\t\t";
    				cin>>go_back;
					break;
			}
		}
	}
};


/******************************************************************************************************************************/


/******************************************************************************************************************************/



class cource_prerquires
{
	private:
	int choice,go_back,Department;
	public:
		
	int prerquires()
	{
		cout<<"Please Select The Department\n\n\t1-BSSE\n\t2-BSCS\n\t3-BSIT";
		cin>>Department;
		system("CLS");
		switch (Department)
		{
			case 1:
			{
				char data[1000]; 
  				ifstream ifile; 
				ifile.open("PREREQUIRES_BSSE.txt");
				while (!ifile.eof()) 
				{	  
      				ifile.getline(data, 1000); 
    				cout << "\t\t\t\t"<<data << endl;
    			}
    			cout<<"\n\nPress\n1-For Going Back\t\t\t";
    			cin>>go_back;
				break;
			}
			case 2:
			{
				char data[1000]; 
  				ifstream ifile; 
				ifile.open("PREREQUIRES_BSCS.txt");
				while (!ifile.eof()) 
				{	  
      				ifile.getline(data, 1000); 
    				cout << "\t\t\t\t"<<data << endl;
    			}
    			cout<<"\n\nPress\n1-For Going Back\t\t\t";
    			cin>>go_back;
				break;
			}
			case 3:
			{
				char data[1000]; 
  				ifstream ifile; 
				ifile.open("PREREQUIRES_BSIT.txt");
				while (!ifile.eof()) 
				{	  
      				ifile.getline(data, 1000); 
    				cout << "\t\t\t\t"<<data << endl;
    			}
    			cout<<"\n\nPress\n1-For Going Back\t\t\t";
    			cin>>go_back;
				break;
			}
		}					
	}
};


/******************************************************************************************************************************/


/******************************************************************************************************************************/



class online_applications
{
	private:
	int choice,go_back,Department;
	public:
	int applications()
	{
		cout<<"Please Select The Department\n\n\t1-BSSE\n\t2-BSCS\n\t3-BSIT";
		cin>>Department;
		system("CLS");
		switch (Department)
		{
			case 1:
			{
				char data[1000]; 
  				ifstream ifile; 
				ifile.open("APPLICATION_BSSE.txt");
				while (!ifile.eof()) 
				{	  
     				ifile.getline(data, 1000); 
    				cout << "\t\t\t\t"<<data << endl;
    			}
    			cout<<"\n\nPress\n1-For Going Back\t\t\t";
    			cin>>go_back;
				break;
			}
			case 2:
			{
				char data[1000]; 
  				ifstream ifile; 
				ifile.open("APPLICATION_BSCS.txt");
				while (!ifile.eof()) 
				{	  
      				ifile.getline(data, 1000); 
    				cout << "\t\t\t\t"<<data << endl;
    				}
    			cout<<"\n\nPress\n1-For Going Back\t\t\t";
 				cin>>go_back;
				break;
			}
			case 3:
			{
				char data[1000]; 
  				ifstream ifile; 
				ifile.open("APPLICATION_BSIT.txt");
				while (!ifile.eof()) 
				{	  
      				ifile.getline(data, 1000); 
    				cout << "\t\t\t\t"<<data << endl;
    			}
    			cout<<"\n\nPress\n1-For Going Back\t\t\t";
    			cin>>go_back;
				break;
			}
		}
	}
};
/******************************************************************************************************************************/


/******************************************************************************************************************************/


class loged_out
{
	private:
		int choice;
	public:
		
	int logedout()
	{
	cout<<"Are You Sure You Want To Logout ? \n1-No\n2-Yes \t";
	cin>>choice;
	}
};

class batch_advisor: private CGPA, private fee,private cource_prerquires,private online_applications, private loged_out
{
	private:
		int choice,go_back,Department;
		public:
	int advisor_portal()
	{
	do
	{
		cout<<"\n\t\t\t\t************Batch Advisor Portal************";
		cout<<"\n\nPlease Select From The Following : ";
		cout<<"\n\n1-CGPA List\n*\n2_Fee Record\n*\n3-Cource's Prerequires\n*\n4-Online Applications\n*\n5-Edit Student Detail\n";
		cout<<"*\n6-Add New Student Detail\n*\n7-View Student Detail\n*\n8-Logged Out\n\n";
		cout<<"Enter Your Choice Here : ";
		cin>>choice;
		system("CLS");
		int back();
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
//	CGPA C;
//	go_back_to_menue(C);
//	cout<<go_back_to_menue(C);
	system("CLS");
	}
	while(go_back==4);
	}
};



/******************************************************************************************************************************/


/******************************************************************************************************************************/





class login:private batch_advisor,private student
{
	private:
		int id,pass;
		int choice;
		
	public:
	int display()
	{
		cout<<"\t*****************************************_____________________*****************************************\n";
		cout<<"\t\t\t______________WELLCOME TO ONLINE COURSE REGISTRATION SYSTEM______________";
		cout<<"\n\nLogin As: \n\t1-Administrator.\n\t2-Batch Advisor.\n\t3-Student.\t\t\t";
		cin>>choice;
		system("CLS");
	}
	int id_pass()
	{
	
		cout<<"\nEnter Your ID :\t\t";
		cin>>id;
		cout<<"\nEnter Password :\t";
		cin>>pass;
		system("CLS");
	}
	int portals()
	{
		
	switch(choice)
		{
			case 1:
				{
					cout<<"\n\t\t\t\t************Administrator Portal************";
					id_pass();
					if (id==123&&pass==123)
					{
						student_portal();
					}
					else
					{
						cout<<"You Have Enter An Invalid ID or PASS";
					}
					break;
				}
			case 2:
				{
					cout<<"\n\t\t\t\t************Batch Advisor Portal************";
					id_pass();
					if (id==123&&pass==123)
					{
						advisor_portal();
					}
					else
					{
						cout<<"You Have Enter An Invalid ID or PASS";
					}
					break;
				}
			case 3:
				{
					cout<<"\n\t\t\t\t************Student Portal************";
					id_pass();
					if (id==123&&pass==123)
					{
						//advisor_portal();
					}
					else
					{
						cout<<"You Have Enter An Invalid ID or PASS";
					}
					break;
				}
		}
	}

};


/******************************************************************************************************************************/


/******************************************************************************************************************************/
int main()
{
	login l;
	l.display();
	l.portals();
	//CGPA C;
	//cout<<"menue : "<<go_back_to_menue(C);

}







