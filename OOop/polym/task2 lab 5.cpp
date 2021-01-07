#include<iostream>
using namespace std;
class Staff
{
	public:
	int staffID;
	
	public:
	int setter()
	{
		staffID = 1;
	}
	
	int getter()
	{
		cout<<"\n\n\t*****\tEnter Staff ID : ";
		cin>>staffID;
	}
};
class Professor : public Staff
{
	int departmentID;
	char  departmentName;
	public:
		
	Professor(int x=10, string y="BSSE")
	{
		x = departmentID;
		y = departmentName;
	}	
	
	int getter_function_1()
	{
		return departmentID;
	}
	
	int getter_function_2()
	{
		return departmentName;
	}
};
class VisitingProfessor : public Professor
{
	protected:
	int no_of_courses,salary_per_course,totalsalary;
	public:
	int totalSalary()
	{
		cout<<"\t*****\tEnter No Of Courses : \t\t";
		cin>>no_of_courses;
		cout<<"\t*****\tEnter Salary Per Course : \t";
		cin>>salary_per_course;
		totalsalary = no_of_courses * salary_per_course;
	}
	int display()
	{
		Staff S;
		no_of_courses;
		cout<<"\n\n\tNumber of Courses : "<<no_of_courses<<endl;
		cout<<"\tTotal Salar :\t    "<<totalsalary;
	}
};
int main()
{
	Staff st;
	st.getter();
	VisitingProfessor V;
	V.totalSalary();
	V.display();
}
