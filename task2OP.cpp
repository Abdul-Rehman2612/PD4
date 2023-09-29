#include <iostream>
using namespace std;

void Reverse(string input);
main()
{	
	string input; 
	Reverse(input);
}
void Reverse(string input)
{	
	cout << "Enter 'true' or 'false': ";
	cin >> input ;
	if(input=="true")
	{
	cout << "false" ;
	}
	if(input=="false")
	{
	cout << "true" ;
	}
			
}