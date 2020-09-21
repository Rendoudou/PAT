/* #include <iostream>
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
	char buffer[100001] = {'\0'};
	char buffer_2[100001] = { '\0' };
	string broken_key_buffer;
	string out_buffer;
	bool big_flag = true;
	//broken keys
	cin.getline(buffer, 100000);
	int i = 0;
	while (buffer[i] != '\0') // 全为大写
	{
		if (buffer[i] == '+')
		{
			big_flag = false;
			i++;
			if (i > 100000) break;
			continue;
		}
		broken_key_buffer.push_back(buffer[i]);
		i++;
		if (i > 100000) break;
	}

	//待输出原句子
	i = 0;
	cin.getline(buffer_2, 100000);
	while (buffer_2[i] != '\0')
	{
		if (buffer_2[i] >= 'a' && buffer_2[i] <= 'z')//小写
		{
			if (broken_key_buffer.find(char(buffer_2[i] - 32)) == string::npos)//转大写 坏按键中不包含
				printf("%c", buffer_2[i]);
			i++;
			continue;
		}

		if (buffer_2[i] >= 'A' && buffer_2[i] <= 'Z')//大写
		{
			if (broken_key_buffer.find(buffer_2[i]) == string::npos)
				if (big_flag)
					printf("%c", buffer_2[i]);
			i++;
			continue;
		}

		if (broken_key_buffer.find(buffer_2[i]) == string::npos)//其他输入
			printf("%c", buffer_2[i]);
		
		i++;
	}

	return 0;
}*/