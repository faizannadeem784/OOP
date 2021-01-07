#include<iostream>
#include<string>
using namespace std;

/******************************************************************************************************************************/
/************************************************Teacher's Child Class*********************************************************/

class registered_students
{
	private:
			//atributes
			
	public:
		   int Registered_Students_Detail()
		   {
		   	
		   }
		   
};


class road_map
{
	private:
			int	menue_selection;		
	public:
		   int Road_Map_Detail()
		   {
		   	
		   }
		   
		   int Add_Road_Map()
		   {
		   	
		   }
		   
		   int Update_Road_Map()
		   {
		   	
		   }
		   
		   
		   int Road_Map_Menue()
		   {
		   	cout<<"\n\nSelect From The Following Menue :\n\t1-For Viewing Road Map\n\t2-For Adding Road Map";
			cout<<"\n\t3-For Updating Road Map";
		   	cin>>menue_selection;
		   	switch(menue_selection)
		   	{
		   		case 1:
				    {
				   	Road_Map_Detail();			   	
					}
				case 2:
				    {
				   	Add_Road_Map();			   	
					}
				case 3:
				    {
				   	Update_Road_Map();			   	
					}
			   
			}
		   }
		   
};

class select_cources
{
	private:
			//atributes
			
	public:
		  int Cources_detail()
		  {
		  	
		  }
		   
};
/******************************************************************************************************************************/




/******************************************************************************************************************************/
/************************************************Student's Child Class*********************************************************/
class subjects
{
	private:
			//atributes
			
	public:
		   //functions
		   
};

class add_drop
{
	private:
			//atributes
			
	public:
		   //functions
		   
};
/******************************************************************************************************************************/







/******************************************************************************************************************************/


/***************************************************Parent Classes*************************************************************/


/******************************************************************************************************************************/


class Teacher: private registered_students, private road_map, private select_cources
{
	private:
		int choice;
	public:
	Teacher_portal()
	{
		cout<<"\n\t\t\t\t************Wellcome To Teacher Portal************";
		cout<<"\n\nPlease Enter : ";
		cout<<"\n\n\t\t1-For Registered Students List\n\t\t2-For Road Map\n\t\t\3-Select Cources";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					Registered_Students_Detail();
					break;
				}
			case 2:
				{
					Road_Map_Menue();
					break;
				}
			case 3:
				{
					Cources_detail();
					break;
				}
		}
	}
};


class Student_portal: private subjects, private add_drop
{
	
	
	
	
	
};

/******************************************************************************************************************************/




class login: private Teacher,private Student_portal
{
	private:
		int id,pass;
		int choice;
		
	public:
	int display()
	{
		cout<<"\t*****************************************_____________________*****************************************\n";
		cout<<"\t\t\t______________WELLCOME TO ONLINE COURSE REGISTRATION SYSTEM______________";
		cout<<"\n\nLogin As: \n\t1-Teacher.\n\t2-Student.\t\t\t";
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
					cout<<"\n\t\t\t\t************Wellcome To Teacher Portal************";
					id_pass();
					if (id==12345&&pass==12345)
					{
						Teacher_portal();
					}
					else
					{
						cout<<"You Have Enter An Invalid ID or PASS";
					}
					break;
				}
			case 2:
				{
					cout<<"\n\t\t\t\t************Wellcome To Student Portal************";
					id_pass();
					if (id==12345&&pass==12345)
					{
						Student_portal();
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
int main()
{
	login l;
	l.display();
	l.portals();
}

