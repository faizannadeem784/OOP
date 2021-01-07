#include <iostream>
#include<fstream>
#include <string>
using namespace std;

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
		//	case 4:
		//	{
		//		CGPA C;
		//		break;
		//	}
		
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
	
/*	if(choice==1)
	{
	cout<<endl<<"**********Thanks For Using Tthe Account**********";
	}
	else if(choice==2)
	{
		goto S:			
	}
	else
	{
		cout<<"You Enter invalid number";
	}
*/}
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
					//course_prerquires();
					//break;
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

class Administrator:private CGPA,private fee,private loged_out//private batch_advisor//,private CGPA, private fee,private cource_prerquires,private online_applications, private loged_out  
{
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
			//int back;
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
				//	course_prerquires();
				//	break;
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
			system("CLS");
		}

	}	
	while(x=='Y'||x=='y');
	}
	 
};




class login:private batch_advisor,private Administrator
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
						Administrator_portal();
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
						S:
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







