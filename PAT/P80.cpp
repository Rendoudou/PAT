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

struct Score
{
	int score = 0;
};

struct PassStu
{
	string name;
	int p = 0;
	int m = 0;
	int f = 0;
	int g = 0;
};

bool sort_pass_stu(const PassStu& a, const PassStu& b)
{
	if (a.g == b.g)
		return a.name < b.name;
	return a.g > b.g;
}

int she_4_5_ru(double a)
{
	int temp = 0;
	double res = 0.0f;

	temp = int(a);
	res = a - int(a);
	if (res > 0.5f)
		temp += 1;
	return temp;
}

int main()
{
	map<string, Score> program_online_score;
	map<string, Score> mid_term_test_score;
	map<string, Score> final_term_test_score;
	vector<string> stu_check_buf;
	vector<string> stu_pass_buf;
	int n, m, k, score;
	cin >> n >> m >> k;
	string name;
	
	//线上编程分数
	for (int i = 0; i < n; i++)
	{
		cin >> name >> score;
		if (score >= 200 && score <= 900)//首先编程分数要大于200
		{
			program_online_score[name].score = score;
			stu_check_buf.push_back(name);
		}
	}

	//期中考试分数
	for (int i = 0; i < m; i++)
	{
		cin >> name >> score;
		if (score >= 0 && score <= 100)
			mid_term_test_score[name].score = score;
	}

	//期末考试分数
	for (int i = 0; i < k; i++)
	{
		cin >> name >> score;
		if (score >= 0 && score <= 100)
			final_term_test_score[name].score = score;
	}

	//检查合格人员
	int final_score = 0;
	map<string, Score>::iterator it_m_mid, it_m_final, mid_end, final_end;
	vector<PassStu> pass_stu_buf;
	PassStu temp;
	for (size_t i = 0; i < stu_check_buf.size(); i++)
	{
		name = stu_check_buf[i];

		it_m_mid = mid_term_test_score.find(name);
		it_m_final = final_term_test_score.find(name);
		mid_end = mid_term_test_score.end();
		final_end = final_term_test_score.end();

		//两次成绩都存在
		if (it_m_mid != mid_end && it_m_final != final_end)
		{
			if (mid_term_test_score[name].score > final_term_test_score[name].score)
				final_score =int( mid_term_test_score[name].score * 0.4 + final_term_test_score[name].score * 0.6 + 0.5);
			else
				final_score =int( final_term_test_score[name].score * 1.0 + 0.5);

			if (final_score >= 60)
			{
				temp.name = name;
				temp.p = program_online_score[name].score;
				temp.m = mid_term_test_score[name].score;
				temp.f = final_term_test_score[name].score;
				temp.g = final_score;
				pass_stu_buf.push_back(temp);
			}
		}

		//只有期末成绩
		else if (it_m_mid == mid_end && it_m_final != final_end)
		{
			final_score = int(final_term_test_score[name].score * 1.0 + 0.5);
			if (final_score >= 60)
			{
				temp.name = name;
				temp.p = program_online_score[name].score;
				temp.m = -1; //没有参加期中考试
				temp.f = final_term_test_score[name].score;
				temp.g = final_score;
				pass_stu_buf.push_back(temp);
			}
		}
	}

	sort(pass_stu_buf.begin(), pass_stu_buf.end(), sort_pass_stu);

	for (int i = 0; i < pass_stu_buf.size(); i++)
		cout << pass_stu_buf[i].name << " " << pass_stu_buf[i].p << " " << pass_stu_buf[i].m << " " 
		<< pass_stu_buf[i].f << " " << pass_stu_buf[i].g << endl;//名字 线上编程 期中 期末 最终

	return 0;
}*/
