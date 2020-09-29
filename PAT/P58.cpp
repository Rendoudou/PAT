/*#pragma warning(disable : 4996)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

struct Ques
{
	int ques_id = 0; //��Ŀ���
	int full_score = 0;  //����ķ���
	int all_choose_num = 0;  //ÿ�����ѡ�����
	int right_choose_num = 0; //ÿ�������ȷѡ�����
	vector<char> right_choose; //ÿ�������ȷѡ��
	int error_count = 0; //ÿ����Ĵ����¼
};

struct Stu_ques_choose
{
	int score = 0; //��õķ���
	vector< vector<char> > all_ques_choose;
};

bool sort_wrong_more(const Ques& a, const Ques& b) 
{
	if (a.error_count == b.error_count)
		return a.ques_id < b.ques_id;
	else
		return a.error_count > b.error_count;
}

int main()
{
	int stu_n = 0, ques_m = 0;//ѧ����������Ŀ����

	cin >> stu_n >> ques_m;

	vector<Ques> ques_buffer;
	Ques ques_temp;
	char right_choose_temp;
	for (int i = 0; i < ques_m; i++)
	{
		cin >> ques_temp.full_score >> ques_temp.all_choose_num >> ques_temp.right_choose_num;
		for (int j = 0; j < ques_temp.right_choose_num; j++)
		{
			cin >> right_choose_temp;
			ques_temp.right_choose.push_back(right_choose_temp);
		}
		ques_temp.ques_id = i + 1;
		ques_buffer.push_back(ques_temp);
		ques_temp.right_choose.clear(); //��յ�ǰ��ѡ��
	}

	//ѧ����ѡ��
	vector<Stu_ques_choose> stu_choose_buffer;
	Stu_ques_choose stu_temp;
	vector<char> now_ques_choose;
	string temp_str;
	bool start_flag = false;
	cin.get();
	for (int i = 0; i < stu_n; i++)
	{
		getline(cin, temp_str); // ��ȡһ����,�ĸ�ѡ����
		for (int j = 0; j < temp_str.length(); j++) // �洢��ǰѧ��������ѡ���ĸ�
		{
			if (temp_str[j] == '(')
			{
				start_flag = true;
				continue;
			}
			if (temp_str[j] == ')' && start_flag)
			{
				start_flag = false;
				stu_temp.all_ques_choose.push_back(now_ques_choose);
				now_ques_choose.clear();
				continue;
			}
			if (start_flag && (temp_str[j] >= 'a' && temp_str[j] <= 'z'))
			{
				now_ques_choose.push_back(temp_str[j]);
			}
		}
		for (int k = 0; k < ques_m; k++)
		{
			if (stu_temp.all_ques_choose[k] == ques_buffer[k].right_choose)
				stu_temp.score += ques_buffer[k].full_score;
			else
				ques_buffer[k].error_count++;
		}
		stu_choose_buffer.push_back(stu_temp);
		stu_temp.all_ques_choose.clear();
		stu_temp.score = 0;
	}

	//����ɼ�
	for (int i = 0; i < stu_choose_buffer.size(); i++)
	{
		cout << stu_choose_buffer[i].score << endl;
	}

	//������Ŀ
	sort(ques_buffer.begin(), ques_buffer.end(), sort_wrong_more);

	//���
	int max_error = ques_buffer.begin()->error_count;
	if (max_error == 0)
	{
		cout << "Too simple" << endl;
		return 0;
	}
	int count = 0;
	for (int i = 0; i < ques_m; i++)
	{
		if (ques_buffer[i].error_count == max_error)
			count++;
	}
	cout << max_error;
	for (int i = 0; i < count; i++)
	{
		cout << " " << ques_buffer[i].ques_id;
	}
	return 0;
}*/