#include <cstring>
#include <iostream>
//#include<string>
using namespace std;

int main()
{
	char faiz[1000],esh[1000],fle[1000]="Faizan Nadeem",x;
	do
	{
	cout<<endl<<fle;
	cout<<endl<<"\nThe length of Faizan Nadeem characters is:"<<strlen(fle)<<" characters";
	cout<<endl<<"\nEnter the string 1:";
	cin.getline(faiz,1000);
	cout<<endl<<"\nEnter the string 2:";
	cin.getline(esh,1000);
    //char str1[] = faiz;
    //char str2[] = esh;
    long len1 = strlen(faiz);
    long len2 = strlen(esh);
	cout << "Length of str1 = " << len1 << endl;
    cout << "Length of str2 = " << len2 << endl;
    if (len1 > len2)
    {
		cout << "str1 is longer than str2";
	}
	else if (len1 < len2)
	{
		cout << "str2 is longer than str1";
    }
	else
	{ 
	   cout << "str1 and str2 are of equal length";
	}
cout<<endl<<"DO you want to check the length again(y||n):";
cin>>x;
}
while(x=='y'||x=='Y');
return 0;
}
