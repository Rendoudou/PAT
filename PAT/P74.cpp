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

int main()
{
	string jin_zhi_biao;
	string a, b;
	cin >> jin_zhi_biao;
	cin >> a >> b;

	//长度补齐
	int max_length = a.length() > b.length() ? a.length() : b.length();//得到最长
	if (a.length() > b.length()) //a比b长
		for (unsigned int i = b.length(); i < max_length; i++)
			b = '0' + b;
	else //b的长度大于等于a
		for (unsigned int i = a.length(); i < max_length; i++)
			a = '0' + a;

	//相加
	int ben_wei = 0, jin_wei = 0;
	int jin_zhi_pos = jin_zhi_biao.length() - 1;
	list<char> res;
	for (int i = max_length - 1; i >= 0; i--)
	{
		ben_wei = (a[i] - '0') + (b[i] - '0') + jin_wei;
		if (jin_zhi_biao[jin_zhi_pos] == '0')
		{
			jin_wei = ben_wei / 10;
			ben_wei = ben_wei % 10;
		}
		else
		{
			jin_wei = ben_wei / int(jin_zhi_biao[jin_zhi_pos] - '0');
			ben_wei = ben_wei % int(jin_zhi_biao[jin_zhi_pos] - '0');
		}
		res.push_front(char(ben_wei + '0'));
		jin_zhi_pos--;
	}
	if (jin_wei)
	{
		if (max_length == 20)
			res.push_front(char(jin_wei + '0'));
		else
		{
			while (jin_zhi_pos >= 0)
			{
				ben_wei = jin_wei;
				if (jin_zhi_biao[jin_zhi_pos] == '0')
				{
					jin_wei = ben_wei / 10;
					ben_wei = ben_wei % 10;
				}
				else
				{
					jin_wei = ben_wei / int(jin_zhi_biao[jin_zhi_pos] - '0');
					ben_wei = ben_wei % int(jin_zhi_biao[jin_zhi_pos] - '0');
				}
				res.push_front(char(ben_wei + '0'));
				jin_zhi_pos--;
				if (jin_wei == 0)
					break;
			}
			if(jin_wei) // 可能还存在非零
				res.push_front(char(jin_wei + '0'));
		}
	}

	//display
	auto it_l = res.begin();
	for (; it_l != res.end(); it_l++)
		if (*it_l != '0')
			break;

	if (it_l == res.end())
	{
		printf("0");
		return 0;
	}

	for (; it_l != res.end(); it_l++)
		printf("%c", *it_l);
	return 0;
}*/
