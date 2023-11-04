#include "solution.h"

int solution_1572::diagonalSum(vector<vector<int>>& mat)
{
	int count = 0;
	for (int i = 0; i < mat.size(); i++)
	{
		count += mat[i][i] + mat[i][mat.size() - 1 - i];
	}

	if (mat.size() % 2)
	{
		count -= mat[mat.size()/2][mat.size()/2];
	}
	return count;
}