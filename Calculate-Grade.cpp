#include <iostream>
using namespace std;
int main()
{
	int Score;
	cout << "Enter Score : " ;
	cin >> Score ;
	if ( Score >= 90 && Score <= 100 )
		cout << "Grade A" << endl ;
	else if ( Score >= 80 && Score <= 89 )
		cout << "Grade B" << endl ;
	else if ( Score >= 70 && Score <= 79 )
		cout << "Grade C" << endl ;
	else if ( Score >=  60 && Score <= 69 )
		cout << "Grade D" << endl ;
	else if ( Score >= 0 && Score <= 59 )
		cout << "Grade F" << endl ;
	else 
		cout << "Error" ;
	return(0) ;
}