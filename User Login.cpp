#include <iostream>
#include <string>
using namespace std ;
int main()
{
	char Menu ;
	string Username ;
	int Pass1 ;
	string Username2 ;
	int Pass2 ;

	cout << "/////////////////Menu///////////////// " << endl;
	cout << " 1.Register " << endl;
	cout << " 2.Login " << endl ;
	cout << " Q.Exit Program " << endl ;
	

	do {
		cout << " ------------------------------------- " << endl;
		cout << " Enter Menu : " ;
		cin >> Menu ;

		if(Menu == '1')
			{
			cout << "**************Register**************" << endl;
			cout << " Input Username : " ;
			cin >> Username ;
			cout << " Input Password : " ;
			cin >> Pass1 ;
			} 

		else if(Menu == '2')
			{
			cout << "***************Login***************" << endl;
			cout << " Input Username : " ;
			cin >> Username2 ;
			cout << " Input Password : " ;
			cin >> Pass2 ;
				if (Username == Username2 || Pass1 == Pass2) 
					{cout << " Username or Password correct " << endl;}
				else if (Username != Username2 || Pass1 != Pass2)
					{cout << " !!!!Username or Password incorrect Please try again!!!! " << endl;
						do {
							cout << "Input Username : ";
							cin >> Username2 ;
							cout << "Input Password : ";
							cin >> Pass2 ;

							}while(Username != Username2 || Pass1 != Pass2) ;
				}
		}
				
		else if(Menu == 'Q')
		{cout << "Exit Program......"<<endl;}
	}while (Menu != 'Q') ;

}