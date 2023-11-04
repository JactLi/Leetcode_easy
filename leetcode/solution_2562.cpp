#include "solution.h"

long long solution_2562::findTheArrayConcVal(vector<int>& nums)
{
	long long count = 0;
	for (int i = 0; i < nums.size() / 2; i++) count += stoll(to_string(nums[i]) + to_string(nums[nums.size() - 1 - i]));
	if (nums.size() % 2) count += nums[nums.size() / 2 ];
	return count;
}