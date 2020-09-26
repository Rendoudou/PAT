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

vector<string> first_check;

int main()
{

	string buffer_in;
	getline(cin, buffer_in);
	int tou = 0, wei = 0, length = buffer_in.size();

	bool flag_tou = true, out_flag = false;
	int count_zero = 0;

	for (int i = 0; i < length; i++)//长度大于1
	{
		if (flag_tou && buffer_in[i] == '1') //还没出现头 此时出现了‘1’头
		{
			tou = wei = i;
			flag_tou = false;
		}
		if (flag_tou == false)  //开始找尾部
		{
			if (buffer_in[i] == '1')
			{
				wei = i;
			}
			if (buffer_in[i] == '0')
			{
				count_zero++;
				if (count_zero == 2)
				{
					out_flag = true;
				}
			}
		}
		if (out_flag || (i == length - 1 && flag_tou == false )) //找到头尾但是 还没达到忍受范围就到尾了。
		{
			first_check.push_back(buffer_in.substr(tou, wei - tou + 1));
			out_flag = false;
			flag_tou = true;
			count_zero = 0;
		}
	}

	std::cout << "结果" << endl;
	std::cout << "结果数量" << first_check.size() << endl;

	for (unsigned int i = 0; i < first_check.size(); i++)
	{
		std::cout << first_check[i] << endl;
	}

	return 0;
}*/