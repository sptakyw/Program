#include <iostream>
using namespace std;
int main()
{
	int A[2][2],B[2][2];
		cout<< "Enter matrix A :" << endl;
	for(int i=0;i<2;i++) {
		cin>> A[i][0] >> A[i][1];
}

	cout<< "Enter matrix B :" << endl;
	for(int i=0;i<2;i++) 
		{
			cin>> B[i][0] >> B[i][1];
		}

	cout<< "Matrix A+B :" << endl;

	for(int i=0;i<2;i++) 
	{
		for(int j=0;j<2;j++)

		{ cout << A[i][j] + B[i][j] << " " ; }
	cout << endl;

	}
return 0;
}