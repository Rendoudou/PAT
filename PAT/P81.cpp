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
	vector<string> buf;
	string temp;
	unsigned int n = 0;
	cin >> n;

	//获取所有密码
	cin.get();
	for (size_t i = 0; i < n; i++)
	{
		getline(cin, temp);
		buf.push_back(temp);
	}

	//检测
	unsigned int length = 0;
	bool shu_zi_flag = false, zi_mu_flag = false, ileagle_flag = false;
	for (size_t i = 0; i < n; i++)
	{
		length = buf[i].length();
		if (length < 6)
			printf("Your password is tai duan le.\n");
		else
		{
			shu_zi_flag = false, zi_mu_flag = false, ileagle_flag = false;
			for (size_t j = 0; j < length; j++)
			{
				if ((buf[i][j] >= 'a' && buf[i][j] <= 'z') || (buf[i][j] >= 'A' && buf[i][j] <= 'Z'))
				{
					zi_mu_flag = true;
					continue;
				}
				else if (buf[i][j] >= '0' && buf[i][j] <= '9')
				{
					shu_zi_flag = true;
					continue;
				}
				else if(buf[i][j] == '.')
					continue;
				else
				{
					printf("Your password is tai luan le.\n");
					ileagle_flag = true;
					break;
				}
			}
			if (ileagle_flag == false)
			{
				if (zi_mu_flag && !shu_zi_flag)
					printf("Your password needs shu zi.\n");
				else if (!zi_mu_flag && shu_zi_flag)
					printf("Your password needs zi mu.\n");
				else if (zi_mu_flag && shu_zi_flag)
					printf("Your password is wan mei.\n");
			}
		}
	}

	return 0;
}*/
