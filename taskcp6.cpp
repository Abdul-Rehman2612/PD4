#include <iostream>
using namespace std;

void longestduration(int h,int m);
main()
{	int h,m;
	cout << "Enter the number of hours: " ;
	cin >> h ;
	cout << "Enter the number of minutes: " ;
	cin >> m ;
	longestduration(h,m);
}
void longestduration(int h,int m)
{	
	
	if((h*60)>m)
	{
	cout << h ;
	}
	if((h*60)<m)
	{
	cout << m ;
	}		
}