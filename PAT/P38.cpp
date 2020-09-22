/*#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;
//空间换时间
int main()
{
	vector<int> score_buffer;
	vector<int> check_buffer;
	int n = 0, m = 0, temp = 0; // 学生人数, 查询分数个数, 临时变量
	int count_score[101] = { 0 };
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &temp);
		count_score[temp]++;
		score_buffer.push_back(temp);
	}
	scanf("%d", &m);
	while (m--)
	{
		scanf("%d", &temp);
		check_buffer.push_back(temp);
	}
	for (unsigned int i = 0; i < check_buffer.size(); i++)
	{
		if (i == 0)
			printf("%d", count_score[check_buffer[i]]);
		else
			printf(" %d", count_score[check_buffer[i]]);
	}
	return 0;
}*/