#include <iostream>
#include <windows.h>
using namespace std;
void printmenu(char x);
void checkaggregate(string name,float inter_marks,float matric_marks,float ecat_marks);
void comparemarks(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2);
main()
{
	char x;
	printmenu(x);
}
void printmenu(char x)
{	string name,nameStd1,nameStd2;
	float inter_marks,matric_marks,ecat_marks,ecatMarksStd2,ecatMarksStd1;
	cout << "University Admission Management System" << endl << endl ;
	cout << "For calculating aggregate enter '1' for comparing ECAT marks enter '2': " ;
	cin >> x ;
	if(x=='1')
	{
		checkaggregate(name,inter_marks,matric_marks,ecat_marks);
	}
	if(x=='2')
	{
		comparemarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);
	}
}
void checkaggregate(string name,float inter_marks,float matric_marks,float ecat_marks)
{
	cout << "Enter the student's name: " ;
	cin >> name ;
	cout << "Enter matriculation marks (out of 1100): " ;
	cin >> matric_marks ;
	cout << "Enter intermediate marks (out of 550): " ;
	cin >> inter_marks ;
	cout << "Enter Ecat marks (out of 400): " ;
	cin >> ecat_marks ;
	;
	cout << "Aggregate score for "<< name << " in UET is: " << (matric_marks/1100)*30+(inter_marks/550)*30+(ecat_marks/400)*40 << "%";
}
void comparemarks(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2)
{
	cout << "Enter the student's name: " ;
	cin >> nameStd1 ;
	cout << "Enter Ecat marks (out of 400): " ;
	cin >> ecatMarksStd1 ;
	cout << "Enter the student's name: " ;
	cin >> nameStd2 ;
	cout << "Enter Ecat marks (out of 400): " ;
	cin >> ecatMarksStd2;
	if(ecatMarksStd1>ecatMarksStd2)
	{
		cout << nameStd1 << " has more marks in ECAT than " << nameStd2 ;
	}
	if(ecatMarksStd1<ecatMarksStd2)
	{
		cout << nameStd2 << " has more marks in ECAT than " << nameStd1 ;
	}
	if(ecatMarksStd1==ecatMarksStd2)
	{
		cout << nameStd1 << " and " << nameStd2 << " have equal marks in ECAT." ;
	}


}