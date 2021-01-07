//************************************TASK NO.3**********************************************
#include<iostream>
#include<string>
using namespace std;
class student{
	public:
	string array[5]={"Faizan","Abdullah","Haider","Zohaib","Zain"};
	int array1[5]={101,102,103,104,105};
	int array2[5]={19,19,20,20,20};
	string array3[5]={"12th September 2019","12th September 2019","14th September 2019","15th September 2019","18th September 2019"};	
	student()
	{
	for(int i=0;i<5;i++)
	{
		cout<<endl<<i+1<<".The Student Name is:"<<array[i];
		cout<<endl<<"The Student ID is:"<<array1[i];
		cout<<endl<<"The Student age is:"<<array2[i];
		cout<<endl<<"The Student Date Of Admission is:"<<array3[i];
		cout<<endl<<"\t\t************************************";		
	}
}
};
int main()
{
	student Std;
}	

