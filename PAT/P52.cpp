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

int main()
{
	//vector<char> buffer_hand; //模板类
	//vector<char> buffer_eye;
	//vector<char> buffer_mouse;
	vector<string> buffer[3];
	string buffer_str; bool flag = false;
	for (int i = 0; i < 3; i++)
	{
		getline(cin, buffer_str);
		//cout << buffer_str << endl;
		string temp_str;
		for (int j = 0; j < buffer_str.length(); j++)
		{
			if (buffer_str[j] == '[' && flag == false)
			{
				flag = true;
				continue;
			}
			if (flag)
			{
				if (buffer_str[j] == ']')
				{
					flag = false;
					buffer[i].push_back(temp_str);
					temp_str.clear();
					continue;
				}
				else
					temp_str.push_back(buffer_str[j]);
			}
		}
	}
	int n = 0;
	cin >> n;
	vector<vector<int>> out_emoji_set;
	vector<int> temp_emoji;
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> temp;
			temp_emoji.push_back(temp);
		}
		out_emoji_set.push_back(temp_emoji);
		temp_emoji.clear();
	}
	int a, b, c, d, e;
	for (int i = 0; i < n; i++)
	{
		a = out_emoji_set[i][0];
		b = out_emoji_set[i][1];
		c = out_emoji_set[i][2];
		d = out_emoji_set[i][3];
		e = out_emoji_set[i][4];

		if(a <= 0 || b <= 0 || c <= 0 || d <= 0 || e <= 0)
		{
			cout << "Are you kidding me? @\\/@" << endl;
			continue;
		}

		if ((a > buffer[0].size()) || (b > buffer[1].size()) || (c > buffer[2].size()) || (d > buffer[1].size()) || (e > buffer[0].size()))
		{
			cout << "Are you kidding me? @\\/@" << endl;
				continue;
		}
		else
		{
			cout << buffer[0][a - 1];//手
			printf("(");
			cout << buffer[1][b - 1];//眼
			cout << buffer[2][c - 1];//口
			cout << buffer[1][d - 1];//眼
			printf(")");
			cout << buffer[0][e - 1];//手
			cout << endl;
		}
	}

	return 0;
}*/