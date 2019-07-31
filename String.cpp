#include <iostream>
#include <string>
using namespace std ;
int main()
{
	char Ch;
	int Count = 0 ;
	string Str ;
	int lower = 0 ;
	int upper = 0 ;
	int numberic = 0 ;
	int special = 0 ;

	cout << "Enter String : " ;
	while (cin >> Ch ) 
	{	if(Ch == '.')break ;
		if(Ch >= 'a' && Ch <= 'z') lower++ ;
		else if (Ch >= 'A' && Ch <= 'Z') upper++ ;
		else if (Ch >= '0' && Ch <= '9') numberic++ ;
		else special ;
		Count++ ;
		Str += Ch ;
}
	cout << " Your message have " << lower << "lowers character " << endl ;
	cout << " Your message have " << upper << "uppers character " << endl ;
	cout << " Your message have " << numberic << "numberic character " << endl ;
	cout << " Your message have " << special << "special character " << endl ;
	return (0) ;
}