#include <iostream>
#include <string>
#include <iomanip>
using namespace std ;
// Define prototype function
void DisplayMenu() ;
float Area(const float Radius) ;
float Area(const float Length, const float Widht) ;
double Area(const double Height, const double Base) ;

int main()
{
	char Choice ;
	bool Flag = true ;
	do {
		DisplayMenu() ;
		cin >> Choice ;
		if (Choice == '1')
		{
			float Radius ;
			cout << "\nEnter radius : " ;
			cin >> Radius ;
			cout << "Area of Circle = " << fixed ;
			cout << setprecision(2) << Area(Radius) << endl;
		}
		else if (Choice == '2') 
		{
			float Length,Widht ;
			cout << "Enter Length and Widht : " ;
			cin >> Length >> Widht ;
			cout << "Area of Rectangle = " << fixed ;
			cout << setprecision(2) << Area(Length,Widht) ;
			cout << endl ;
		}
		else if (Choice == '3')
		{
			double Height,Base ;
			cout << "Enter Height : " ;
			cin >> Height ;
			cout << "Enter Base : " ;
			cin >> Base ;
			cout << "Area of Triangle = " << fixed ;
			cout << setprecision(2) << Area(Height,Base) ;
			cout << endl ;
		}
		else if (Choice == '4') Flag = false ;
		else 
		{
			cout << "\nYou choose out of range is " ;
			cout << "not process.\n" ;
		}
		} while (Flag) ;
	cout << "\n . . . Exit Program . . . \n" ;
	return(0) ;
}

float Area(const float Radius)
{
	return(3.14159F * Radius * Radius) ;
}

float Area(const float Length, const float Widht)
{
	return(Length * Widht) ;
}

double Area(const double Height, const double Base)
{
	return(0.5 * Height * Base) ;
}

void DisplayMenu()
{
	cout << endl ;
	cout << "Program Calculate Area" << endl ;
	cout << " 1.Circle " << endl ;
	cout << " 2.Ractangle" << endl ;
	cout << " 3.Triangle " << endl ;
	cout << " 4.Exit " << endl ;
	cout << "Enter your choose number : " ;
}

