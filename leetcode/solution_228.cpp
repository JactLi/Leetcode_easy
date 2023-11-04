#include "solution.h"

vector<string> solution_228::summaryRanges(vector<int>& nums)
{
	vector<string> sr;
	if (nums.empty())
	{
		return sr;
	}
	int n = nums.size();
	int stringEnd = 0;
	int stringStart = 0;
	
	for (int i = 0; i < n - 1; i++)
	{
		if (nums[i] + 1 != nums[i + 1])
		{
			stringEnd = nums[i];
			if (stringStart == stringEnd)
			{
				sr.push_back(to_string(stringStart));
			}
			else
			{
				sr.push_back(to_string(stringStart) + "->" + to_string(stringEnd));
			}		
			stringStart = nums[i + 1];		
		}
	}

	if (nums[n - 2] + 1 != nums[n - 1])
	{
		sr.push_back(to_string(stringStart));
	}
	else
	{
		sr.push_back(to_string(stringStart) + "->" + to_string(nums[n - 1]));
	}

	//cout << "sr中元素个数为：" << sr.size() << endl;
	//for (int i = 0; i < sr.size(); i++)
	//{
	//	cout << sr[i] << ",";
	//}
	//cout << endl;
	return sr;
}