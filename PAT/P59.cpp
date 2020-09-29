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

void get_su_shu(vector<int> & a)
{
	bool flag = true;
	for (int i = 2; i <= 10000; i++)
	{
		flag = true;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = false;
				break;
			}	
		}
		if (flag)
			a.push_back(i);
	}
}

bool check_su_shu(int a)
{
	for (int i = 2; i < sqrt(a); i++)
	{
		if (a % i == 0)
			return false;
	}
	return (a > 1);
}

int main()
{
	int n = 0, k = 0;
	vector<string> range_id_buffer;
	vector<string> check_buffer;
	vector<bool> checked_flag;
	string temp;

	//排名 id 
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		range_id_buffer.push_back(temp);
		checked_flag.push_back(false);
	}

	//待查询id
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> temp;
		check_buffer.push_back(temp);
	}

	//输出
	int pai_ming = 0;
	vector<string>::iterator pos;
	for (int i = 0; i < k; i++)
	{
		//vector<string>::iterator pos = find(range_id_buffer.begin(), range_id_buffer.end(), check_buffer[i]);
		pos = find(range_id_buffer.begin(), range_id_buffer.end(), check_buffer[i]);
		if (pos != range_id_buffer.end())//存在
		{
			pai_ming = distance(range_id_buffer.begin(), pos) + 1;//查找排名 遍历导致的超时
			if (checked_flag[pai_ming - 1]) //被查过
			{
				cout << check_buffer[i] << ": Checked" << endl;
			}
			else //之前没有被查过
			{
				checked_flag[pai_ming - 1] = true;//设置为被查了
				if (check_su_shu(pai_ming)) // 排名是素数 小黄人玩偶！
				{
					cout << check_buffer[i] << ": Minion" << endl;
				}
				else if(pai_ming == 1)
				{
					cout << check_buffer[i] << ": Mystery Award" << endl;
				}
				else
				{
					cout << check_buffer[i] << ": Chocolate" << endl;
				}
			}
		}
		else //不存在 不能查到
		{
			cout << check_buffer[i] << ": Are you kidding?" << endl;
		}
	}

	return 0;
}*/