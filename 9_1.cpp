#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	string Filename ;
	ifstream InFile ;
	ofstream OutFile ;
	string Name ;
	int Score ;

	srand(time(0)) ;
	cout << "Enter file name : " ;
	cin >>  Filename ;


	//open output file for write data
	OutFile.open(Filename.c_str() , ios_base::out|ios_base::app ) ;
	cout << "Now open file" << Filename << "for write" << endl ;
	//Get name from keyboard
	for(int n = 1 ; n <= 3 ; n++)
	{
		cout << "Enter name" << n << " : "  ;
		cin >> Name ;
		cout << "Enter score" << n << " : " ;
		cin >> Score ;
		OutFile << Name << "\t" << Score ;
		
		//cout << setw(5) << Value ;
		//write value ( intgeter number ) to output file
		//OutFile << Name << " " ;
		//OutFile << Score << " " ;
	}
	cout << endl ;
	OutFile.close() ; 
	InFile.open(Filename.c_str()) ;            // close output file
	cout << "===========================================" << endl ;
	// open input file for read data
	cout << "Name" << "\t" << "Score" << endl ;
	cout << "===========================================" << endl ;
	// Read name from input file
	InFile >> Name >> Score ;
	while(!InFile.eof())
	{
		cout << Name << "\t" << Score << endl ;
		InFile >> Name >> Score ;
	}
	cout << endl ;
	InFile.close() ;              // close input file
	cout << "Now close file" << Filename << ".\n\n" ;
	return(0) ;
}

