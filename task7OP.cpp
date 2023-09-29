#include <iostream>
using namespace std;

void flowershop(int red_rose,int white_rose,int tulips);
main()
{	int red_rose,white_rose,tulips; 
	cout << "Red Rose: " ;
	cin >> red_rose ;
	cout << "White Rose: " ;
	cin >> white_rose ;
	cout << "Tulips: " ;
	cin >> tulips ;
	flowershop(red_rose,white_rose,tulips);
}
void flowershop(int red_rose,int white_rose,int tulips)
{	
	float original_price,discount_price,redroseprice,whiteroseprice,tulipsprice;
	redroseprice=red_rose*2;
	whiteroseprice=white_rose*4.10;
	tulipsprice=tulips*2.50;
	original_price=redroseprice+whiteroseprice+tulipsprice;
	cout << "Original Price: $" << original_price << endl ;
	if(original_price>200)
	{
	discount_price=original_price-original_price*0.2;
	cout << "Price after discount: $" << discount_price ;
	}
	if(original_price<=200)
	{
	cout << "No discount applied." ;
	}		
}