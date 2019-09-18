#include <iostream>
using namespace std;
void display (int nums[3][4]); 
void pow2 (int nums[3][4]);

int main()
{	int val[3][4] = {8,16,9,52,3,15,27,6,14,25,2,10};
	display(val) ;
	pow2(val) ;
	return 0;
}

void display (int nums[3][4])
	{
		for(int row_num = 0 ; row_num < 3 ; row_num++) 
		{
			for(int col_num = 0; col_num < 4; ++col_num)
				cout << nums[row_num][col_num] <<"\t";
			cout << endl;
		} 
cout << "******* value * value ******* " << endl;

	}

void pow2  (int nums[3][4])
	{
		for(int row_num = 0 ; row_num < 3 ; row_num++) 
		{
			for(int col_num = 0; col_num < 4; ++col_num)
				cout << nums[row_num][col_num] * nums[row_num][col_num] <<"\t";
			cout << endl;
		}
	}