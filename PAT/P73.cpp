/*#pragma warning(disable : 4996)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <math.h>
#include <sstream>
#include <iomanip>
#include <map>
using namespace std;

struct Ques
{
	int ques_id = 0; //题目序号
	double full_score = 0;  //该题的分数
	int all_choose_num = 0;  //每道题的选项个数
	int right_choose_num = 0; //每道题的正确选项个数
	vector<char> right_choose; //每道题的正确选项
	map<char, bool> right_choose_choosing; //正确选项有没有被选中
	vector<int> choose_error_count; //错选没有选的记录
};

struct StuQuesChoose
{
	double score = 0; //获得的分数
	vector< vector<char> > all_ques_choose;
};

struct WrongChoose
{
	int ques_id = 0;
	int error_choose_pos;
	int error_count = 0;
};

bool sort_better(const WrongChoose & a, const WrongChoose & b)
{
	if (a.error_count == b.error_count)
	{
		if (a.ques_id == b.ques_id)
			return a.error_choose_pos < b.error_choose_pos;
		else
			return a.ques_id < b.ques_id;
	}
	else
		return a.error_count > b.error_count;
}

int main()
{
	int stu_n = 0, ques_m = 0;//学生数量和题目数量

	cin >> stu_n >> ques_m;

	vector<Ques> ques_buffer;
	Ques ques_temp;
	char right_choose_temp;
	for (int i = 0; i < ques_m; i++)
	{
		cin >> ques_temp.full_score >> ques_temp.all_choose_num >> ques_temp.right_choose_num;
		for (int j = 0; j < ques_temp.all_choose_num; j++)
			ques_temp.choose_error_count.push_back(0);
		for (int j = 0; j < ques_temp.right_choose_num; j++)
		{
			cin >> right_choose_temp;
			ques_temp.right_choose_choosing[right_choose_temp] = false;
			ques_temp.right_choose.push_back(right_choose_temp);
		}
		ques_temp.ques_id = i + 1;
		ques_buffer.push_back(ques_temp);
		ques_temp.right_choose.clear(); //清空当前的选择
		ques_temp.choose_error_count.clear();
	}

	//学生的选择
	vector<StuQuesChoose> stu_choose_buffer;
	StuQuesChoose stu_temp;
	vector<char> now_ques_choose;
	vector<char>::iterator it_v;
	string temp_str;
	bool half_right_flag = true, start_flag = false;
	char temp_choose;
	cin.get();
	for (int i = 0; i < stu_n; i++)
	{
		//读取学生选择
		getline(cin, temp_str); // 读取一整行,四个选择题
		for (int j = 0; j < temp_str.length(); j++) // 存储当前学生的所有选择，四个
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

		//检测学生选择
		for (int k = 0; k < ques_m; k++) //更改后的得分规则
		{
			if (stu_temp.all_ques_choose[k] == ques_buffer[k].right_choose)//全部相等 全对
				stu_temp.score += ques_buffer[k].full_score;
			else
			{
				half_right_flag = true;
				for (int x = 0; x < stu_temp.all_ques_choose[k].size(); x++)
				{
					temp_choose = stu_temp.all_ques_choose[k][x];
					it_v = find(ques_buffer[k].right_choose.begin(), ques_buffer[k].right_choose.end(), 
						temp_choose);
					if (it_v == ques_buffer[k].right_choose.end())
					{
						half_right_flag = false;
						ques_buffer[k].choose_error_count[int(temp_choose - 'a')]++; //错选累加
					}
					else
					{
						ques_buffer[k].right_choose_choosing[temp_choose] = true;//这个选项被选了
					}
				}
				for (int v = 0; v < ques_buffer[k].right_choose.size(); v++)//检查没有选的选项
				{
					temp_choose = ques_buffer[k].right_choose[v];
					if (ques_buffer[k].right_choose_choosing[temp_choose] == false)
						ques_buffer[k].choose_error_count[int(temp_choose - 'a')]++;
					else//true
						ques_buffer[k].right_choose_choosing[temp_choose] = false; //正确选项选过的重置
				}
				if(half_right_flag)
					stu_temp.score += ques_buffer[k].full_score / 2;
			}
		}
		stu_choose_buffer.push_back(stu_temp);
		stu_temp.all_ques_choose.clear();
		stu_temp.score = 0;
	}

	//输出学生分数
	for (int i = 0; i < stu_choose_buffer.size(); i++)
		printf("%.1lf\n", stu_choose_buffer[i].score);

	//错题统计
	vector<WrongChoose> wrong_choose_buf;
	WrongChoose temp_wrong_choose;
	for (int i = 0; i < ques_buffer.size(); i++)
	{
		for (int j = 0; j < ques_buffer[i].choose_error_count.size(); j++)
		{
			if (ques_buffer[i].choose_error_count[j] != 0)//有错误
			{
				temp_wrong_choose.ques_id = ques_buffer[i].ques_id;
				temp_wrong_choose.error_count = ques_buffer[i].choose_error_count[j];
				temp_wrong_choose.error_choose_pos = j;
				wrong_choose_buf.push_back(temp_wrong_choose);
			}
		}
	}

	//排序
	if (wrong_choose_buf.size() == 0)
	{
		cout << "Too simple" << endl;
	}
	else
	{
		sort(wrong_choose_buf.begin(), wrong_choose_buf.end(), sort_better);
		int max_error = wrong_choose_buf[0].error_count;
		for (int i = 0; ; i++)
		{
			if (wrong_choose_buf[i].error_count != max_error)
				break;
			printf("%d %d-%c\n", wrong_choose_buf[i].error_count, wrong_choose_buf[i].ques_id,
				char(wrong_choose_buf[i].error_choose_pos + 'a'));
		}
	}

	return 0;
}*/
