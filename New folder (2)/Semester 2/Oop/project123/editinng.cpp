#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;



class Registered_Student
{
private:
	int choice,go_back,Department,menue;
public:
	
	int Registered_Student_Detail()
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
};





class Road_Map
{
private:
	int		  menue_selection,choice,go_back,Department,menue,SCH,no_of_Courses,viewform,Update_Road;
	string    Course_Code,Course_Title,Credit_Hours,Prerequires, Smester;		
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
		
		int Course_detail()
		{
			cout<<"\n*\tSmester: \t\t\t";cin>>Smester;
			cout<<"*\tCourses Title:     \t\t";cin>>Course_Title;
			cout<<"*\tCourses Code:     \t\t";cin>>Course_Code;
			cout<<"*\tCredit Hours:\t\t\t";cin>>Credit_Hours;
			cout<<"*\tPrerequires:\t\t\t";cin>>Prerequires;	
		}
		
		
	int	Save_Course_detail()
		{
			ofstream ofile;
		  	ofile.open("Added_Road_Map.txt");
		  	ofile << "\n\n\n\n\n\n\n\t\t\t\t*************Road Map*************\n\n" << endl;
		  	ofile<<"\n\n\t\tSmester:\t\t\t"<<Smester;
		  	ofile<<"\n\t\tCourse Title:     \t\t"<<Course_Title;
		  	ofile<<"\n\t\tCredit Hours:\t\t\t"<<Credit_Hours;
		  	ofile<<"\n\t\tPrerequires:\t\t\t"<<Prerequires<<"\n\n\n"; 	
			cout<<"\n\n*\tSemester Credit Hours:\t\t";cin>>SCH;
			ofile<<"\n\t\tSemester Credit Hours:\t\t"<<SCH;
			cout<<"\n\n\t\t Road Map Is Updated Successfuly ! ";
		}
		
		
	int view_road_map()
	{
		char data[10000];
		ifstream ifile; 
		ifile.open("Added_Road_Map.txt");
		while (!ifile.eof()) 
		{	  
      		ifile.getline(data, 10000); 
    		cout << ""<<data << endl;
    	}
	}
	
	
	
   int Add_Road_Map()
	{
		cout<<"\n\n\t\t\t***************Add Road Map***************\n\n\n";
		note();
		system("CLS");
		cout<<"\n\n\t\t\t\t\t***************Add Road Map***************\n\n";
		Course_detail();
		Save_Course_detail();
		cout<<"\n\n\n\t\t\t\tPress 1 to View Added Road Map Or Other No To Exist :\t\t\t\t";
		cin>>viewform;	
		if(viewform==1)	
		{
			system("CLS");
			view_road_map();
			cout<<"\n\n\n******\t\tEnter Any No Exist\t\t";
			cin>>viewform;
		}
		else 
		{
			//exist		 	
     	}	
	}
			
	int Update_Road_Map()
	{
		cout<<"\n\n\t\t\t\t\t\t***************Update Road Map***************";
		cout<<"\n\n\n\tYour Previous Added Road Map";
		view_road_map();
		cout<<"\n\n\n\t\t\t\tPress 1 to Update Road Map Or Other No. To Exist :\t\t\t\t";
		cin>>Update_Road;
		if(Update_Road)
		{
			cout<<"\n\n\t\t\t\t\t***************Update Road Map***************\n\n";
			Course_detail();	
		}
		Save_Course_detail();
		cout<<"\n\n\n\t\t\t\tPress 1 to View Added Road Map Or Other No. To Exist :\t\t\t\t";
		cin>>viewform;	
		if(viewform==1)	
		{
			system("CLS");
			view_road_map();
			cout<<"\n\n\n******\t\tEnter Any No Exist\t\t";
			cin>>viewform;
		}
		else 
		{
			//exist		 	
     	}	
	}
				

		   
	int Road_Map_Menue()
    {
		cout<<"\n\n\n\n\t\tPlease Press :\n\n\n\t\t********\t1-For View Road Map\n\n\n\t\t********\t2-For Add Road Map\n\n\n\t\t********\t3-For Update Road Map";
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
	string		BSSE_Courses[10];				
	string 		BSCS_Courses[10];				
	string 		BSIT_Courses[10];
	
					
	int 		Department,go_back,a,Selected_Courses[3];
	
	
public:
	int	Courses_Detail()
	{
		string	BSSE_Courses[10]={"1-Programing_Fundamental","2-Calculus-I","3-English","4-Physics","5-ICT",
					"6-OOP","7-Calculus-II","8-Islamic_Studies","9-Data_Structures_&_Algorithm","10-Computer_Network"};
				
					
					
		string 	BSCS_Courses[10]={"1-  Data Structures & Algorithm","2-  Calculus I","3-  English","4-  Physics","5-  Probability & Static",
					"6-  OR","7-  Calculus II","8-  Islamic Studies","9-  Computer Network","10- Operating System"};
					
					
		string 	BSIT_Courses[10]={"1-  Web Technologies","2-  Calculus I","3-  English","4-  Physics","5-  IT Infrastructure",
					"6-  OOP","7-  Calculus II","8-  Islamic Studies","9-  Enterprise Architecture 2","10- Aplied Mechanics"};
	
		do
		{
			cout<<"\n\n\n\n\n\tPlease Select The Department\n\n\n\t\t********\t1-BSSE\n\n\n\t\t********\t2-BSCS\n\n\n\t\t********\t3-BSIT\t\t\t";
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
					cout<<"\n\n\n\n\n\t\t\t\t\t*********Courses Selection Succesful ! \t*********\n\n\n\n\n\n ";
					cout<<"\t\t\t\t\t\tEnter Any Number To Exist\t\t";
					cin>>Department;
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
					cout<<"\n\n\n\n\n\t\t\t\t\t*********Courses Selection Succesful ! \t*********\n\n\n\n\n\n ";
					cout<<"\t\t\t\t\t\tEnter Any Number To Exist\t\t";
					cin>>Department;
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
					cout<<"\n\n\n\n\n\t\t\t\t\t*********Courses Selection Succesful ! \t*********\n\n\n\n\n\n ";
					cout<<"\t\t\t\t\t\tEnter Any Number To Exist\t\t";
					cin>>Department;
					break;	
		 		}
		 	}
		system("ClS");
		}
		while(go_back==1);
	}
	
	
};






class CGPA
{
private:
	int choice,go_back,Department,menue;
public:

	int CGPA_detail()
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
				ifile.open("CGPA_BSSE.txt");
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
				ifile.open("CGPA_BSCS.txt");
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
				ifile.open("CGPA_BSIT.txt");
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
		while(go_back==1);
	}
};



class Loged_Out:public Teacher
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










class student:private Loged_Out
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
    	cout<<"\n\n\n\n*******\tCourses Detail Which Are Offered To You Are Shown Above\t******\n";
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
    	cout<<"\n\n\n\n*******\tCourses Detail Which Are Offered To You Are Shown Above\t******\n";
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
    	cout<<"\n\n\n\n*******\tCourses Detail Which Are Offered To You Are Shown Above\t******\n";
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
    	cout<<"\n\n\n\n*******\tCourses Detail Which Are Offered To You Are Shown Above\t******\n";
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
    	cout<<"\n\n\n\n*******\tCourses Detail Which Are Offered To You Are Shown Above\t******\n";
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
    	cout<<"\n\n\n\n*******\tCourses Detail Which Are Offered To You Are Shown Above\t******\n";
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
    	cout<<"\n\n\n\n*******\tCourses Detail Which Are Offered To You Are Shown Above\t******\n";
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
    	cout<<"\n\n\n\n*******\tCourses Detail Which Are Offered To You Are Shown Above\t******\n";
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
    	cout<<"\n\n\n\n*******\tCourses Detail Which Are Offered To You Are Shown Above\t******\n";
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
    	cout<<"\n\n\n\n*******\tCourses Detail Which Are Offered To You Are Shown Above\t******\n";
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
    	cout<<"\n\n\n\n*******\tCourses Detail Which Are Offered To You Are Shown Above\t******\n";
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
    	cout<<"\n\n\n\n*******\tCourses Detail Which Are Offered To You Are Shown Above\t******\n";
	}
		
		
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
			
			
	int student_portal()
	{
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
				ADD_Course();
				cout<<"\nPress \n\t1- For Viewing Form : \t";
				cin>>SaveView;
				if(SaveView==1)
				{
					view_form();
				}
				break;
			}
				
				
				
			case 3:
			{
				cout<<"\n\t\t************Drop Courses************";
				cout<<"\n\n\n\tFill Form For Droping Courses:";
				ADD_Course();
				cout<<"\nPress \n\t1- For Viewing Form : \t";
				cin>>SaveView;
				if(SaveView==1)
				{
					system("CLS");
					view_form();
				}
				break;
			}
		}
	}
	
};
										












/******************************************************************************************************************************/
class Teacher:private student ,private Registered_Student,private Road_Map,private Select_Courses,private CGPA,private Loged_Out
{
private:
		int choice,go_back,Department;
public:
	
	int Teacher_portal()
	{
		cout<<"\n\t\t\t\t\t\t************\tTeacher Portal\t************";
		cout<<"\n\n\t\tPlease Select From The Following : ";
		cout<<"\n\n\t\t********\t1- Registered Student\n\n\t\t********\t2- Road Map\n\n\t\t********\t3- Select Courses\n\n\t\t********\t4- CGPA List\n\n\t\t********\t5- Loging Out\n";
		cout<<"\n\n\t\tEnter Your Choice Here : \t\t\t\t";
		cin>>choice;
		system("CLS");
		int back();
		switch (choice)
		{
			case 1:
			{
				Registered_Student_Detail();
				break;
			}
			case 2:
			{
				Road_Map_Menue();
				break;
			}
			case 3:
			{
				Courses_Detail();
				break;
			}
			case 4:
			{
				CGPA_detail();
				break;
			}
			case 5:
			{
				logedout();
				break;
			}
	}
		system("CLS");
	}
};


/******************************************************************************************************************************/












class login:private Teacher,private student
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
	
	
	int display()
	{
		cout<<"\t\t\t*****************************************_____________________*****************************************\n";
		cout<<"\t\t\t\t\t______________WELLCOME TO ONLINE COURSE REGISTRATION SYSTEM______________";
		cout<<"\n\n\n\n\tLogin As: \n\n\n\n\t\t\t********\t1- Teacher\t********\n\n\n\n\t\t\t********\t2- Student\t********\t\t\t";
		cin>>choice;
		system("CLS");
	}
	
	int id_pass()
	{
		cout<<"\n\n\n\n\t\t\t********\tEnter Your ID :\t\t";
		cin>>id;
		cout<<"\n\n\t\t\t********\tEnter Password :\t";
		cin>>pass;
		system("CLS");
	}
	
	int portals()
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
					student_portal();
				}
				else
				{
					cout<<"\n\n\n\n\n\n\n\n\t\t\t\t**********\tYou Have Enter An Invalid ID or PASS   \t**********\n\n\n\n\n\n\n\n";
				}
				break;
			}
		}
	}
	
	~login()
	{
		//DESTRUCTOR
	}
};


/******************************************************************************************************************************/


/******************************************************************************************************************************/
int main()
{
	login l;
	l.display();
	l.portals();
}

