#include<iostream>
using namespace std;
class love{
	public:
virtual void Best_couple()
	{
		cout<<"FLE";
	}
};
class faizan:public love{
	public:
	void best_couple()
	{
	 cout<<endl<<"Faizan";	
	}	
};
class Love:public love{
	public:
		void Best_couple()
		{
			cout<<" Love with";
		}
};
class esha:public love{
	public:
	void Best_couple()
	{
		cout<<" Esha";
	}
};
int main()
{
	love *l;
	faizan f;
	l=&f;
	l->Best_couple();
	Love L;
	l=&L;
	l->Best_couple();
	esha e;
	l=&e;
	l->Best_couple();
}
