#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;
int main()
{
	cout<< " A c++ Program to change the color of the OUTPUT CONSOLE SCREEN! "<<endl;
	int choice,any;
	cout<<" Please enter your choice...\n1-BLUE\n2-GREEN\n3-AQUA\n4-RED\n5-PURPLE\n6-YELLOW\n7-WHITE\n0-EXIT"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
				cout<<" Hello this is BLUE"<<endl;
				cout<<"\n\n\t\t*****(:I am Faizan Nadeem:)*****";
				break;
			}
		case 2:
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
				cout<<" Hello this is GREEN"<<endl;
				break;
			}
		case 3:
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
				cout<<" Hello this is AQUA"<<endl;
				break;
			}
		case 4:
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
				cout<<" Hello this is RED"<<endl;
				break;
			}
		case 5:
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
				cout<<" Hello this is PURPLE"<<endl;
				break;
			}
		case 6:
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
				cout<<" Hello this is Yellow"<<endl;
				break;
			}
		case 7:
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
				cout<<" Hello this is WHITE"<<endl;
				break;
			}
		case 0:
			{
				cout<<" ---PROGRAM ENDED---"<<endl;
				cout<<" PRESS ANY KEY "<<endl; cin>>any;
				break;
				
			}
			default:
				cout<<" invalid choice"<<endl;
				break;
			}

}

