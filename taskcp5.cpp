#include <iostream>
using namespace std;

void possiblebonus(int your_position,int friend_position);
main()
{	int your_position,friend_position;
	cout << "Enter your position: " ;
	cin >> your_position ;
	cout << "Enter your friend's position: " ;
	cin >> friend_position ;
	possiblebonus(your_position,friend_position);
}
void possiblebonus(int your_position,int friend_position)
{	
	
	if((friend_position-your_position)<=6)
	{
	cout << "true" ;
	}
	if((friend_position-your_position)>6)
	{
	cout << "false" ;
	}		
}