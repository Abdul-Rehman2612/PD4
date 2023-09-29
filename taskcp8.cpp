#include <iostream>
using namespace std;

void pet(int holidays);
main()
{	
	int holidays; 
	cout << "Holidays: " ;
	cin >> holidays ;
	pet(holidays);
}
void pet(int holidays)
{	
	int workingdays=365-holidays;
	int timeforgames=workingdays*63+holidays*127;
	int timespare=30000-timeforgames;
	int hours;
	int minutes;
	if(timeforgames>30000)
	{
	cout << "Tom will run away" << endl ;
	hours=timespare/60*-1;
	minutes=timespare%60*-1;
	cout << hours << " hours and " << minutes << " minutes for play" ;
	}
	if(timeforgames<30000)
	{
	cout << "Tom sleeps well" << endl ;
	hours=timespare/60;
	minutes=timespare%60;
	cout << hours << " hours and " << minutes << " minutes less for play" ;
	}		
}