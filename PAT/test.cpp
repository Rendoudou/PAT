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

	for (int i = 0; i < length; i++)//���ȴ���1
	{
		if (flag_tou && buffer_in[i] == '1') //还没出现头 此时出现了‘1’头
		{
			tou = wei = i;
			flag_tou = false;
		}
<<<<<<< HEAD
		if (flag_tou == false)  //��ʼ��β��
=======
		if (flag_tou == false)  //开始找尾部
>>>>>>> 0c690052b68ea1fd250a527c48c19c8f56db0739
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
<<<<<<< HEAD
		if (out_flag || (i == length - 1 && flag_tou == false )) //�ҵ�ͷβ���� ��û�ﵽ���ܷ�Χ�͵�β�ˡ�
=======
		if (out_flag || (i == length - 1 && flag_tou == false))
>>>>>>> 0c690052b68ea1fd250a527c48c19c8f56db0739
		{
			first_check.push_back(buffer_in.substr(tou, wei - tou + 1));
			out_flag = false;
			flag_tou = true;
			count_zero = 0;
		}
	}

<<<<<<< HEAD
	std::cout << "���" << endl;
	std::cout << "�������" << first_check.size() << endl;
=======
	cout << "result" << endl;
	cout << "result counts : " <<first_check.size() << endl;
>>>>>>> 0c690052b68ea1fd250a527c48c19c8f56db0739

	for (unsigned int i = 0; i < first_check.size(); i++)
	{
		std::cout << first_check[i] << endl;
	}

	return 0;
<<<<<<< HEAD
}*/
=======
}
>>>>>>> 0c690052b68ea1fd250a527c48c19c8f56db0739
