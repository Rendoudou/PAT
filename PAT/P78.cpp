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

struct CharCount
{
	int count;
	char a;
};

int main()
{
	char c, temp_c_reserve;
	string temp_s;
	scanf("%c", &c);
	getchar();

	if ('C' == c) //ѹ��
	{
		int count = 0;
		vector<CharCount> buf;
		CharCount temp_char_count;

		getline(cin, temp_s);
		temp_c_reserve = temp_s[0];
		for (int i = 0; i < temp_s.size(); i++)
		{
			if (temp_s[i] == temp_c_reserve)
				count++;
			else
			{
				temp_char_count.a = temp_c_reserve;
				temp_char_count.count = count;
				buf.push_back(temp_char_count);
				temp_c_reserve = temp_s[i];
				count = 1;
			}
			if (i == temp_s.size() - 1)
			{
				temp_char_count.a = temp_c_reserve;
				temp_char_count.count = count;
				buf.push_back(temp_char_count);
				count = 0;
			}
		}

		for (int j = 0; j < buf.size(); j++)
		{
			if (1 == buf[j].count)
				printf("%c", buf[j].a);
			else
				printf("%d%c", buf[j].count, buf[j].a);
		}
	}
	else if ('D' == c) //��ѹ
	{
		getline(cin, temp_s);
		string number;
		int num_start = 0, num_end = 0, count = 0;
		bool flag = true;
		for (int i = 0; i < temp_s.size(); i++)
		{
			if (flag) //�������ּ��ַ����� ���ߵ��ַ�����
			{
				if (temp_s[i] >= '0' && temp_s[i] <= '9') // �����ּ��ַ�����
				{
					num_start = num_end = i;
					flag = false;
				}
				else //�ǵ��ַ����͵�
					printf("%c", temp_s[i]);//��������һ��һ���

			}
			else //�����ּ��ַ����͵�
			{
				if (temp_s[i] >= '0' && temp_s[i] <= '9')//����β
					num_end = i;
				else//���ֽ��� �ص���һ��״̬
				{
					flag = true;
					number = temp_s.substr(num_start, num_end - num_start + 1);
					count = stoi(number);
					while (count--)
						printf("%c", temp_s[i]);
				}
			}
		}
	}

	return 0;
}*/
