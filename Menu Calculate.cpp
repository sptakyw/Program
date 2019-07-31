#include <iostream>
#include <string>
using namespace std ;
int main() 
	{
		int Number ;
		int r ;
		int s ;
		int b ;
		int h ;
	cout << " Program Calculate Area " << endl ;
	cout << " 1.Circle " << endl ;
	cout << " 2.Square " << endl ;
	cout << " 3.Triangle " << endl;
	cout << " 4.Exit " << endl ;
do{	
	cout << " Enter your choose number : " ;
		cin >> Number ;
		if(Number==1)
		{	cout << "Enter Radius : " ;
		cin >> r ;
		cout << "Area of Circle is " << 3.14*r*r << endl ;
		}
		else if (Number==2)
		{ cout << "Square : " ;
		cin >> s ;
		cout << "Area of Square is " << s*s << endl;
		}
		else if (Number==3)
		{ cout << " Enter Base : " ;
		cin >> b ;
		cout << "Hight : " ;
		cin >> h ;
		cout << "Area of Triang is " << 0.5*b*h << endl ;
		}
}while(Number!= 4) ;
}