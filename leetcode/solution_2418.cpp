#include "solution.h"

vector<string> solution_2418::sortPeople(vector<string>& names, vector<int>& heights)
{
	vector<pair<string, int>> temp;
	for (int i = 0; i < names.size(); i++)
	{
		temp.push_back(make_pair(names[i], heights[i]));
	}

	for (int i = 0; i < temp.size(); i++)
	{
		for (int j = 0; j < temp.size() - i - 1; j++)
		{
			if (temp[j].second < temp[j + 1].second)
			{
				pair<string, int> t = temp[j + 1];
				temp[j + 1] = temp[j];
				temp[j] = t;

			}
		}
	}

	for (int i = 0; i < temp.size(); i++)
	{
		names[i] = temp[i].first;
	}

	for (int i = 0; i < temp.size(); i++)
	{
		cout << names[i] << endl;
	}

	return names;
}
