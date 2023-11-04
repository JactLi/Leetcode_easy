#include "utils.h"

//´òÓ¡Êý¾Ý
template <class T>
void printData(T a)
{
	cout << a << endl;
}

void printData(vector<int> nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
}

void printData(vector<vector<int>> arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[0].size(); j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}