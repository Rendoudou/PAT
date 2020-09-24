/*#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

string low[13] = {
	"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"
};

string high[13] = {
	"tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"
};

void show_huo_xing_wen(int num)
{
	int high_pos = 0;
	int low_pos = 0;
	if (num == 0) // 当为零时
	{
		cout << low[0];
		return;
	}
	high_pos = num / 13;
	low_pos = num % 13;
	if (high_pos)
	{
		cout << high[high_pos];
		if (low_pos)
			cout << " ";
	}
	if (low_pos)
	{
		cout << low[low_pos];
	}
	return;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	vector<string> buffer;
	string temp;
	cin.get();
	for(int i = 0; i < n; i++)
	{
		getline(cin, temp);
		buffer.push_back(temp);
	}

	int size = 0;
	int sum = 0;
	int high_pos = 0, low_pos = 0;
	for (unsigned int i = 0; i < buffer.size(); i++)
	{
		sum = 0;
		if (buffer[i][0] >= '0'  && buffer[i][0] <= '9')
		{
			size = buffer[i].size();
			sum = 0;
			for (unsigned int j = 0; j < size; j++)
			{
				sum += (buffer[i][j] - '0') * int(pow(10, (size - j - 1)));
			}
			show_huo_xing_wen(sum);
		}
		else
		{
			//istringstream is = istringstream(buffer[i]);
			high_pos = 0, low_pos = 0;
			if (buffer[i].size() > 3) //两位数
			{
				string high_temp = buffer[i].substr(0, 3);
				string low_temp = buffer[i].substr(4, 3);

				for (unsigned int j = 0; j < 13; j++)
				{
					if (high_temp == high[j])
					{
						high_pos = j;
					}
					if (low_temp == low[j])
					{
						low_pos = j;
					}
				}
				sum += high_pos * 13 + low_pos;
				cout << sum;
			}
			else //一位数火星文
			{

				for (unsigned int j = 0; j < 13; j++)
				{
					if (buffer[i] == high[j])
					{
						high_pos = j;
						break;
					}
					else if (buffer[i] == low[j])
					{
						low_pos = j;
						break;
					}
				}
				cout << low_pos + high_pos * 13;
			}
		}

		//if( i != buffer.size() - 1)
			cout << endl;
	}

	return 0;
}*/