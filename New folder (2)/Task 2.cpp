#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string Person_Name;
		int age;
		virtual void print()
		{
			
		}
		
};
class Patient  : public Person
{
	public:
		
		string  Disease_Type, Recommended_Medicine;
		Patient(string a, int b, string c, string d)
		{
			Person_Name = a;
			age = b;
			Disease_Type = c;
			Recommended_Medicine = d;
		}
		void print()
		{
			cout<<"Details of a Patient: ";
			cout<<"\nName: "<<Person_Name;
			cout<<"\nAge: "<<age;
			cout<<"\nDisease: "<<Disease_Type;
			cout<<"\nRecommended Medicine: "<<Recommended_Medicine;
		}
};
class MedicarePatient : public Person
{
	public:
		string  name_of_the_hospital, name_of_the_ward,Person_Name,Disease_Type,Recommended_Medicine;
		int room_no;
		MedicarePatient(int a, string b, string c, string d, string e, string f, int g)
		{
			Person_Name = b;
			age = a;
			Disease_Type = c;
			Recommended_Medicine = d;
			name_of_the_hospital = e;
			name_of_the_ward = f;
 			room_no = g;
		}
		void print()
		{
			cout<<"Details of a Medicare Patient: ";
			cout<<"\nName: "<<Person_Name;
			cout<<"\nAge: "<<age;
			cout<<"\nDisease: "<<Disease_Type;
			cout<<"\nRecommended Medicine: "<<Recommended_Medicine;
			cout<<"\nHospital: "<<name_of_the_hospital;
			cout<<"\nWard: "<<name_of_the_ward;
			cout<<"\nRoom No.: "<<room_no;
		}
};
int main()
{
	Person *P;
	Patient p = Patient("Hamza_Saif", 19, "Cancer", "Surbex_z");
	P=&p;
	P->print();
	MedicarePatient M= MedicarePatient (19,"Hamza_Saif","Cancer", "Surbex_z","Islam_Center", "Male Cancer Ward", 22);
	P=&M;
	P->print();
}
