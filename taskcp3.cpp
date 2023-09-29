#include <iostream>
using namespace std;

void discounts(string name,float ticket_price_dollars);
main()
{	float ticket_price_dollars;
	string name; 
	cout << "Enter the country's name: " ;
	cin >> name ;
	cout << "Enter the ticket price in dollars: $" ;
	cin >> ticket_price_dollars ;
	discounts(name,ticket_price_dollars);
}
void discounts(string name,float ticket_price_dollars)
{	
	float final_price;
	if(name=="Pakistan")
	{
	final_price=ticket_price_dollars-ticket_price_dollars*0.05;
	cout << "Final ticket price after discount: $" << final_price ;
	}
	if(name=="Ireland")
	{
	final_price=ticket_price_dollars-ticket_price_dollars*0.1;
	cout << "Final ticket price after discount: $" << final_price ;
	}
	if(name=="India")
	{
	final_price=ticket_price_dollars-ticket_price_dollars*0.2;
	cout << "Final ticket price after discount: $" << final_price ;
	}
	if(name=="England")
	{
	final_price=ticket_price_dollars-ticket_price_dollars*0.3;
	cout << "Final ticket price after discount: $" << final_price ;
	}
	if(name=="Canada")
	{
	final_price=ticket_price_dollars-ticket_price_dollars*0.45;
	cout << "Final ticket price after discount: $" << final_price ;
	}
	
			
}