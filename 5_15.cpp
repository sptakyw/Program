#include <iostream>
#include <string>
using namespace std ;
int main()
{
	string Str ;
	cout << " Enter String : " ;
	getline(cin,Str) ;
	cout << endl;
	cout << " Your string enter : " << Str << endl ;
	cout << "Length of string = " << Str.length() << endl;
	if(Str.length() <= 10)
	{for (int n = 0 ; n < Str.length() ; n++) 
		{
		cout << "Position " << n << " = " << Str.at(n) << endl;
		}
	}else
	{	cout << " Your String is more than 10 characters " ;
	}
	cout << endl ;
	return (0) ;
}