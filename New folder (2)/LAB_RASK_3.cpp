#include<iostream>
#include<string>
using namespace std;
class Computer{
	public:
	string Company_Name,Price;
	virtual void Show()
	{
			
	}	
};
class Desktop:public Computer{
	public:
	int size;
	string monitor,colour,Processor_Type;
	Desktop(int a,string b,string c,string d,string e,string f)
	{
		size=a;
		monitor=b;
		colour=c;
		Processor_Type=d;
		Company_Name=e;
		Price=f;
	}
	void Show()
	{
		cout<<endl<<"**************************************************";
		cout<<endl<<"\t\t\tDESKTOP COMPUTER INFO";
		cout<<endl<<"**************************************************";
		cout<<endl<<"The Company Name is:"<<Company_Name;
		cout<<endl<<"The Price is:"<<Price;
		cout<<endl<<"The Size of Desktop is:"<<size;
		cout<<endl<<"The Screen Size of Desktop is:"<<monitor;
		cout<<endl<<"The Colour of Desktop is:"<<colour;
		cout<<endl<<"The Processor Type of Desktop is:"<<Processor_Type;
		cout<<endl<<"**************************************************";
	}
};
class Laptop:public Computer{
	public:
	int size;
	string weight,colour,Processor_Type;
	Laptop(int a,string b,string c,string d)
	{
		size=a;
		weight=b;
		colour=c;
		Processor_Type=d;
	}
	void Show()
	{
		cout<<endl<<"**************************************************";
		cout<<endl<<"\t\t\tLAPTOP COMPUTER INFO";
		cout<<endl<<"**************************************************";
		cout<<endl<<"The Size of Laptop is:"<<size;
		cout<<endl<<"The Screen Size of Laptop is:"<<weight;
		cout<<endl<<"The Colour of Laptop is:"<<colour;
		cout<<endl<<"The Processor Type of Laptop is:"<<Processor_Type;
		cout<<endl<<"**************************************************";
	}
};
int main()
{
	Computer *C;
	Desktop D=Desktop(20,"DELL","Black","Dual Core i7","FLE","60 Thousand");
	C=&D;
	C->Show();
	Laptop L=Laptop(14,"1.1kg","Red","Intel Dual core i8");
	C=&L;
	C->Show();
}
