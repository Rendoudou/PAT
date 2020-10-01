/*#pragma warning(disable : 4996)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <math.h>
#include <sstream>
#include <iomanip>
#include<map>
using namespace std;

int main()
{

	int stu_n = 0, judge_ques_m = 0;
	cin >> stu_n >> judge_ques_m;
	vector<int> judge_ques_score(judge_ques_m);
	vector<int> judge_ques_answer(judge_ques_m);
	vector<int> stu_score_buffer(stu_n);

	for (int i = 0; i < judge_ques_m; i++)
	{
		cin >> judge_ques_score[i];
	}

	for (int i = 0; i < judge_ques_m; i++)
	{
		cin >> judge_ques_answer[i];
	}

	int score_temp = 0;
	int temp_answer = 0;
	for (int i = 0; i < stu_n; i++)
	{
		score_temp = 0;
		for (int j = 0; j < judge_ques_m; j++)
		{
			cin >> temp_answer;
			if (temp_answer == judge_ques_answer[j])
			{
				score_temp += judge_ques_score[j];
			}
			else
				continue;
		}
		stu_score_buffer[i] = score_temp;
	}
	
	for (int i = 0; i < stu_n; i++)
	{
		cout << stu_score_buffer[i] << endl;
	}

	return 0;
}*/
