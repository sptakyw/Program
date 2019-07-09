#include <iostream>
using namespace std;
int main()
{
	float C;
	cout << "Enter Celsius temperature : " ;
	cin >> C;
	float F = C*9/5+32 ;
	cout << "Fahrenheit = "<<F<<endl;
	cout << "Now weather in Thailand is "<< ((F)>=70?"HOT":"COOL");
	cout << endl;
	return(0);
}