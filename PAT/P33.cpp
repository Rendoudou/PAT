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
	while (buffer[i] != '\0') // ȫΪ��д
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

	//�����ԭ����
	i = 0;
	cin.getline(buffer_2, 100000);
	while (buffer_2[i] != '\0')
	{
		if (buffer_2[i] >= 'a' && buffer_2[i] <= 'z')//Сд
		{
			if (broken_key_buffer.find(char(buffer_2[i] - 32)) == string::npos)//ת��д �������в�����
				printf("%c", buffer_2[i]);
			i++;
			continue;
		}

		if (buffer_2[i] >= 'A' && buffer_2[i] <= 'Z')//��д
		{
			if (broken_key_buffer.find(buffer_2[i]) == string::npos)
				if (big_flag)
					printf("%c", buffer_2[i]);
			i++;
			continue;
		}

		if (broken_key_buffer.find(buffer_2[i]) == string::npos)//��������
			printf("%c", buffer_2[i]);
		
		i++;
	}

	return 0;
}*/