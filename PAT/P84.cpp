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

int main()
{
	string str_describe;
	int n = 0;
	cin >> str_describe >> n;
	int count = 0;
	char now;
	string count_str;
	while (n > 1)
	{
		now = str_describe[0];
		for (int i = 0; i < str_describe.size(); i++)
		{
			if (now == str_describe[i])
				count++;
			else //跳变时记录
			{
				count_str += now + to_string(count); //添加
				count = 0; //清空
				now = str_describe[i];
				count++;
			}
			if (i == str_describe.size() - 1)//不存在跳变 到最后一个了记录
			{
				count_str += now + to_string(count); //添加
				count = 0; //清空
			}
		}
		str_describe = count_str; //交换d
		count_str.clear();
		n--;
	}
	cout << str_describe;
	return 0;
}*/
