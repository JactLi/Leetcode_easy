#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

class solution
{
public:
	void duplicateZeros(vector<int>& arr);

	int countBinarySubstrings(string s);
};

class solution_13 :public solution
{
private:
	unordered_map<char, int> symbolValues = {
	{'I', 1},
	{'V', 5},
	{'X', 10},
	{'L', 50},
	{'C', 100},
	{'D', 500},
	{'M', 1000},
	};

public:
	int romanToInt(string s);
};

class solution_20 :public solution
{
public:
	bool isValid(string s);
};

class solution_21 :public solution
{
private:
public:
	struct ListNode;
	ListNode* ListNodeInit(int arr[], int num);
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
};

class solution_27 : public solution
{
public:
	int removeElement(vector<int>& nums, int val);
	int removeElement_a(vector<int>& nums, int val);
};

class solution_28 : public solution
{
public:
	int strStr(string haystack, string needle);
};

class solution_228 : public solution
{
public:
	vector<string> summaryRanges(vector<int>& nums);
};

class solution_563 : public solution
{
private:
	struct TreeNode;
	int ans;
public:
	void createTreeNode(TreeNode* root, stack<int> temp);
	int findTilt(TreeNode* root);
	int dfs(TreeNode* node);
	TreeNode* root = NULL;
};

class solution_566 : public solution
{
public:
	vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c);
};

class solution_2418 : public solution
{
public:
	vector<string> sortPeople(vector<string>& names, vector<int>& heights);
};

class solution_2432 :public solution
{
public:
	int hardestWorker(int n, vector<vector<int>>& logs);
};

class solution_2562 : public solution
{
public:
	long long findTheArrayConcVal(vector<int>& nums);
};

class solution_2566 : public solution
{
public:
	int minMaxDifference(int num);
};

class solution_1572 :public solution
{
public:
	int diagonalSum(vector<vector<int>>& mat);
};

