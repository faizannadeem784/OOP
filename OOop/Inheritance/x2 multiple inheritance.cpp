#include<iostream>
using namespace std;
class good
{  
  public:  
void display()  
{  
   cout<<"?Class A?";  
}   
} ;  
class bad :pubic good 
{   
  public:  
 void display()  
{  
 cout<<endl<<"?Class B?";  
}  
} ;  

int main()  
{  
    bad b;  
   b.display();               // Calling the display() function of B class.  
//   b.B :: display();       // Calling the display() function defined in B class.  
}   


