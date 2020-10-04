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

//better than P74

int main()
{
	string jin_zhi_biao;
	string a, b;
	cin >> jin_zhi_biao;
	cin >> a >> b;

	//长度补齐
	for (unsigned int i = b.length(); i < 20; i++)
		b = '0' + b;
	for (unsigned int i = a.length(); i < 20; i++)
		a = '0' + a;

	//相加
	int ben_wei = 0, jin_wei = 0;
	int jin_zhi_pos = jin_zhi_biao.length() - 1;
	list<char> res;
	for (int i = 19; i >= 0; i--)
	{
		if (jin_zhi_pos < 0) break;
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
	if(jin_wei)
		res.push_front(char(jin_wei + '0'));

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
