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

int main()
{
	string buffer_have;
	string buffer_need;
	int check_buffer[62] = { 0 };
	int dis = 0;
	cin >> buffer_have >> buffer_need;
	for (unsigned int i = 0; i < buffer_need.size(); i++)
	{
		if (buffer_need[i] >= '0' && buffer_need[i] <= '9')
		{
			check_buffer[int(buffer_need[i] - '0')]++;
			continue;
		}
		if (buffer_need[i] >= 'a' && buffer_need[i] <= 'z')
		{
			check_buffer[int(buffer_need[i] - 'a') + 10]++;
			continue;
		}
		if (buffer_need[i] >= 'A' && buffer_need[i] <= 'Z')
		{
			check_buffer[int(buffer_need[i] - 'A') + 36]++;
			continue;
		}
	}

	for (unsigned int i = 0; i < buffer_have.size(); i++)
	{
		if (buffer_have[i] >= '0' && buffer_have[i] <= '9')
		{
			if(check_buffer[int(buffer_have[i] - '0')] != 0) // 是需要的
				check_buffer[int(buffer_have[i] - '0')]--;
		}
		if (buffer_have[i] >= 'a' && buffer_have[i] <= 'z')
		{
			if (check_buffer[int(buffer_have[i] - 'a') + 10] != 0)
				check_buffer[int(buffer_have[i] - 'a') + 10]--;
		}
		if (buffer_have[i] >= 'A' && buffer_have[i] <= 'Z')
		{
			if (check_buffer[int(buffer_have[i] - 'A') + 36] != 0)
				check_buffer[int(buffer_have[i] - 'A') + 36]--;
		}
	}

	bool flag = true;
	for (int i = 0; i < 62; i++)
	{
		if (check_buffer[i] > 0)
		{
			flag = false;
			break;
		}
	}
	if (flag)
	{
		dis = buffer_have.size() - buffer_need.size();
		cout << "Yes " << dis;
	}
	else
	{
		for (int i = 0; i < 62; i++)
			dis += check_buffer[i];
		cout << "No " << dis;
	}
	return 0;
}*/