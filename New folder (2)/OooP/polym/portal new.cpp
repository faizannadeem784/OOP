int portals()
	{	int x=4,choice;
		switch(choice)
		{
			case 1:
			{
				
				//cout<<"\n\t\t\t\t\t\t\t************Teacher Portal************";
				while(x>=1)
				id_pass();
				if (id==123&&pass==123)
				{
					cout<<endl<<"\t\t\t*****Welcome to the Login:)******";
					cout<<endl<<"\t\t\t****************************************";
					Teacher_portal();
					break;
				}
				else
				{
					cout<<endl<<"Invalid Username or Password";
					cout<<endl<<"\t\t\t****************************************";
					cout<<"\n\n\n\n\n\n\n\n\t\t\t\t**********\tYou Have Enter An Invalid ID or PASS   \t**********\n\n\n\n\n\n\n\n";
				}
				//break;
					cout<<endl<<"You have "<<x<<" more try";
					--x;
			}
				if(usr!=1234&&pssw!=1234)
			{
				cout<<"\n\t**********Sorry You cannot try again:(***********";
			}
			
			case 2:
			{
				
				cout<<"\n\t\t\t\t\t\t\t************Student Portal************";
				while(x>=1)
				id_pass();
				if (id==1234&&pass==1234)
				{
					cout<<endl<<"\t\t\t*****Welcome to the Login:)******";
					cout<<endl<<"\t\t\t****************************************";
					Students::student st;
					st.student_portal();
					break;
				}
				else
				{
					cout<<endl<<"Invalid Username or Password";
					cout<<endl<<"\t\t\t****************************************";
					cout<<"\n\n\n\n\n\n\n\n\t\t\t\t**********\tYou Have Enter An Invalid ID or PASS   \t**********\n\n\n\n\n\n\n\n";
				
					cout<<"\n\n\n\n\n\n\n\n\t\t\t\t**********\tYou Have Enter An Invalid ID or PASS   \t**********\n\n\n\n\n\n\n\n";
				}
				//break;
				cout<<endl<<"You have "<<x<<" more try";
					--x;
			}
				if(usr!=1234&&pssw!=1234)
			{
				cout<<"\n\t**********Sorry You cannot try again:(***********";
			}
			
		}
	}
	int main()
	{
		portal();
	}
