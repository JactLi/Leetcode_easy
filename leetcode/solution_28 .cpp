#include "solution.h"


int solution_28::strStr(string haystack, string needle)
{
	int length = needle.size();
	for (int i = 0; i < haystack.size(); i++)
	{
		string subString = haystack.substr(i, length);
		if (needle == subString)return i;
	}
	return -1;
}
