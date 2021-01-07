#include<iostream>
using namespace std;
class calculator
{
	public:
//private:
		float array[1000],sum=0,difference=0,product=1,division,no1,no2;
		int no_of_values,index;
		
		
												/*input*/
/*____________________________________________************______________________________________________*/
		int input()
		{					 
			cout<<"\nWho Many Numbers Do You Want To Enter :\t\t\t";
			cin>>no_of_values;
			array[no_of_values];
			cout<<"\n\t\t\t\t\t\t*********************\n\n";
		for(index=0;index+1<=no_of_values;index++)			 
		{
			cout<<"Enter input number "<<index+1<<" :\t\t\t\t\t";
			cin>>array[index];	
		}
		}
/*______________________________________________**********______________________________________________*/	
		
		
		
		
											   /*addition*/
/*___________________________________________***************______________________________________________*/
		calculator operator+()
		{
			cout<<"\n\nADDITION : ";
		for(index=0;index+1<=no_of_values;index++)		
		{
			sum=sum+array[index];	
			cout<<array[index]<<"+";
		}
			cout<<"\b  =    "<<sum;
			cout<<"\n\t\t\t\t\t\t*********************\n\n";
		}
/*______________________________________________**********__________________________________________________*/		
		
		
		
		
											  /*subtraction*/
/*__________________________________________******************______________________________________________*/				
		calculator operator-()
		{
		cout<<"\n\nDIFFERENCE : ";
		difference=array[0];
		cout<<array[0]<<"-";
		for(index=1;index+1<=no_of_values;index++)		
		{
			difference=difference-array[index];	
			cout<<array[index]<<"-";		  
		}	
		cout<<"\b  =    "<<difference;
		cout<<"\n\t\t\t\t\t\t*********************\n\n";
		}
/*______________________________________________**********__________________________________________________*/		
		
		
		
		
		
											 /*Multiplication*/
/*__________________________________________********************__________________________________________________*/
		calculator operator*()
		{
		cout<<"\n\nPRODUCT : ";
		for(index=0;index+1<=no_of_values;index++)
		{
			product=product*array[index];
			cout<<array[index]<<"*";
		}
		cout<<"\b  =    "<<product;
		cout<<"\n\t\t\t\t\t\t*********************\n\n";
		}
/*______________________________________________**********__________________________________________________*/
		
		
		
		
												/*Division*/
/*_____________________________________________*************__________________________________________________*/	
		int division_input()
		{
			cout<<"Enter The Numerator :           ";
			cin>>no1; 									  
			cout<<"Enter The Denomenator :         ";
			cin>>no2; 									   
		while(no2==0)									
		{
			cout<<"\nMethod Error!\nPlease Enter A Value Other Then Zero For Denomenator:      ";
			cin>>no2;	
		}
		}	
		calculator operator/(int a)
		{
			division=no1/no2;
			cout<<"Dvision : "<<no1<<"/"<<no2<<" = "<<division;
			cout<<"\n\t\t\t\t\t\t*********************\n\n";	
		}
/*______________________________________________**********__________________________________________________*/
	
};

int main()
{
	char use_again='Y',check_again;	
	do
	{
	int choice;
	cout<<"\n\n\t\t\t\t******Wellcome To ~~~~HAIDER CHAUDHARY`s~~~~ Calculator******";
	cout<<"\n\n\n\tPlease Press:";
	cout<<"\n\t1- For 	 Addition.\n\t2- For   Subtraction.\n\t3- For	 Multiplication.\n\t4- For	 Division.\t\t\t\t";
	cin>>choice;
	cout<<"\n\t\t\t\t\t\t*********************\n\n";	
	calculator cal;
	switch (choice)
	{
		case 1:
				cal.input();
				+cal;
				break;
		case 2:
				cal.input();
				-cal;
				break;
		case 3:
				cal.input();
				*cal;
				break;
		case 4:
				cal.division_input();
				cal.operator/(1);
				break;	
	}
		cout<<"\nPress Y or y To Use Calculator Again Or Press Any Key To Exist.\t\t\t\t";	
		cin>>check_again;
	}
	while(check_again=='Y'||check_again=='y');	
}
