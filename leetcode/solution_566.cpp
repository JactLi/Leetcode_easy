#include "solution.h"

vector<vector<int>> solution_566::matrixReshape(vector<vector<int>>& mat, int r, int c)
{
	int row = mat.size();
	int col = mat[0].size();
	if ((r * c != row * col) || (r == row && c == col))return mat;
	else
	{
		vector<vector<int>> temp(r, vector<int>(c));
		for (int x = 0; x < row * col; x++)
		{
			temp[x / c][x % c] = mat[x / col][x % col];
		}
		return temp;
	}
}