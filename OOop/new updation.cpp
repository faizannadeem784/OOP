#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include<Windows.h>
using namespace std;


namespace Registered_Students
{



class Registered_Student
{
	friend int Registered_Student_Detail(Registered_Student);
};
	int	Registered_Student_Detail(Registered_Student RS)
	{
		int choice,go_back,Department,menue;
		do
		{
			cout<<"\n\n\n\n\n\tPlease Select The Department\n\n\n\t\t********\t1-BSSE\n\n\n\t\t********\t2-BSCS\n\n\n\t\t********\t3-BSIT\t\t\t";
			cin>>Department;
			system("CLS");
			switch (Department)
			{
				case 1:
				{
					char data[10000];
					ifstream ifile; 
					ifile.open("BSSE_Registered_Student.txt");
					while (!ifile.eof()) 
					{	  
      					ifile.getline(data, 10000); 
    					cout << "\t\t\t\t"<<data << endl;
    				}
    				cout<<"\n\n\t\tPress\n\n\n\t\t********\t1-For Going Back\t\t\t";
    				cin>>go_back;
					break;
				}
				case 2:
				{
					char data[1000]; 
  					ifstream ifile; 
					ifile.open("BSCS_Registered_Student.txt");
					while (!ifile.eof()) 
					{	  
      					ifile.getline(data, 1000); 
    					cout << "\t\t\t\t"<<data << endl;
    				}
    				cout<<"\n\n\t\tPress\n\n\n\t\t********\t1-For Going Back\t\t\t";
    				cin>>go_back;
					break;
				}
				case 3:
				{
					char data[1000]; 
  					ifstream ifile; 
					ifile.open("BSIT_Registered_Student.txt");
					while (!ifile.eof()) 
					{	  
	      				ifile.getline(data, 1000); 
    					cout << "\t\t\t\t"<<data << endl;
    				}	
    				cout<<"\n\n\t\tPress\n\n\n\t\t********\t1-For Going Back\t\t\t";
    				cin>>go_back;
					break;
				}
			}
		system("CLS");
		}
		while (go_back==1);
	}	


}



namespace Road_Maps_And_Courses_Datails
{



class Road_Map
{
private:
	int	menue_selection,choice,go_back,Department,menue,SCH;
	char Course_Code,Smester[20],Course_Title[20],Credit_Hours,Prerequires;		
public:
	int Road_Map_Detail()
	{
	   	do
		{
			cout<<"\n\n\n\n\n\tPlease Select The Department\n\n\n\t\t********\t1-BSSE\n\n\n\t\t********\t2-BSCS\n\n\n\t\t********\t3-BSIT\t\t\t";
			cin>>Department;
			system("CLS");
			switch (Department)
			{
				case 1:
				{
					char data[10000];
					ifstream ifile; 
					ifile.open("BSSE_Road_Map.txt");
					while (!ifile.eof()) 
					{	  
      					ifile.getline(data, 10000); 
    					cout <<"\t\t\t\t"<<data << endl;
    				}
    				cout<<"\n\n\t\tPress\n\n\n\t\t********\t1-For Going Back\t\t\t";
 			  		cin>>go_back;
					break;
				}
					case 2:
					{
						char data[1000]; 
	  					ifstream ifile; 
						ifile.open("BSCS_Road_Map.txt");
						while (!ifile.eof()) 
						{	  
      						ifile.getline(data, 1000); 
    						cout << "\t\t\t\t"<<data << endl;
	    				}
    					cout<<"\n\n\t\tPress\n\n\n\t\t********\t1-For Going Back\t\t\t";
    					cin>>go_back;
						break;
					}
					case 3:
					{
						char data[1000]; 
  						ifstream ifile; 
						ifile.open("BSIT_Road_Map.txt");
						while (!ifile.eof()) 
						{	  
      						ifile.getline(data, 1000); 
    						cout << "\t\t\t\t"<<data << endl;
    					}
    					cout<<"\n\n\t\tPress\n\n\n\t\t********\t1-For Going Back\t\t\t";
    					cin>>go_back;
						break;
					}
				}
			system("CLS");
			}
			while (go_back==1);
	}
		
	int	Add_Road_Map()
	{
		
	}
		
	int Update_Road_Map()
	{
		   	
	}
	int note()
	{
			cout<<"\tNote:\n\n\t\t(Dont Use Blank Space, Use '_' or ',' for sepration\n";
			cout<<"\t\tEnter The Detail In The Following Manners";
			cout<<"\n\n\t\tSmester:       \t\t2nd";
			cout<<"\n\t\tCourses Title: \t\tApplied_Physics,Calculus_2,Programming_Fundamentals";
			cout<<"\n\t\tCourses Code:  \t\tAP101,MA302,PF233";
			cout<<"\n\t\tCredit Hours:  \t\t3(2+1),3,3";
			cout<<"\n\t\tPrerequires:   \t\t----,MA101,----)";
			cout<<"\n\n\n\t\t\t\t*******\tEnter a number to continue\t\t";
			cin>>Smester;
	}		   
		   

	int Road_Map_Menue()
    {
		cout<<"\n\nPlease Press :\n\t1-For View Road Map\n\t2-For Add Road Map";
		cout<<"\n\t3-For Update Road Map";
	   	cin>>menue_selection;
	   	system("CLS");
	   	switch(menue_selection)
	   	{
	   		case 1:
			{
			   	Road_Map_Detail();
				break;			   	
			}
			case 2:
			{
			    Add_Road_Map();	
				break;		   	
			}
			case 3:
		    {
				Update_Road_Map();	
				break;		   	
			}
			  
		}
    }
		   
};



class Select_Courses
{
	
	private:
	string BSSE_Courses[10]={"1-Programing_Fundamental","2-Calculus-I","3-English","4-Physics","5-ICT",
					"6-OOP","7-Calculus-II","8-Islamic_Studies","9-Data_Structures_&_Algorithm","10-Computer_Network"};
				
					
					
	string BSCS_Courses[10]={"1-  Data Structures & Algorithm","2-  Calculus I","3-  English","4-  Physics","5-  Probability & Static",
					"6-  OR","7-  Calculus II","8-  Islamic Studies","9-  Computer Network","10- Operating System"};
					
					
	string BSIT_Courses[10]={"1-  Web Technologies","2-  Calculus I","3-  English","4-  Physics","5-  IT Infrastructure",
					"6-  OOP","7-  Calculus II","8-  Islamic Studies","9-  Enterprise Architecture 2","10- Aplied Mechanics"};
	
					
	int Department,go_back,a,Selected_Courses[3];
	public:
	int	Courses_Detail()
	{
		do
		{
			cout<<"\n\nPlease Select The Department\n\n\t1-BSSE\n\t2-BSCS\n\t3-BSIT\n\n\tOr Press\n4-To Go Back\t\t";
			cin>>Department;
			system("CLS");
			switch (Department)
			{
				case 1:
				{
					cout<<"\n\n\t\t\t**************The Avaiable Courses For BSSE To Teach**************\n\n";
					for(int x=0;x<10;x++)
					{
						cout<<"\n**\t"<<BSSE_Courses[x];
					}
					cout<<"\n\n\n\t\t\tPlease Select 3 Courses You Want To Teach : \n";
					for(int x=0;x<3;x++)
					{
						cout<<"\tCourse "<<x+1<<" : ";
						cin>>Selected_Courses[x];
					} 
					system("CLS");
					cout<<"\n\n\n\t\tYour Selected Courses: ";
					for(int x=0;x<10;x++)
					{
						cout<<"\n"<<BSSE_Courses[Selected_Courses[x]];
					}
					cout<<"\n\nPress\n1-For Going Back\t\t\t";
    				cin>>go_back;
					break;	
				}
				case 2:
				{
					cout<<"\n\n\t\t\t**************The Avaiable Courses For BSCS To Teach**************\n\n";
					for(int x=0;x<11;x++)
					{
						cout<<"\n**\t"<<BSCS_Courses[x];
					}
					cout<<"\n\n\n\t\t\tPlease Select 3 Courses You Want To Teach : \n";
					for(int x=0;x<3;x++)
					{
						cout<<"\tCourse "<<x+1<<" : ";
						cin>>Selected_Courses[x];
					} 
					system("CLS");
					cout<<"\n\n\n\t\tYour Selected Courses: ";
					for(int x=0;x<10;x++)
					{
						cout<<"\n"<<BSCS_Courses[Selected_Courses[x]];
					}
					cout<<"\n\nPress\n1-For Going Back\t\t\t";
    				cin>>go_back;
					break;	
				}
				case 3:
				{
					cout<<"\n\n\t\t\t**************The Avaiable Courses For BSSE To Teach**************\n\n";
					for(int x=0;x<11;x++)
					{
						cout<<"\n**\t"<<BSIT_Courses[x];
					}
					cout<<"\n\n\n\t\t\tPlease Select 3 Courses You Want To Teach : \n";
					for(int x=0;x<3;x++)
					{
						cout<<"\tCourse "<<x+1<<" : ";
						cin>>Selected_Courses[x];
					} 
					system("CLS");
					cout<<"\n\n\n\t\tYour Selected Courses: ";
					for(int x=0;x<10;x++)
					{
						cout<<"\n"<<BSIT_Courses[Selected_Courses[x]];
					}
					cout<<"\n\nPress\n1-For Going Back\t\t\t";
    				cin>>go_back;
					break;	
		 		}
		 	}
		system("ClS");
		}
		while(go_back==1);
	}
	
	
};



}




namespace CGpa
{





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
		switch (Department)
		{	
			case 1:
			{
				char data[10000];
				ifstream ifile; 
				ifile.open("CGPA_BSSE.txt");
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
		}
	}
};




}

namespace Log
{
	
	
	
	
class Loged_Out
{
	private:
		int choice;
	public:
		
	int logedout()
	{
	cout<<"\n\n\t\tAre You Sure You Want To Logout ? \n\t\t1- No\n\n\t2- Yes \t";
	cin>>choice;
	}
};



}




namespace Registration
{
	
	
	class Registrar
	{
	private:
	int 	choice,go_back,department,Smester_No,SaveView;
	float	Last_CGPA;
		
	string  Address,Section,University_Name,Course_Name,Course_Code,
			Name,Gender,Father_Name,Date_of_Birth,
			Phone_NO,Email_Address,Religion,Smester;
	public:
	int ADD_Course()
	{
		
		cout<<"\n\n\t(Entered The Required Data Without Spacing. May Use '_')";
		cout<<"\n\n*\tUniversity Name: \t\t\t";cin>>University_Name;
		cout<<"*\tCourses Name:     \t\t\t";cin>>Course_Name;
		cout<<"*\tCourses Code(respectively):     \t";cin>>Course_Code;
		cout<<"*\tSmester:\t\t\t\t";cin>>Smester;
		cout<<"*\tLast CGPA(in no.):\t\t\t";cin>>Last_CGPA;
		cout<<"\n\n*\tPersonal Information (To be filled in Capital letters)";
		cout<<"\n\n*\tName:            \t\t\t";cin>>Name;
		cout<<"*\tGender:          \t\t\t";cin>>Gender;
		cout<<"*\tFather Name:   \t\t\t\t";cin>>Father_Name;
		cout<<"*\tDate of Birth:   \t\t\t";cin>>Date_of_Birth;
		cout<<"*\tReligion:        \t\t\t";cin>>Religion;
		cout<<"*\tAddress:         \t\t\t";cin>>Address;
		cout<<"*\tPhone NO.(withSTDCode):\t\t\t";cin>>Phone_NO;
		cout<<"*\tEmail Address:   \t\t\t";cin>>Email_Address;
							
		cout<<"\n\nPress Any Key For Saving Form : ";
		cin>>SaveView;

		ofstream ofile;
  		ofile.open("FORM.txt"); 
  		ofile << "\n\n\t\t\t\t\t*************ADD COURSE FORM*************\n\n" << endl;
  		ofile<<"\n\n\t\tUniversity Name:____"<<University_Name<<"\t\t\tCourse Name:____"<<Course_Name;
  		ofile<<"\n\t\tCourse Code:____"<<Course_Code;
  		ofile<<"\n\t\tSmester:____"<<Smester;
  		ofile<<"\t\t\t\tLast CGPA:____"<<Last_CGPA;
  		ofile<<"\n\n\t\tPersonal Information (To be filled in Capital letters)";
  		ofile<<"\n\n\n\t\tName:___"<<Name;
  		ofile<<"\t\t\t\tGender:____"<<Gender;
  		ofile<<"\n\t\tFather Name:____"<<Father_Name;
  		ofile<<"\t\t\tDate of Birth:____"<<Date_of_Birth;
  		ofile<<"\n\t\tReligion:____"<<Religion;
  		ofile<<"\t\t\t\tAddress:____"<<Address;
  		ofile<<"\n\t\tPhone NO.(with STD code):____"<<Phone_NO;
  		ofile<<"\n\t\tEmail Address:____"<<Email_Address;
  		system("CLS");
  		cout << "\n\n\n\t\tYour File Is Saved Succesfuly !" << endl;
  		ofile.close();	
	}
		
			
	int view_form()
	{
		system("CLS");
		char data[100]; 
	    ifstream ifile; 
	    ifile.open("FORM.txt"); 
		while (!ifile.eof())
	    { 
      		ifile.getline(data, 100); 
    		cout << data << endl;
   		}
   		ifile.close();
	}
			
		
		
		
		
	};
	
	
	
}





//class Teacher:/*Students::student,/*private student,Registered_Students::Registered_Student,Road_Maps_And_Courses_Datails::Road_Map::Select_Courses,CGpa::CGPA,*/private Loged_Out
class Teacher:Registered_Students::Registered_Student,Registration::Registrar,CGpa::CGPA, Road_Maps_And_Courses_Datails::Road_Map,Log:: Loged_Out
{
	private:
		int choice,go_back,Department;
		public:
			int SaveView;
			//virtual int Teacher()
			//{
				
			//}
			virtual int Teacher_portal()
	{
	do
	{
		system("CLS");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
		cout<<"\n\t\t\t\t************Welcome to Batch Advisor Portal************";
		cout<<"\n\nPlease Select From The Following : ";
		//cout<<"\n\n1- Registered Student \n*\n2- Road Map\n*\n3- Select Courses\n*\n4- CGPA List\n*\n5- Fee Record\n";
//		cout<<"\n\n\t\t********\t1- Registered Student\n\n\t\t********\t2- Road Map\n\n\t\t********\t3- Select Courses\n\n\t\t********\t4- CGPA List\n\n\t\t********\t5- Loging Out\n";
//		cout<<"*\n6- Logged Out\n\n";
		cout<<"\n\n\t\t********\t1- Registered Student Detail\n\n\t\t********\t2- Road Map\n\n\t\t********\t3- Select Courses\n\n\t\t********\t4- CGPA List\n\n\t\t********\n\n\t\t********\t5-Student Road Map Detail\n\n\t\t********\n\n\t\t********\t6-For Registered Student\n\n\t\t********\t7-To view Student Detail\n\n\t\t********\t8-For Drop courses\n\n\t\t********\t9- Loging Out\n";
		cout<<"Enter Your Choice Here : ";
		cin>>choice;
		system("CLS");
		int back();
		switch (choice)
		{
			case 1:
				{
					Registered_Students::Registered_Student Rgr;
					Registered_Student_Detail(Rgr);
					break;
				}
				
			case 2:
				{
					Road_Maps_And_Courses_Datails::Road_Map RP;
					RP.Road_Map_Menue();
					break;
				}
			case 3:
				{
					Road_Maps_And_Courses_Datails::Select_Courses RP;
					RP.Courses_Detail();
					break;
				}
			case 4:
				{
					CGpa::CGPA cgp;
					cgp.CGPA_detail();
					break;
				}
			case 5:
				{
					Road_Maps_And_Courses_Datails::Road_Map RM;
					RM.Road_Map_Detail();
					break;
				}
			case 6:
				{
					Road_Maps_And_Courses_Datails::Road_Map RM;
					Registration::Registrar Reg;
					RM.note();
					Reg.ADD_Course();				
				}
			case 7:
				{
					Registration::Registrar Reg;
					Reg.view_form();
					break;
				}
			case 8:
			{
				Registration::Registrar Reg;
				Road_Maps_And_Courses_Datails::Road_Map RM;					
				cout<<"\n\t\t************Drop Courses************";
				cout<<"\n\n\n\tFill Form For Droping Courses:";
				RM.note();
				Reg.ADD_Course();
				cout<<"\nPress \n\t1- For Viewing Form : \t";
				cin>>SaveView;
				if(SaveView==1)
				{
					system("CLS");
					Reg.view_form();
				}
				break;
			}
			case 9:
				{
					logedout();
					break;
				}
		}

	system("CLS");
	}
	while(go_back==4);
	}
};



namespace Students
{
class student : Log::Loged_Out , Registration::Registrar
//class student:private Loged_Out
{
private:
	int 	choice,go_back,department,Smester_No,SaveView;
	float	Last_CGPA;
		
	string  Address,Section,University_Name,Course_Name,Course_Code,
			Name,Gender,Father_Name,Date_of_Birth,
			Phone_NO,Email_Address,Religion,Smester;
					
public:
	int Road_Map_BSSE_1()
	{
		char data[10000];
		ifstream ifile; 
		ifile.open("Road_Map_BSSE_1.txt");
		while (!ifile.eof()) 
		{	  
      		ifile.getline(data, 10000); 
    		cout << "\t\t\t\t"<<data << endl;
    	}
    	cout<<"\n\nCourses Detail Which Are Offered To You Are Shown Above.\n";
	}
	
			
	int Road_Map_BSSE_2()
	{
		char data[10000];
		ifstream ifile; 
		ifile.open("Road_Map_BSSE_2.txt");
		while (!ifile.eof()) 
		{	  
      		ifile.getline(data, 10000); 
    		cout << "\t\t\t\t"<<data << endl;
    	}
    	cout<<"\n\nCourses Detail Which Are Offered To You Are Shown Above.\n";
	}

	
	int Road_Map_BSSE_3()
	{
		char data[10000];
		ifstream ifile; 
		ifile.open("Road_Map_BSSE_3.txt");
		while (!ifile.eof()) 
		{	  
      		ifile.getline(data, 10000); 
    		cout << "\t\t\t\t"<<data << endl;
    	}
    		cout<<"\n\nCourses Detail Which Are Offered To You Are Shown Above.\n";
	}


	int Road_Map_BSSE_4()
	{
		char data[10000];
		ifstream ifile; 
		ifile.open("Road_Map_BSSE_4.txt");
		while (!ifile.eof()) 
		{	  
      		ifile.getline(data, 10000); 
    		cout << "\t\t\t\t"<<data << endl;
    	}
    	cout<<"\n\nCourses Detail Which Are Offered To You Are Shown Above.\n";
	}
	

	int Road_Map_BSCS_1()
	{
		char data[10000];
		ifstream ifile; 
		ifile.open("Road_Map_BSCS_1.txt");
		while (!ifile.eof()) 
		{	  
      		ifile.getline(data, 10000); 
    		cout << "\t\t\t\t"<<data << endl;
    	}
    	cout<<"\n\nCourses Detail Which Are Offered To You Are Shown Above.\n";
	}
		
	
	int Road_Map_BSCS_2()
	{
		char data[10000];
		ifstream ifile; 
		ifile.open("Road_Map_BSCS_2.txt");
		while (!ifile.eof()) 
		{	  
      		ifile.getline(data, 10000); 
    		cout << "\t\t\t\t"<<data << endl;
    	}
    	cout<<"\n\nCourses Detail Which Are Offered To You Are Shown Above.\n";
	}


	int Road_Map_BSCS_3()
	{
		char data[10000];
		ifstream ifile; 
		ifile.open("Road_Map_BSCS_3.txt");
		while (!ifile.eof()) 
		{	  
      		ifile.getline(data, 10000); 
    		cout << "\t\t\t\t"<<data << endl;
    	}
    	cout<<"\n\nCourses Detail Which Are Offered To You Are Shown Above.\n";
	}
			
	
	int Road_Map_BSCS_4()
	{
		char data[10000];
		ifstream ifile; 
		ifile.open("Road_Map_BSCS_4.txt");
		while (!ifile.eof()) 
		{	  
      		ifile.getline(data, 10000); 
    		cout << "\t\t\t\t"<<data << endl;
    	}
    	cout<<"\n\nCourses Detail Which Are Offered To You Are Shown Above.\n";
	}
			
		
	int Road_Map_BSIT_1()
	{
		char data[10000];
		ifstream ifile; 
		ifile.open("Road_Map_BSIT_1.txt");
		while (!ifile.eof()) 
		{	  
    		ifile.getline(data, 10000); 
    		cout << "\t\t\t\t"<<data << endl;
    	}
    	cout<<"\n\nCourses Detail Which Are Offered To You Are Shown Above.\n";
	}
	
	
	int Road_Map_BSIT_2()
	{
		char data[10000];
		ifstream ifile; 
		ifile.open("Road_Map_BSIT_2.txt");
		while (!ifile.eof()) 
		{	  
    		ifile.getline(data, 10000); 
    		cout << "\t\t\t\t"<<data << endl;
    	}
    	cout<<"\n\nCourses Detail Which Are Offered To You Are Shown Above.\n";
	}
			
			
	int Road_Map_BSIT_3()
	{
		char data[10000];
		ifstream ifile; 
		ifile.open("Road_Map_BSIT_3.txt");
		while (!ifile.eof()) 
		{	  
    		ifile.getline(data, 10000); 
    		cout << "\t\t\t\t"<<data << endl;
    	}
    	cout<<"\n\nCourses Detail Which Are Offered To You Are Shown Above.\n";
	}
			
			
	int Road_Map_BSIT_4()
	{
		char data[10000];
		ifstream ifile; 
		ifile.open("Road_Map_BSIT_4.txt");
		while (!ifile.eof()) 
		{	  
    		ifile.getline(data, 10000); 
    		cout << "\t\t\t\t"<<data << endl;
    	}
    	cout<<"\n\nCourses Detail Which Are Offered To You Are Shown Above.\n";
	}
		
		
		
			
	virtual int student_portal()
	{
		system("CLS");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
		cout<<"\n\t\t\t\t\t\t************Welcome To Student Portal************"<<endl;
		cout<<"\n\n\n\t\t********\t 1- Register Courses\n\n\t\t********\t 2- Add Courses\n\n\t\t********\t 3- Drop Courses\t\t";
		cin>>choice;
		system("CLS");
		switch(choice)
		{
			case 1:
			{
				cout<<"\n\t\t\t\t\t\t************Register Courses************";
				cout<<"\n\n\n\n\nPlease Select The Department\n\n\n\t\t********\t1-BSSE\n\n\n\t\t********\t2-BSCS\n\n\n\t\t********\t3-BSIT\t\t";
				cin>>department;
				switch (department)
				{
					case 1:
					{
						do
						{
							system ("CLS");
							cout<<"\nPlease Enter Your Smester No :\n\n\n\n\t\t********\t1- Fall & Spring Smester 1\n\n\n\t\t********\t2- Fall & Spring Smester 2";
							cout<<"\n\n\n\t\t********\t3- Fall & Spring Smester 3\n\n\n\t\t********\t4- Fall & Spring Smester 3\t\t";
							cin>>Smester_No;
							system ("CLS");
							switch (Smester_No)
							{
								case 1:
								{
									Road_Map_BSSE_1();
									cout<<"\n\nPress\n\t1-For Going Back\t\t\t";
   									cin>>go_back;
									break;
								}
										
								case 2:
								{
									Road_Map_BSSE_2();
									cout<<"\n\nPress\n\t1-For Going Back\t\t\t";
    								cin>>go_back;
									break;
								}
											
								case 3:
								{
									Road_Map_BSSE_3();
									cout<<"\n\nPress\n\t1-For Going Back\t\t\t";
    								cin>>go_back;
									break;
								}
								case 4:
								{
									Road_Map_BSSE_4();
									cout<<"\n\nPress\n\t1-For Going Back\t\t\t";
  									cin>>go_back;
								break;
								}
							}
						}
						while(go_back==1);
					}
					
					
					
					case 2:
					{
						do
						{
							system ("CLS");
							cout<<"\nPlease Enter Your Smester No :\n\n\n\n\t\t********\t1- Fall & Spring Smester 1\n\n\n\t\t********\t2- Fall & Spring Smester 2";
							cout<<"\n\n\n\t\t********\t3- Fall & Spring Smester 3\n\n\n\t\t********\t4- Fall & Spring Smester 3\t\t";
							cin>>Smester_No;
							system ("CLS");
							switch (Smester_No)
							{
								case 1:
								{
									Road_Map_BSCS_1();
									cout<<"\n\nPress\n\t1-For Going Back\t\t\t";
   									cin>>go_back;
									break;
								}
									
								case 2:
								{
									Road_Map_BSCS_2();
									cout<<"\n\nPress\n\t1-For Going Back\t\t\t";
   									cin>>go_back;
									break;
								}
										
								case 3:
								{
									Road_Map_BSCS_3();
									cout<<"\n\nPress\n\t1-For Going Back\t\t\t";
   									cin>>go_back;
									break;
								}
								
								case 4:
								{
									Road_Map_BSCS_4();
									cout<<"\n\nPress\n\t1-For Going Back\t\t\t";
   									cin>>go_back;
									break;
								}
							}
						}
						while(go_back==1);
					}
							
								
					case 3:
					{
						do
						{
							system ("CLS");
							cout<<"\nPlease Enter Your Smester No :\n\n\n\n\t\t********\t1- Fall & Spring Smester 1\n\n\n\t\t********\t2- Fall & Spring Smester 2";
							cout<<"\n\n\n\t\t********\t3- Fall & Spring Smester 3\n\n\n\t\t********\t4- Fall & Spring Smester 3\t\t";
							cin>>Smester_No;
							system ("CLS");
							switch (Smester_No)
							{
								case 1:
								{
									Road_Map_BSIT_1();
									cout<<"\n\nPress\n\t1-For Going Back\t\t\t";
   									cin>>go_back;
									break;
								}
									
								case 2:
								{
									Road_Map_BSIT_2();
									cout<<"\n\nPress\n\t1-For Going Back\t\t\t";
   									cin>>go_back;
									break;
								}
										
								case 3:
								{
									Road_Map_BSIT_3();
									cout<<"\n\nPress\n\t1-For Going Back\t\t\t";
   									cin>>go_back;
									break;
								}
								
								case 4:
								{
									Road_Map_BSIT_4();
									cout<<"\n\nPress\n\t1-For Going Back\t\t\t";
   									cin>>go_back;
									break;
								}
							}
						}
						while(go_back==1);
					}
				}
			}
				
				
					
			case 2:
			{
				cout<<"\n\t\t************Add Courses************";
				cout<<"\n\n\n\tFill Form For Adding Courses:";
				Registration::Registrar Reg;
				Road_Maps_And_Courses_Datails::Road_Map RM;
				RM.note();
				Reg.ADD_Course();
				cout<<"\nPress \n\t1- For Viewing Form : \t";
				cin>>SaveView;
				if(SaveView==1)
				{
					Reg.view_form();
				}
				break;
			}
				
				
				
			case 3:
			{
				Registration::Registrar Reg;
				Road_Maps_And_Courses_Datails::Road_Map RM;
				cout<<"\n\t\t************Drop Courses************";
				cout<<"\n\n\n\tFill Form For Droping Courses:";
				RM.note();
				Reg.ADD_Course();
				cout<<"\nPress \n\t1- For Viewing Form : \t";
				cin>>SaveView;
				if(SaveView==1)
				{
					system("CLS");
					Reg.view_form();
				}
				break;
			}
		}
	}
	
//friend int access(student);
};
}










/******************************************************************************************************************************/


/******************************************************************************************************************************/












class login:public Teacher//,public student
{
private:
	int id,pass;
	int choice;
		
public:
	
	login()
	{
		id=0;
		pass=0;	
	}
	
	
	virtual int display()
	{
	
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
		cout<<"\t\t\t*****************************************_____________________*****************************************\n";
		cout<<"\t\t\t\t\t______________WELLCOME TO ONLINE COURSE REGISTRATION SYSTEM______________";
		cout<<"\n\n\n\n\tLogin As: \n\n\n\n\t\t\t********\t1- Teacher\t********\n\n\n\n\t\t\t********\t2- Student\t********\t\t\t";
		
		cin>>choice;
		
		system("CLS");
	}
	
	int id_pass()
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
		cout<<"\n\n\n\n\t\t\t********\tEnter Your ID :\t\t";
		cin>>id;
		cout<<"\n\n\t\t\t********\tEnter Password :\t";
		cin>>pass;
		//system("CLS");
	}
	
	/*int portals()
	{	
		switch(choice)
		{
			case 1:
			{
				cout<<"\n\t\t\t\t\t\t\t************Teacher Portal************";
				id_pass();
				if (id==123&&pass==123)
				{
				
					
					Teacher_portal();
				}
				else
				{
					cout<<"\n\n\n\n\n\n\n\n\t\t\t\t**********\tYou Have Enter An Invalid ID or PASS   \t**********\n\n\n\n\n\n\n\n";
				}
				break;
			}
			
			case 2:
			{
				cout<<"\n\t\t\t\t\t\t\t************Student Portal************";
				id_pass();
				if (id==123&&pass==123)
				{
					Students::student st;
					st.student_portal();
				}
				else
				{
					cout<<"\n\n\n\n\n\n\n\n\t\t\t\t**********\tYou Have Enter An Invalid ID or PASS   \t**********\n\n\n\n\n\n\n\n";
				}
				break;
			}
		}
	}*/
/*	int portals()
	{	int x=4;
		switch(choice)
		{
			case 1:
			{
				
				cout<<"\n\t\t\t\t\t\t\t************Teacher Portal************";
				do
				{
				
				id_pass();
				if (id==1234&&pass==1234)
				{
					system("CLS");
					cout<<endl<<"\t\t\t*****Welcome to the Login:)******";
					cout<<endl<<"\t\t\t****************************************";
					Teacher_portal();
					break;
				}
				else
				{
					cout<<endl<<"Invalid Username or Password";
					cout<<endl<<"\t\t\t****************************************";
					//cout<<"\n\n\n\n\n\n\n\n\t\t\t\t**********\tYou Have Enter An Invalid ID or PASS   \t**********\n\n\n\n\n\n\n\n";
				}
				//break;
					cout<<endl<<"You have "<<x<<" more try";
					--x;
			}
				while(x>=1);
				if(id!=1234&&pass!=1234)
			{	
				cout<<"\n\t**********Sorry You cannot try again:(***********";
			}
			break;		
			}
			
			
			case 2:
			{
				
				cout<<"\n\t\t\t\t\t\t\t************Student Portal************";
				do
				{
				
				id_pass();
				if (id==1234&&pass==1234)
				{
					cout<<endl<<"\t\t\t*****Welcome to the Login:)******";
					cout<<endl<<"\t\t\t****************************************";
					Students::student st;
					st.student_portal();
					break;
				}
				else
				{
					cout<<endl<<"Invalid Username or Password";
					cout<<endl<<"\t\t\t****************************************";
					//cout<<"\n\n\n\n\n\n\n\n\t\t\t\t**********\tYou Have Enter An Invalid ID or PASS   \t**********\n\n\n\n\n\n\n\n";
				
					//cout<<"\n\n\n\n\n\n\n\n\t\t\t\t**********\tYou Have Enter An Invalid ID or PASS   \t**********\n\n\n\n\n\n\n\n";
				}
				//break;
				cout<<endl<<"You have "<<x<<" more try";
					--x;
			}
				while(x>=1);
				if(id!=1234&&pass!=1234)
			{
				cout<<"\n\t**********Sorry You cannot try again:(***********";
			}
			
			
		}
	}*/
	int portals()
	{
	
		int x=4,y;	
		//int choice;	
		switch(choice)
		{
			
			case 1:
			{
				cout<<"\n\t\t\t\t\t\t\t************Teacher Portal************";
				do
				{
				
				id_pass();
				if (id==1234&&pass==1234)
				{
					Teacher_portal();
				}
				else
				{
					cout<<"\n\n\n\n\n\n\n\n\t\t\t\t**********\tYou Have Enter An Invalid ID or PASS   \t**********\n\n\n\n\n\n\n\n";
				}
				system("CLS");
					cout<<endl<<"\n\n**********\t\tYou have "<<x-1<<" tries remaining\t\t**********";
				--x;
	
				}
				while(x>0);
				if(id!=1234&&pass!=1234)
			{
				cout<<"\n\t**********Sorry You cannot try again***********";
			  	cout<<endl<<"Enter any key to exit";
				cin>>y;
				  
			  	
			}
			
			}
			
			case 2:
			{
				cout<<"\n\t\t\t\t\t\t\t************Student Portal************";
				do
				{
				id_pass();
				if (id==1234&&pass==1234)
				{
					Students::student st;
					st.student_portal();
				}
				else
				{
					cout<<"\n\n\n\n\n\n\n\n\t\t\t\t**********\tYou Have Enter An Invalid ID or PASS   \t**********\n\n\n\n\n\n\n\n";
				}
				system("CLS");
				cout<<endl<<"**********\t\tYou have "<<x-1<<" tries remaining\t\t**********";
				--x;
				}
				while(x>=1);
			if(id!=1234&&pass!=1234)
			{
				cout<<"\n\t**********Sorry You cannot try again***********";
			  	cout<<endl<<"Enter any key to exit";
				cin>>y;
			}
		}
	}
}
	
		~login()
	{
		//DESTRUCTOR
	}
};

using namespace Registered_Students;
using namespace Road_Maps_And_Courses_Datails;
using namespace CGpa;
using namespace Students;
using namespace Registration;
/******************************************************************************************************************************/


/******************************************************************************************************************************/
int main()
{/*
	login *l;
	login L;
	L.display();
	L.portals();
	Teacher teach;
	l=&teach;
	l->Teacher_portal();
	student st;
	l=&st;
	l->
	//l.display();
	//l.portals();
*/
	login *l;
	login L;
	L.display();
	L.portals();
	Teacher t;
	t.Teacher_portal();
	student st;
	
	st.student_portal();
}

