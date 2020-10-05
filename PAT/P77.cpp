/*#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
#include <map>
using namespace std;

bool sort_func(const int & a, const int & b)
{
	return a < b;
}

int main()
{
	int n = 0, full_score = 0;
	cin >> n >> full_score;

	vector<int> other_group_score;
	vector<double> group_score;
	int teacher_score = 0, temp = 0;
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		scanf("%d", &teacher_score);//老师给的分数
		for (int j = 0; j < n - 1; j++)//同学给的有效分数
		{
			scanf("%d", &temp);
			if (temp >= 0 && temp <= full_score)
				other_group_score.push_back(temp);
		}
		sort(other_group_score.begin(), other_group_score.end(), sort_func);
		for (int k = 1; k < other_group_score.size() - 1; k++)
			sum += other_group_score[k];
		sum = (sum / (other_group_score.size() - 2) + teacher_score) / 2;
		group_score.push_back(sum);
		other_group_score.clear();
	}

	int out = 0;
	double res = 0;
	for (int i = 0; i < group_score.size(); i++)
	{
		out = int(group_score[i]);
		res = group_score[i] - out;
		if (res >= 0.5f)
			out += 1;
		printf("%d\n", out);
	}

	return 0;
}*/
