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
//出错 而且办法很笨;
int main()
{
	//char buffer[100001];
	//scanf("%s", buffer);
	string buffer;
	cin >> buffer;
	long long count = 0;

	//process
	int fp = 0;
	while (fp++) //找第一个P
		if (buffer[fp] == 'P')
			break;

	int next_p_pos = 0;
	int next_a_pos = 0;
	bool flag_1 = true;
	bool flag_2 = true;
	for (unsigned int i = fp; i < buffer.size(); )
	{
		for (unsigned int j = i + 1; j < buffer.size(); )
		{
			if (flag_1 && buffer[j] == 'P')
			{
				next_p_pos = j; // i = next_p_pos
				flag_1 = false;
				continue;
			}
			if (buffer[j] == 'A')
			{
				for (unsigned int k = j + 1; k < buffer.size(); k++)
				{
					if (flag_2 && buffer[k] == 'A') // 找到下个A
					{
						next_a_pos = k;
						flag_2 = false;
					}
					if (buffer[k] == 'T')
						count++;
				}
			}
			if (flag_2 == false) // 没有下一个A但可能下个P还是用这个A
			{
				j = next_a_pos;
				flag_2 = true;
				continue;
			}
			j++;
		}
		if (flag_1 == false)
		{
			i = next_p_pos;
			flag_1 = true;
			continue; // 接下来查询
		}
		else //没有下一个P
			break;
		//i++;
	}

	printf("%lld", count % 1000000007);
	return 0;
}*/