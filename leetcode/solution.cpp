#include "solution.h"

//696. 计数二进制子串
//给定一个字符串 s，统计并返回具有相同数量 0 和 1 的非空（连续）子字符串的数量，并且这些子字符串中的所有 0 和所有 1 都是成组连续的。
//重复出现（不同位置）的子串也要统计它们出现的次数。

//超过时间限制
int isSimilar(string s, int i, int j);

int solution::countBinarySubstrings(string s)
{
	int count = 0;
	for (int i = 0; i < s.size() - 1; i++)
	{
		if (s[i] != s[i + 1])
		{
			int j = i + 1;
			count += isSimilar(s, i, j);
		}
	}
	return count;
}

int isSimilar(string s, int i, int j)
{
	i--;
	j++;
	if (i > -1 && j < s.size())
	{
		if (s[i] == s[i + 1] && s[j] == s[j - 1])
		{
			return isSimilar(s, i, j) + 1;
		}
	}
	return 1;
}

//1089. 复写零
//给你一个长度固定的整数数组 arr ，请你将该数组中出现的每个零都复写一遍，并将其余的元素向右平移。
//注意：请不要在超过该数组长度的位置写入元素。请对输入的数组 就地 进行上述修改，不要从函数返回任何东西。

void solution::duplicateZeros(vector<int>& arr)
{
	vector<int> temp;
	for (int i = 0; temp.size() < arr.size(); i++)
	{
		temp.push_back(arr[i]);
		if (arr[i] == 0 && temp.size() < arr.size())
		{
			temp.push_back(arr[i]);
		}
	}
	arr = temp;
}