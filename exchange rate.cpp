#include<iostream>
using namespace std;
int main()

{
	float Money ;
	float Euro ;
	float Dollar ;
	cout << "Input Thai Baths : " ;
	cin >> Money ;
	Dollar = Money*0.033 ;
	Euro = Money*0.029 ;
	cout << "***Exchange Rate***" << endl;
	cout << Money << " Bath is " << Dollar << " Dollars " << endl;
	cout << Money << " Bath is "<< Euro << " Euro" << endl;
}