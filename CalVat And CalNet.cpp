#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void Calprice (float price[5][3]) ;
void display(string name[5],float price[5][3]) ;
int main()
{
	string name[5] ;
	float price[5][3] ;
	for(int i = 0 ; i < 5 ; i++)
	{
		cout << "Enter Product Name : " ;
		cin >> name[i] ;
		cout << "\tprice : " ;
		cin >> price[i][0] ;
	}
	Calprice(price) ;
	display(name,price);
	return(0) ;
}

void Calprice(float price[5][3])
{
	for(int i = 0 ; i < 5 ; i++)
	{
		price[i][1] = price[i][0] * 0.07 ;
		price[i][2] = price[i][0] + price[i][1] ;
	}
}

void display(string name[5],float price[5][3])
{
	cout << "No.\t\tproduct\t\tprice\t\tvat7%\t\tNet" <<endl;
	for(int i = 0 ; i < 5 ; i++)
	{
		cout << setprecision(2) << fixed << i+1 << "\t\t" << name[i] << "\t\t" << price[i][0] << "\t\t" << price[i][1] << "\t\t" << price[i][2] << endl;
	}
}
