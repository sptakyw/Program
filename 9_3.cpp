#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int Menu() ;
float w,h ;
void AddStudent(string FN) ;
void DisplayStudent(string FN) ;

int main()
{
	const string Filename = "student.dat" ;
	ifstream InFile ;
	ofstream OutFile ;
	int c ;
	do 
	{
		system("cls") ;
		c = Menu() ;
		switch(c)
		{
		case 1 : AddStudent(Filename) ; break ;
		case 2 : DisplayStudent(Filename) ; break ;
		}
	}
	while (c != 0) ;
	cout << "Exit Program." << endl ;
	return(0) ;
}

int Menu()
{
	string line(25,'=') ;
	int Choose ;
	cout << "Programe Add-Display Student Data\n" ;
	cout << line << endl ;
	cout << ":     Main Menu		:\n " ;
	cout << line << endl ;
	cout << ":  0 - Exit			:\n" ;
	cout << ":  1 - AddStudent		:\n" ;
	cout << ":  2 - DisplayStudent	:\n" ;
	cout << line << endl ;
	cout << "Enter choose : " ;
	cin >> Choose ;
	return(Choose) ;
}

void AddStudent(string FN)
{
	ofstream OutFile(FN.c_str() , ios_base::out|ios_base::app ) ;
	if (OutFile.is_open())
	{
		string Id, Name ;
		cout << "\n Add Student \n" ;
		cout << "Enter id :" ;
		cin >> Id ;
		cout << "Enter name : " ;
		cin >> Name ;
		cout << "Enter Weight : " ;
		cin >> w ;
		cout << "Enter Height : " ;
		cin >> h ;

		OutFile << Id << " " << Name << endl ;
		OutFile.close() ;
		char Wait ;
		cin.get(Wait) ;
		cout << "\nSaved already.\n" ;
		cin.get(Wait) ;
	}
	else
		cout << "Eile could not opened." << endl ;
}

void DisplayStudent(string FN)
{

	ifstream InFile(FN.c_str(), ios_base::in) ;
	if (InFile.is_open())\
	{
		string Id, Name ;
		float w,h ;
		string line (50,'=') ;
		int n = 0 ;
		cout << "\nList Student\n" ;
		cout << line << endl ;
		cout << "No.\tId\tName\tWeight\tHeight\n" ;
		cout << line << endl ;

		InFile >> Id >> Name >> w >> h ;
		while (!InFile.eof())
		{
			n = n + 1 ;
			cout << right << setw(3) << n << " : " ;
			cout << left << setw(6) << Id ;
			cout << " " << Name << endl ;
			InFile >> Id >> Name ;
		}
		InFile.close() ;
		system("pause") ;
	}
	else
		cout << "File could not opened." << endl ;
}


