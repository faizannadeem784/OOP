#include<iostream>
#include<string>
using namespace std;
class virus{
	private:
		string about_virus;
		public:
			void tell_about_virus(string a)
			{
				about_virus = a;
			}
			void disp()
			{
				cout<<"Tell me about viruses       :\n"<<about_virus;
			}
};
class corona_virus : public virus
{
	public:
		int id;
		string name,type,symptoms;
		public:	
			void put_corona_info(int b,string c,string d,string e)
			{
				id = b;
				name = c;
				type = d;
				symptoms = e;
			}
			void disp_corona_info()
			{
				cout<<"\nTell about the information of Corona virus";
				cout<<"\nID          :"<<id;
				cout<<"\nName        :"<<name;
				cout<<"\nType        :"<<type;
				cout<<"\nSymptoms    :"<<symptoms;   
			}
};
class rota_virus 
{
	public:
		int id;
		string name,type,symptoms;
		public:
			void put_rota_info(int f,string g,string h,string i)
			{
				id = f;
				name = g;
				type = h;
				symptoms = i;
			}
			void disp_rota_info()
			{
				cout<<"\nTell about the information of rota virus";
				cout<<"\nID          :"<<id;
				cout<<"\nName        :"<<name;
				cout<<"\nType        :"<<type;
				cout<<"\nSymptoms    :"<<symptoms; 
			}
};
class overall:public corona_virus,public rota_virus
{	
	public:
		void disp_overall_info();
};
void overall::disp_overall_info()
{
	put_info();
	disp_corona_info();
	disp_rota_info();
	
}
int main()
{
	overall v;
	put_info("Infectionus Agent");
	v.put_corona_info(19,"COVID-19","Pneumonia","Coughing,Fever,Shortness of breath");
	v.put_rota_info(13,"ROTA-13","Diarrhea","Vomitting,Fever");
	v.disp_overall_info();
	return 0;
}
