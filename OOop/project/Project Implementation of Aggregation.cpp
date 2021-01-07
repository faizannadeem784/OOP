#include<iostream>
#include<string>
using namespace std;
class Teacher{
	public:
		int id_1,id_2,id_3,id_4,id_5,id_6,id_7,id_8,id_9,id_10,id_11,id_12,id_13,id_14,id_15;
		int id_16,id_17,id_18,id_19,id_20,id_21,id_22,id_23,id_24,id_25;
		int id_26,id_27,id_28,id_29,id_30,id_31,id_32,id_33,id_34,id_35,id_36;
		int id_37,id_38,id_39,id_40,id_41,id_42;
		string n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15;
		string n16,n17,n18,n19,n20,n21,n22,n23,n24,n25;
		string n26,n27,n28,n29,n30,n31,n32,n33,n34,n35,n36;
		string n37,n38,n39,n40,n41,n42,n43;
		public:
			Teacher(int id_1,int id_2,int id_3,int id_4,int id_5,int id_6,int id_7,int id_8,int id_9,int id_10,int id_11,int id_12,int id_13,int id_14,int id_15,string n1,string n2,string n3,string n4,string n5,string n6,string n7,string n8,string n9,string n10,string n11,string n12,string n13,string n14,string n15)
			{
				this->id_1 = id_1;
				this->id_2 = id_2;
				this->id_3 = id_3;
				this->id_4 = id_4;
				this->id_5 = id_5;
				this->id_6 = id_6;
				this->id_7 = id_7;
				this->id_8 = id_8;
				this->id_9 = id_9;
				this->id_10 = id_10;
				this->id_11 = id_11;
				this->id_12 = id_12;
				this->id_13 = id_13;
				this->id_14 = id_14;
				this->id_15 = id_15;
				this->n1 = n1;
				this->n2 = n2;
				this->n3 = n3;
				this->n4 = n4;
				this->n5 = n5;
				this->n6 = n6;
				this->n7 = n7;
				this->n8 = n8;
				this->n9 = n9;
				this->n10 = n10;
				this->n11 = n11;
				this->n12 = n12;
				this->n13 = n13;
				this->n14 = n14;
				this->n15 = n15;
			}
			Teacher(int id_16,int id_17,int id_18,int id_19,int id_20,int id_21,int id_22,int id_23,int id_24,int id_25,string n16,string n17,string n18,string n19,string n20,string n21,string n22,string n23,string n24,string n25)
			{
				this->id_16 = id_16;
				this->id_17 = id_17;
				this->id_18 = id_18;
				this->id_19 = id_19;
				this->id_20 = id_20;
				this->id_21 = id_21;
				this->id_22 = id_22;
				this->id_23 = id_23;
				this->id_24 = id_24;
				this->id_25 = id_25;
				this->n16 = n16;
				this->n17 = n17;
				this->n18 = n18;
				this->n19 = n19;
				this->n20 = n20;
				this->n21 = n21;
				this->n22 = n22;
				this->n23 = n23;
				this->n24 = n24;
				this->n25 = n25;
				
			}
			Teacher(int id_26,int id_27,int id_28,int id_29,int id_30,int id_31,int id_32,int id_33,int id_34,int id_35,int id_36,string n26,string n27,string n28,string n29,string n30,string n31,string n32,string n33,string n34,string n35,string n36)
			{
				this->id_26 = id_26;
				this->id_27 = id_27;
				this->id_28 = id_28;
				this->id_29 = id_29;
				this->id_30 = id_30;
				this->id_31 = id_31;
				this->id_32 = id_32;
				this->id_33 = id_33;
				this->id_34 = id_34;
				this->id_35 = id_35;
				this->id_36 = id_36;
				this->n26 = n26;
				this->n27 = n27;
				this->n28 = n28;
				this->n29 = n29;
				this->n30 = n30;
				this->n31 = n31;
				this->n32 = n32;
				this->n33 = n33;
				this->n34 = n34;
				this->n35 = n35;
				this->n36 = n36;
			}
			Teacher (int id_37,int id_38,int id_39,int id_40,int id_41,int id_42,string n37,string n38,string n39,string n40,string n41,string n42)
			{
				this->id_37 = id_37;
				this->id_38 = id_38;
				this->id_39 = id_39;
				this->id_40 = id_40;
				this->id_41 = id_41;
				this->id_42 = id_42;
				this->n37 = n37;
				this->n38 = n38;
				this->n39 = n39;
				this->n40 = n40;
				this->n41 = n41;
				this->n42 = n42;
				
			}
};
class Qualification{
	private:
		Teacher* teacher;
		public:
			string q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13,q14,q15;
			string q16,q17,q18,q19,q20,q21,q22,q23,q24,q25;
			string q26,q27,q28,q29,q30,q31,q32,q33,q34,q35,q36;
			string q37,q38,q39,q40,q41,q42;
			public:
				Qualification(string q1,string q2,string q3,string q4,string q5,string q6,string q7,string q8,string q9,string q10,string q11,string q12,string q13,string q14,string q15,Teacher* teacher)
				{
					this->q1 = q1;
					this->q2 = q2;
					this->q3 = q3;
					this->q4 = q4;
					this->q5 = q5;
					this->q6 = q6;
					this->q7 = q7;
					this->q8 = q8;
					this->q9 = q9;
					this->q10 = q10;
					this->q10 = q10;
					this->q11 = q11;
					this->q12 = q12;
					this->q13 = q13;
					this->q14 = q14;
					this->q15 = q15;
					this->teacher = teacher;
				}
				Qualification(string q16,string q17,string q18,string q19,string q20,string q21,string q22,string q23,string q24,string q25,Teacher* teacher)
				{
						this->q16 = q16;
						this->q17 = q17;
						this->q18 = q18;
						this->q19 = q19;
						this->q20 = q20;
						this->q21 = q21;
						this->q22 = q22;
						this->q23 = q23;
						this->q24 = q24;
						this->q25 = q25;
						this->teacher = teacher;
				}
				Qualification(string q26,string q27,string q28,string q29,string q30,string q31,string q32,string q33,string q34,string q35,string q36, Teacher* teacher)
				{
					this->q26 = q26;
					this->q27 = q27;
					this->q28 = q28;
					this->q29 = q29;
					this->q30 = q30;
					this->q31 = q31;
					this->q32 = q32;
					this->q33 = q33;
					this->q34 = q34;
					this->q35 = q35;
					this->q36 = q36;
					this->teacher = teacher;
				}
				Qualification(string q37,string q38,string q39,string q40,string q41,string q42,Teacher* teacher)
				{
					this->q37 = q37;
					this->q38 = q38;
					this->q39 = q39;
					this->q40 = q40;
					this->q41 = q41;
					this->q42 = q42;
					this->teacher = teacher;
				}
				void display()
				{
					cout<<"\n\t\t\t\t\t\t\t\t*University of Management & Technology*"<<endl;
					cout<<"\n\n\t\t\t\t\t\t\t*BS-Software Engineering Faculty of Semester 1*\n"<<endl;
					cout<<"\nID\t\tCourse Title\t\t\t\t\tTeacher's Name\t\t\t"<<" "<<"Qualification"<<endl;
					cout<<"\n"<<teacher->id_1<<"\t\tICT_LAB:\t\t\t\t\t"<<teacher->n1<<"\t\t\t"<<" "<<q1<<endl;
					cout<<"\n"<<teacher->id_2<<"\t\tPrograming_Fundamentals:\t\t\t"<<teacher->n2<<"\t\t\t"<<" "<<q2<<endl;
					cout<<"\n"<<teacher->id_3<<"\t\tPrograming_Fundamentals_Lab:\t\t\t"<<teacher->n3<<"\t\t\t"<<" "<<q3<<endl;
					cout<<"\n"<<teacher->id_4<<"\t\tEnglist Grammar & Comprehension:\t\t"<<teacher->n4<<"\t\t\t"<<" "<<q4<<endl;
					cout<<"\n"<<teacher->id_5<<"\t\tCalculus-1:\t\t\t\t\t"<<teacher->n5<<"\t\t\t"<<" "<<q5<<endl;
					
					cout<<"\n"<<endl;
					
					cout<<"\n\t\t\t\t\t\t\t*BS-Software Engineering Faculty of Semester 2*\n"<<endl;
					cout<<"\n\nID\t\tCourse Title\t\t\t\t\tTeacher's Name\t\t\t"<<" "<<"Qualification";
					cout<<"\n\n"<<teacher->id_6<<"\t\tOOP:\t\t\t\t\t\t"<<teacher->n6<<"\t\t\t"<<" "<<q6<<endl;
					cout<<"\n"<<teacher->id_7<<"\t\tOOP_Lab:\t\t\t\t\t"<<teacher->n7<<"\t\t\t"<<" "<<q7<<endl;
					cout<<"\n"<<teacher->id_8<<"\t\tEnglish Communicational Skills:\t\t\t"<<teacher->n8<<"\t\t\t"<<" "<<q8<<endl;
					cout<<"\n"<<teacher->id_9<<"\t\tPrinciples OF Marketing:\t\t\t"<<teacher->n9<<"\t\t\t"<<" "<<q9<<endl;
					cout<<"\n"<<teacher->id_10<<"\t\tOperational Research:\t\t\t\t"<<teacher->n10<<"\t\t\t"<<" "<<q10<<endl;
					
					cout<<"\n"<<endl;
					
					cout<<"\n\t\t\t\t\t\t\t*BS-Software Engineering Faculty of Semester 3*"<<endl;
					cout<<"\n\nID\t\tCourse Title\t\t\t\t\tTeacher's Name\t\t\t"<<" "<<"Qualification";
					cout<<"\n\n"<<teacher->id_11<<"\t\tUniversity Elective III:\t\t\t"<<teacher->n11<<"\t\t\t"<<" "<<q11<<endl;
					cout<<"\n"<<teacher->id_12<<"\t\tUniversity Elective IV:\t\t\t\t"<<teacher->n12<<"\t\t\t"<<" "<<q12<<endl;
					cout<<"\n"<<teacher->id_13<<"\t\tIslamiyat:\t\t\t\t\t"<<teacher->n13<<"\t\t\t"<<" "<<q13<<endl;
					cout<<"\n"<<teacher->id_14<<"\t\tSoftware Construction:\t\t\t\t"<<teacher->n14<<"\t\t\t"<<" "<<q14<<endl;
					cout<<"\n"<<teacher->id_15<<"\t\tData Structures & Algorithms:\t\t\t"<<teacher->n15<<"\t\t\t"<<" "<<q15<<endl;
					
					cout<<"\n"<<endl;
				/*	
					cout<<"\n\t\t\t\t\t\t\t*BS-Software Engineering Faculty of Semester 4"<<endl;
					cout<<"\n\nID\t\tCourse Title\t\t\t\t\tTeacher's Name\t\t\t"<<" "<<"Qualification";
				
					cout<<"\n\n"<<teacher->id_16<<"\t\t\DataBase:\t\t\t"<<teacher->n16<<"\t\t\t"<<" "<<q16<<endl;
					cout<<"\n"<<teacher->id_17<<"\t\t\Supporting Elective II:\t\t\t\t"<<teacher->n17<<"\t\t\t"<<" "<<q17<<endl;
					cout<<"\n"<<teacher->id_18<<"\t\tProbability & Statistics:\t\t\t\t\t"<<teacher->n18<<"\t\t\t"<<" "<<q18<<endl;
					cout<<"\n"<<teacher->id_19<<"\t\tSoftware Requirement Engineering (SRE):\t\t\t\t"<<teacher->n19<<"\t\t\t"<<" "<<q19<<endl;
					cout<<"\n"<<teacher->id_20<<"\t\tUniversity Elective IV:\t\t\t"<<teacher->n20<<"\t\t\t"<<" "<<q20<<endl;	
				*/
				}
				void display_2()
				{
					cout<<"\n\t\t\t\t\t\t\t*BS-Software Engineering Faculty of Semester 4*"<<endl;
					cout<<"\n\nID\t\tCourse Title\t\t\t\t\tTeacher's Name\t\t\t"<<" "<<"Qualification";
				
					cout<<"\n\n"<<teacher->id_16<<"\t\tDataBase:\t\t\t\t\t"<<teacher->n16<<"\t\t\t"<<" "<<q16<<endl;
					cout<<"\n"<<teacher->id_17<<"\t\tSupporting Elective II:\t\t\t\t"<<teacher->n17<<"\t\t\t"<<" "<<q17<<endl;
					cout<<"\n"<<teacher->id_18<<"\t\tProbability & Statistics:\t\t\t"<<teacher->n18<<"\t\t\t"<<" "<<q18<<endl;
					cout<<"\n"<<teacher->id_19<<"\t\tSoftware Requirement Engineering (SRE):\t\t"<<teacher->n19<<"\t\t\t"<<" "<<q19<<endl;
					cout<<"\n"<<teacher->id_20<<"\t\tUniversity Elective IV:\t\t\t\t"<<teacher->n20<<"\t\t\t"<<" "<<q20<<endl;	
					
					cout<<"\n\n\t\t\t\t\t\t\t*BS-Software Engineering Faculty of Semester 5*"<<endl;
					cout<<"\n\nID\t\tCourse Title\t\t\t\t\tTeacher's Name\t\t\t"<<" "<<"Qualification";
					
					cout<<"\n\n"<<teacher->id_21<<"\t\tSoftware Design & Architecture:\t\t\t"<<teacher->n21<<"\t\t\t"<<" "<<q21<<endl;
					cout<<"\n"<<teacher->id_22<<"\t\tOperating Systems:\t\t\t\t"<<teacher->n22<<"\t\t\t"<<" "<<q22<<endl;
					cout<<"\n"<<teacher->id_23<<"\t\tSE Elective I:\t\t\t\t\t"<<teacher->n23<<"\t\t\t"<<" "<<q23<<endl;
					cout<<"\n"<<teacher->id_24<<"\t\tSE Elective II:\t\t\t\t\t"<<teacher->n24<<"\t\t\t"<<" "<<q24<<endl;
					cout<<"\n"<<teacher->id_25<<"\t\tSupporting Elective III:\t\t\t"<<teacher->n25<<"\t\t\t"<<" "<<q25<<endl;	
				
				
				
				}
				void display_3()
				{
					cout<<"\n\n\t\t\t\t\t\t\t*BS-Software Engineering Faculty of Semester 6*"<<endl;
					cout<<"\n\nID\t\tCourse Title\t\t\t\t\tTeacher's Name\t\t\t"<<" "<<"Qualification";
					
					cout<<"\n\n"<<teacher->id_26<<"\t\tSoftware Construction & Development:\t\t"<<teacher->n26<<"\t\t\t"<<" "<<q26<<endl;
					cout<<"\n"<<teacher->id_27<<"\t\tWeb Engineering:\t\t\t\t"<<teacher->n27<<"\t\t\t"<<" "<<q27<<endl;
					cout<<"\n"<<teacher->id_28<<"\t\tComputer Networks:\t\t\t\t"<<teacher->n28<<"\t\t\t"<<" "<<q28<<endl;
					cout<<"\n"<<teacher->id_29<<"\t\tInformation Security:\t\t\t\t"<<teacher->n29<<"\t\t\t"<<" "<<q29<<endl;
					cout<<"\n"<<teacher->id_30<<"\t\tSE Elective:\t\t\t\t\t"<<teacher->n30<<"\t\t\t"<<" "<<q30<<endl;	
	
					
					cout<<"\n"<<endl;
					
					cout<<"\n\t\t\t\t\t\t\t*BS-Software Engineering Faculty of Semester 7*"<<endl;
					cout<<"\n\nID\t\tCourse Title\t\t\t\t\tTeacher's Name\t\t\t"<<" "<<"Qualification";
				
					cout<<"\n\n"<<teacher->id_31<<"\t\tFinal Year Project 1:\t\t\t\t"<<teacher->n31<<"\t\t\t"<<" "<<q31<<endl;
					cout<<"\n"<<teacher->id_32<<"\t\tSoftware Project Management:\t\t\t"<<teacher->n32<<"\t\t\t"<<" "<<q32<<endl;
					cout<<"\n"<<teacher->id_33<<"\t\tSoftware Quality Engineering:\t\t\t"<<teacher->n33<<"\t\t\t"<<" "<<q33<<endl;
					cout<<"\n"<<teacher->id_34<<"\t\tSE Elective IV:\t\t\t\t\t"<<teacher->n34<<"\t\t\t"<<" "<<q34<<endl;
					cout<<"\n"<<teacher->id_35<<"\t\tTechnical and Business Writing:\t\t\t"<<teacher->n35<<"\t\t\t"<<" "<<q35<<endl;	
					cout<<"\n"<<teacher->id_36<<"\t\tSoftware Re-Engineering:\t\t\t"<<teacher->n36<<"\t\t\t"<<" "<<q36<<endl;
				
				}
				void display_4()
				{
					cout<<"\n\t\t\t\t\t\t\t*BS-Software Engineering Faculty of Semester 8*"<<endl;
					cout<<"\n\nID\t\tCourse Title\t\t\t\t\tTeacher's Name\t\t\t"<<" "<<"Qualification";
				
					cout<<"\n\n"<<teacher->id_37<<"\t\tFinal Year Project II:\t\t\t\t"<<teacher->n37<<"\t\t\t"<<" "<<q37<<endl;
					cout<<"\n"<<teacher->id_38<<"\t\tHuman Computer Interaction:\t\t\t"<<teacher->n38<<"\t\t\t"<<" "<<q38<<endl;
					cout<<"\n"<<teacher->id_39<<"\t\tProfessional Practices:\t\t\t\t"<<teacher->n39<<"\t\t\t"<<" "<<q39<<endl;
					cout<<"\n"<<teacher->id_40<<"\t\tSE Elective IV:\t\t\t\t\t"<<teacher->n40<<"\t\t\t"<<" "<<q40<<endl;
					cout<<"\n"<<teacher->id_41<<"\t\tSE Elective V:\t\t\t\t\t"<<teacher->n41<<"\t\t\t"<<" "<<q41<<endl;	
					cout<<"\n"<<teacher->id_42<<"\t\tDiscrete Structures:\t\t\t\t"<<teacher->n42<<"\t\t\t"<<" "<<q42<<endl;
		
				
}
};
int main()
{

	Teacher t1 = Teacher(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,"Hifza Munir","Mustehsan Hamad","Adnan Ali","Abdul Haq","Musharfa Saleem","Zahra Ali","Hifza Munir","Abdul Haq","Ali Raza","Abdul Hanan","Zain Anwar","Sajid Sameel","Abdul Manan","Zahra Ali","Hifza Munir");
	Teacher t2 = Teacher(16,17,18,19,20,21,22,23,24,25,"Hifza Munir","Mustehsan Hamad","Musharfa Saleem","Abdul Haq","Ishaq Dar","Zahra Ali","Hifza Munir","Abdul Haq","Ali Raza","Abdul Hanan");
	Teacher t3 = Teacher(26,27,28,29,30,31,32,33,34,35,36,"Hifza Munir","Mustehsan Hamad","Adnan Ali","Abdul Haq","Musharfa Saleem","Zahra Ali","Hifza Munir","Abdul Haq","Ali Raza","Abdul Hanan","Ishaq Dar");
	Teacher t4 = Teacher(37,38,39,40,41,42,"Zain Anwar","Sajid Sameel","Abdul Manan","Zahra Ali","Hifza Munir","Abdul Haq");
	Qualification q1 = Qualification("BS-Software Engineer","MSc Computer Science","Msc Computer Science","MS English","MA. Mathematics","Ms Computer Science","Bs Software Engineer","MA English","BS.Marketing","BS Software Engineer","BS Information & Technology","MA Islamiyat","MA Islamic Studies","Ms Computer Science","BS Software Engineering",&t1);
	Qualification q2 = Qualification("BS-Software Engineer","MSc Computer Science","MA. Mathematics","MS English","Charted Accountant","Ms Computer Science","Bs Software Engineer","MA English","BS.Marketing","BS Software Engineer",&t2);
	Qualification q3 = Qualification("BS-Software Engineer","MSc Computer Science","MA. Mathematics","MS English","Charted Accountant","BS-Software Engineer","MSc Computer Science","MA. Mathematics","MS English","Charted Accountant","BBA,MBA",&t3);
	Qualification q4 = Qualification("MS-Software Engineering","MSc Computer Science","MSc Computer Science","Bs-Software Engineering","Bs-Software Engineering","BS-Computer Science",&t4);
	q1.display();
	q2.display_2();
	q3.display_3();
	q4.display_4();
}
