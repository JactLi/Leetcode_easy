#include "solution.h"

int solution_2432::hardestWorker(int n, vector<vector<int>>& logs)
{
	int lasttime = 0;
	int longesttime = 0;
	int hardestWorkerid = 0;
	for (int i = 0; i < logs.size(); i++)
	{
		if ((logs[i][1] - lasttime) > longesttime)
		{
			longesttime = logs[i][1] - lasttime;
			hardestWorkerid = logs[i][0];
		}
		else if ((logs[i][1] - lasttime) == longesttime)
		{
			hardestWorkerid = min(hardestWorkerid, logs[i][0]);
		}
		lasttime = logs[i][1];
	}
	return hardestWorkerid;
}