#include "solution.h"


int solution_13::romanToInt(string s)
{
	int count = 0;
	int Max = 0;
	for (int i = s.size()-1; i >= 0; i--)
	{
		if (symbolValues[s[i]] < Max)
		{
			count -= symbolValues[s[i]];
		}
		else
		{
			count += symbolValues[s[i]];
			Max = symbolValues[s[i]];
		}
	}
	return count;
}