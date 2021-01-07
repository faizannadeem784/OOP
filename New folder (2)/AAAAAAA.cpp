#include<iostream>
#include<fstream>
#include <string>
#include<math.h>
using  namespace  std;


class  fee;




class cgpa
{
public:
    double no, tc;
    double subjects[100], cd_hr[50], sgpa = 0.0, c_sgpa = 0.0;
    
public:
    float formula(float n)
    {
        return floor(n * pow(10, 2) + 0.5) / pow(10, 2);
    }

    void gpa()
    {
        cout << "\n\tNUMBER OF COURSES OF CURRENT SEMESTER  :  ";
        cin >> no;
        for (int i = 0; i < no; i++) 
		{
            cout << "\n GPA of subject " << i + 1 << " :  ";
            cin >> subjects[i];
            cout << "\n Credit hour :   ";
            cin >> cd_hr[i];
            tc += cd_hr[i];
            sgpa += (subjects[i] * cd_hr[i]);
        }
	}
	void calculator1()
	{
    	c_sgpa = formula(sgpa / tc);
    	cout << "\tYour Current Semester GPA    :  " << c_sgpa;
		try
		{
			if( c_sgpa<=2.0 && c_sgpa>=0.00)
			{
				throw c_sgpa;
			}
			else
			{
				cout<<"\n\tYour credit hours will be 21"<<endl;
			}
		}
		catch (int i)
		{
			cout<<"Your credit hours will be 15";
		}
	}



};
    
	
class roadmap
{
    int c,n=1;
    enum {sz=50};
    string semes_cour[sz]={"object oriented programming", "Discrete Math", "Calculus", "Introduction to computing",
                           "orientation research", "Marketing", "Bussiness process enginring","English I","Islamic studies",
                           "Programming fundamental","Basic Electronic","Applied physics","calculus 11",
                           "Structured programming","Linear Algebra","Communication Skills","Differential equation",
						   "Computer Organization and assembly language","Computer Network","Data base system",
        				   "Software testing","Operating system","Human computer Interacttivity","Computer Network","Software project Managment",
        				   "Pakistan STudies","Algorithms","Artifical intellegence","cloud computing","Data analyst","Softwaere engeenring",
        				   "software analytis","Managment","bussiness orientation","sql","c","Java","python","web development","Differential Equation",
        				   "Design Architecture","capastone project","Digital logic design","Software Construction"};
    public:
                 
	void cur()
    {
        cout<<"\npress";
        for(int i=1;i<=8;i++)
        {
            cout<<"\n\t\t"<<i<<"- semester"<<i;
        }
        	cin>>c;
            switch (c)
            {
                case 1:
                {
                for(int i=1;i<=5;i++)
				cout<<n++<<"-"<<semes_cour[i]<<endl;
                break;
            	}
                
				case 2:
				{
                    for(int i=6;i<=10;i++)
                    cout<<n++<<"-"<<semes_cour[i]<<endl;
                    break;
            	}
                
				case 3:
				{
                    for(int i=11;i<=15;i++)
                    cout<<n++<<"-"<<semes_cour[i]<<endl;
                    break;
            	}
                
				case 4:
				{
                for(int i=16;i<=20;i++)
                cout<<n++<<"-"<<semes_cour[i]<<endl;
                break;
            	}
                
				case 5:
				{
                    for(int i=20;i<=25;i++)
                    cout<<n++<<"-"<<semes_cour[i]<<endl;
                    break;
            	}
                
				case 6:
				{
					for(int i=25;i<=30;i++)
                    cout<<n++<<"-"<<semes_cour[i]<<endl;
                    break;
            	}
                
				case 7:
				{
                    for(int i=30;i<=35;i++)
                    cout<<n++<<"-"<<semes_cour[i]<<endl;
                    break;
            	}
                case 8:
                {
                    for(int i=35;i<=40;i++)
                    cout<<n++<<"-"<<semes_cour[i]<<endl;
                	break;
            	}


            }

    }


};
class Registration{
	public:
		virtual void chk_reg()
		{
			
		}
};



class registration: public roadmap,public Registration
{
    enum 
	{
        sz = 30
    };
    string nam[sz] = {"sudais", "talha", "abdullah", "zohaib", "burhan", "haider", "faizan", "talha", "shahzib",
                           "rizwan", "skills"};
    int found = 0;
    string chk_name;
    string name,program,department;
    int id,semester;
    
    
    public:
    void reg ()
    {
		string detail;
		ofstream of1;
		of1.open("shaheen.txt",ios::out);
		cout<<"Enter your  name :";
		int d;
		float e;
		string a,Course_Name,b,c,f,m,k,j,i,h,g,n,l;
		 
		cin>>n;
		cout<<"Enter the name of your department : ";
		cin>>b;
		cout<<"Enter the id of student:"<<endl;
		cin>>a;
		cout<<"\tCourses Name:     \t\t\t";
		cin>>Course_Name;
		cout<<"\tCourses Code(respectively):     \t";
		cin>>c;
		cout<<"\tSmester:\t\t\t\t";
		cin>>d;
		cout<<"\tLast CGPA(in no.):\t\t\t";
		cin>>e;
		cout<<"\n\n\tPersonal Information (To be filled in Capital letters)";
		cout<<"\n\n\tName:            \t\t\t";
		cin>>f;
		cout<<"\tGender:          \t\t\t";
		cin>>g;
		cout<<"\tFather Name:   \t\t\t\t";
		cin>>h;
		cout<<"\tDate of Birth:   \t\t\t";
		cin>>i;
		cout<<"\tReligion:        \t\t\t";
		cin>>j;
		cout<<"\tAddress:         \t\t\t";
		cin>>k;
		cout<<"\tPhone NO.(withSTDCode):\t\t\t";
		cin>>l;
		cout<<"\tEmail Address:   \t\t\t";
		cin>>m;		
		cout<<"The id of student is :"<<a<<endl;
		cout<<"The name of student's department is "<<b<<endl;
		cout<<"The name of student is: "<<n<<endl;
		cout<<"\n\t\tCourse Code:____"<<c;
  		cout<<"\n\t\tSmester:____"<<d;
  		cout<<"\t\t\t\tLast CGPA:____"<<e;
  		cout<<"\n\n\t\tPersonal Information (To be filled in Capital letters)";
  		cout<<"\n\n\n\t\tName:___"<<f;
  		cout<<"\t\t\t\tGender:____"<<g;
  		cout<<"\n\t\tFather Name:____"<<h;
  		cout<<"\t\t\tDate of Birth:____"<<i;
  		cout<<"\n\t\tReligion:____"<<j;
  		cout<<"\t\t\t\tAddress:____"<<k;
  		cout<<"\n\t\tPhone NO.(with STD code):____"<<l;
  		cout<<"\n\t\tEmail Address:____"<<m;
  	
		
		of1<<"The id of student is :"<<a<<endl;
		of1<<"The name of student is: "<<n<<endl;
		of1<<"The name of student's department is "<<b<<endl;
		of1<<"\n\t\tCourse Code:____"<<c;
  		of1<<"\n\t\tSmester:____"<<d;
  		of1<<"\t\t\t\tLast CGPA:____"<<e;
  		of1<<"\n\n\t\tPersonal Information (To be filled in Capital letters)";
  		of1<<"\n\n\n\t\tName:___"<<f;
  		of1<<"\t\t\t\tGender:____"<<g;
  		of1<<"\n\t\tFather Name:____"<<h;
  		of1<<"\t\t\tDate of Birth:____"<<i;
  		of1<<"\n\t\tReligion:____"<<j;
  		of1<<"\t\t\t\tAddress:____"<<k;
  		of1<<"\n\t\tPhone NO.(with STD code):____"<<l;
  		of1<<"\n\t\tEmail Address:____"<<m;
  	
		cout<<"Enter your feedback regarding registration:";
		string av;
		cin.ignore();
		getline(cin,av);
		of1<<av;
	
		cout<<"YOur complaint is:"<<av<<endl;
		of1<<"YOur complaint is:"<<av<<endl;
		of1.close();
		char data[1000]; 
  		ifstream ifile; 
		ifile.open("shaheen.txt");
		while (!ifile.eof()) 
		{	  
      		ifile.getline(data, 1000); 
    		cout << "\t\t\t\t"<<data << endl;
    	}
	
        cout<<"\n\t\tEnter semester to register your courses:";
        roadmap::cur();
        cout<<"\nsuccess fully you registered your courses ";

    }
    
    
    void chk_reg()
    {
        cout << "\nStudent name :";
        cin >> chk_name;
        for (int i = 0; i <= 20; i++) 
		{
        	if (chk_name == nam[i])
			{
                found = 1;
            } 
			else
			{
                found == 0;
            }

        }
        
        if (found == 1)
		{
            cout << "\nStudent Registered";
        } else
		{
            cout << "\nNot Registered";
        }
    }

};



class courses
{
    enum {size = 30};
    string cour[size] = {"object oriented programming", "Discrete Math", "Calculus", "Introduction to computing",
                             "orientation research", "Marketing", "Bussiness process enginring"};
    int c;
    public:
       void dis();
       void drop_courses();
       void add_courses();
};
    
    void courses::dis() 
	{
        for (int i = 1; i <= 6; i++) 
		{
            cout << i << "-" << cour[i] << endl;
        }
    }

    void courses::drop_courses()
	{
        cout << "\nPress";
        for (int i = 1; i <= 6; i++)
		{
            cout << "\n\t\t" << i << "-" << cour[i];
        }
        cin >> c;
        cout << "\nYou drop this course:" << cour[c];
    }

    void courses::add_courses()
	{
        cout << "\nPress";
        for (int i = 1; i <= 6; i++)
		{
            cout << "\n\t\t" << i << "-" << cour[i];
        }
            cin >> c;
            cout << "\nYou add this course:" << cour[c];
    }
namespace feees{
 
 class fees{
 	public:
 		virtual void chk()
 		{
 			cout<<endl<<"CHECK";
		 }
		virtual int chk2()
		{
			cout<<endl<<"CHECK";
		} 
 		
 };   
}



class fee : public feees::fees
{
    private:
//	public:
        enum {sz = 30};
        string name[sz] = {"sudais", "talha", "abdullah", "zohaib", "burhan", "haider", "faizan", "talha", "shahzib",
                           "rizwan", "skills"};
        int found = 0;
        string chk_name;
    public:
        void chk()
		{
            cout << "\nStudent name :";
            cin >> chk_name;
            for (int i = 0; i <= 20; i++)
			{
                if (chk_name == name[i])
				{
                    found = 1;
                }
				
				else
				{
                    found == 0;
                }
            }
        }
        
        int chk2()
        {
            if (found == 1)
			{
                cout << "\nCongratulation Fees submit";
                return true;
            } 
			else
			{
                cout << "\nSorry Not submit";
                return false;
            }
        }
            
			
		void Cgpa_calculator()
        {
            cgpa c1;
    		int clearity;
    		c1.calculator1();
    		fee f1;
    		f1.chk2();
    		cout<<"Your current gpa is: ";
			c1.c_sgpa;
    		cout<<"Your fee detail is : ";
			f1.chk2();
			if(c1.c_sgpa<=1.66 && f1.chk2()!=true)
			{
				cout<<"Registration cancelled"<<endl;
			}			
			else
			{
				cout<<"You are registered successfully"<<endl;
			}
		}
};

    
    
namespace decider
{




	
class student : public fee, public courses,public cgpa,public registration,public Registration,public feees::fees
{
	private:
		string st_username, st_password;
        char again;
        int c,q=1;
        int t,z;
	public:
		void operator-()
		{
		q=--q;	
		}
		
		void display1()
		{
			cout<<q<<endl;
		}
		
	    void st_data()
        {
        	system("CLS");
        	cout<<"\n\n\n\t\t\t*******Slect Your Department :"<<endl;
        	ofstream off;
        	cout<<"\n\n\t\t\t*******1-SE\n\t\t\t*******2-CS\n\t\t\t*******3-IT"<<endl;
        	cin>>t;
        	system("CLS");
        	if(t==1)
        	{
        		cout<<"\n\n\n\t\t\t\t\tSo, Your department is SE"<<endl;
			}
			else if(t==2)
			{
				cout<<"\n\n\n\t\t\t\t\tSo,Your department is CS "<<endl;
			}
			else if(t==3)
			{
				cout<<"\n\n\n\t\t\t\t\tSo, your department is IT "<<endl;
			}
            cout << "\n\n\n\t\t\t\t\t******Enter UserName :";
            cin >> st_username;
            cout << "\n\n\n\t\t\t\t\t******Enter password :";
            cin >> st_password;
            if (st_username == "admin" && st_password == "admin")
            {
                cout << "\n\n\n\n\t\t\t\t\t--------Success Fully Login----------";
                cout<<"\n\n\n\n\n\t\t\t\t\t---Welcome To Student Portal---";
                do
				{
					system("CLS");
                    cout<< "\n\t\t\tPress\n\n\n\t\t1-Feecheck\n\t\t2-courses offered\n\t\t3-Drop course\n\t\t4-add course\n\t\t"
                               "5-Check GPA\n\t\t6-Roadmap\n\t\t7-Registration";
                    cin >> c;
                    switch (c)
					{
                        case 1:
                        {
                           fees *f;
						    
                            feees::fees *fe_s;
                            fee F;
                            fe_s=&F;
                            fe_s->chk();
                            fe_s->chk2();
							break;
                    	}
                        case 2:
                        {
						courses::dis();
                        break;
                    	}
                        case 3:
                        {
                            courses::drop_courses();
                            break;
                    	}
                        case 4:
                        {
                            courses::add_courses();
                            break;
                        }
                        case 5:
                        {
                            cgpa::gpa();
                            cgpa::calculator1();
                            break;
                    	}
                        case 6:
                        {
                            roadmap::cur();
                            break;
                    	}
                        case 7:
                        {
                            registration::reg();
                        	break;
                    	}
                    }
                    cout << "\nIf you want to continue press y/n";
                    cin>>again;
                }
                while(again=='y'|| again=='Y');
            }

			else
			{
				cout<<"You have put wrong password or id "<<endl;
				student s1;
				-s1;
				cout<<"Your left tries are :";
				s1.display1();
				if(q==0)
				{
				cout<<"Chal Oyy";
				}
			}
		}
};

    
class batcadv:  public fee, public courses,public cgpa,public roadmap,public registration,public Registration,public feees::fees
{
    private:
        string bt_username, bt_password;
        char again;
        int c;
        int a=2,b;
    public:
    	batcadv operator-(batcadv as)
    	{
    		batcadv temp;
    		b=0;
    		temp.a=a-as.a;
    		temp.b=b-as.b;
    		return temp;
		}
		void display()
		{
			cout<<a<<"\t"<<b<<endl;
		}
        void bt_data()
        {
        	system("CLS");
            cout << "Enter UserName :";
            cin >> bt_username;
            cout << "\nEnter password :";
            cin >> bt_password;
            if (bt_username == "admin" && bt_password == "admin")
            {
            	system("CLS");
                cout << "\n\n\n\n\t\t\t\t\t--------success fully login----------";
                cout<<"\n\n\n\n\n\t\t\t\t\t---welcome to Faculty portal---";
                do 
				{
                    cout<< "\npress\n\t\t1-Feecheck\n\t\t2-Check GPA\n\t\t3-Registered student";
                    cin >> c;
                    system("CLS");
                    switch (c)
					{
                        case 1:
                        {
                            //fee::chk();
                            //fee::chk2();
                            feees::fees *fe_s;
                            fee F;
                            fe_s=&F;
                            fe_s->chk();
                            fe_s->chk2();
							break;
                        }
                        case 2:
                        {
                        	cgpa::gpa();
                            cgpa::calculator1();
                            break;
                        }
                        case 3:
                        {
                           //registration::chk_reg();
                            Registration *R;
                            registration reg;
                            R=&reg;
                            R->chk_reg();
							break;
                        }
                    }
                    cout << "\nIf you want to continue press y/n";
                    cin>>again;
                }
                while(again=='y'|| again=='Y');
            }
           
			else
			{
				cout<<"You have put wrong password or id "<<endl;
				batcadv a1,a2,a3;
				a3=a1-a2;
				cout<<"Your left tries are";
				a3.display();
				if(a<0)
				{
					cout<<"Chal oYy";
				}
			}
        }
};





}; //decider NAME SPACE END


/*class st_data_access{
	public:
		virtual void st_data()
		{
			cout<<endl<<"Access";
		}
};*/

using namespace std;
using namespace decider;

class login:decider::student  ,  decider::batcadv
{
    private:
		int c;
    public:
		 login() //constructor
		{
   			cout << "\n\n\n--------Welcome To Course Registration System----------";
    		cout << "\n Press\n\t\t******1-Student\n\n\t\t******2-Batch Advisor";
    		cin >> c;
   			 switch (c)
			{
   				case 1:
                {
    				//st_data_access *SD;
					student::st_data();
   					/*decider::student st;
   					SD=&st;
   					SD->st_data();*/
				   	break;
   				}
    			case 2:
    			{
    				batcadv::bt_data();
    				break;
    			}
            }
     	}
     	
     	
    ~  login() // deconstructor
    {
    	cout<<"Thanks for using our moddle"<<endl;
	}
	
};
int main()
{
    login l1;
	

}

