#include <iostream>
#include <string>
#include <vector>

#include "solution.h"
#include "utils.h"
using namespace std;

void test_countBinarySubstrings()
{
	solution test;
	cout << "count = " << test.countBinarySubstrings("00110011") << endl;
	cout << "count = " << test.countBinarySubstrings("10101") << endl;
}

void test_duplicateZeros()
{
	solution test;
	vector<int> arr = { 1,0,2,3,0,4,5,0 };
	vector<int> std = { 1,0,0,2,3,0,0,4 };
	test.duplicateZeros(arr);
}

void test_sortPeople()
{
	solution_2418 test;
	vector<string> names = { "Mary","John","Emma" };
	vector<int> heights = { 180,165,170 };
	test.sortPeople(names, heights);

	vector<string> names_2 = { "Alice","Bob","Bob" };
	vector<int> heights_2 = { 155,185,150 };
	test.sortPeople(names_2, heights_2);
}

void test_solution_2423()
{
	solution_2432 test;
	vector<vector<int>> logs = { {0,3},{2,5},{0,9},{1,15} };
	test.hardestWorker(10, logs);

	vector<vector<int>> logs_2 = { {1,1},{3,7},{2,12},{7,17} };
	test.hardestWorker(10, logs_2);

	vector<vector<int>> logs_3 = { {36,3},{1,5},{12,8},{25,9},{53,11},{29,12},{52,14} };
	test.hardestWorker(10, logs_3);
}

void test_228()
{
	solution_228 test;
	vector<int> nums = { 0,1,2,4,5,7 };
	test.summaryRanges(nums);

	vector<int> nums_2 = { 0,2,3,4,6,8,9 };
	test.summaryRanges(nums_2);

	vector<int> nums_3 = {-1};
	test.summaryRanges(nums_3);
}

void test_2562()
{
	solution_2562 test;
	vector<int> nums_1 = { 7,52,2,4 };
	vector<int> nums_2 = { 5,14,13,8,12 };
	int a = test.findTheArrayConcVal(nums_1);
	int b = test.findTheArrayConcVal(nums_2);
	cout << a << " " << b << endl;
}

void test_2566()
{
	solution_2566 test;
	int a = test.minMaxDifference(11891);
	int b = test.minMaxDifference(90);
	cout << a << " " << b << endl;
}

void test_1572()
{
	solution_1572 test;
	vector<vector<int>> mat_1 = {
		{1,2,3},{4,5,6},{7,8,9}
	};
	vector<vector<int>> mat_2 = {
		{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}
	};
	vector<vector<int>> mat_3 = {
		{7,3,1,9},{3,4,6,9},{6,9,6,6},{9,5,8,5}
	};
	int a = test.diagonalSum(mat_1);
	int b = test.diagonalSum(mat_2);
	int c = test.diagonalSum(mat_3);
	cout << a << "  " << b << endl;
}

void test_13()
{
	solution_13 test;
	int a = test.romanToInt("MCMXCIV");
}

void test_20()
{
	solution_20 test;
	test.isValid("()[]{}");
}

void test_21()
{
	solution_21 test;
	int arr_l1[3] = { 1,2,4 };
	int arr_l2[3] = { 1,3,4 };
	int n = sizeof(arr_l1) / sizeof(int);
	solution_21::ListNode* l1 = test.ListNodeInit(arr_l1, n);
	solution_21::ListNode* l2 = test.ListNodeInit(arr_l2, n);
	solution_21::ListNode* l3 = test.mergeTwoLists(l1, l2);
}

void test_27()
{
	solution_27 test;
	vector<int> nums_1 = { 3,2,2,3 };
	vector<int> nums_2 = { 0,1,2,2,3,0,4,2 };
	test.removeElement(nums_1, 3);
	printData(nums_1);
	test.removeElement(nums_2, 2);
	printData(nums_2);
}

void test_563()
{
	solution_563 test;
	
	int temp[7] = {4,2,3,5,9,0,7};
	stack<int> stk;
	for (int i = 0; i < sizeof(temp) / sizeof(int); i++)
	{
		stk.push(temp[i]);
	}
	test.createTreeNode(test.root,stk);
	
}

void test_566()
{
	solution_566 test;
	vector<vector<int>> mat = {
		{ 1,2 },
		{ 3,4 }
	};
	
	printData(test.matrixReshape(mat, 1, 4));
	printData(test.matrixReshape(mat, 2, 4));
}

void test_28()
{
	solution_28 test;
	int str1 = test.strStr("sadbutsad", "sad");

	int str2 =  test.strStr("leetcode","leeto");

}

int main()
{
	//test_countBinarySubstrings();
	//test_duplicateZeros();
	//test_sortPeople();
	//test_228();
	//test_solution_2423();
	//test_2562();
	//test_2566();
	//test_1572();
	//test_13();
	//test_20();
	//test_21();
	//test_27();
	//test_563();
	//test_566();
	test_28();
	return 0;
}