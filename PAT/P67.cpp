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
	string password;
	int try_limit = 0;
	cin >> password >> try_limit;

	string password_try;
	int i = 0;
	vector<string> password_try_buffer;
	getchar();
	for (i = 0; ; i++)
	{
		getline(cin, password_try);
		if (password_try == "#") // �������
		{
			break;
		}
		password_try_buffer.push_back(password_try);
	}

	for (i = 0; i < try_limit && i < password_try_buffer.size(); i++)
	{
		if (password_try_buffer[i] == password)
		{
			cout << "Welcome in" << endl;
			break;
		}
		else
		{
			cout << "Wrong password: " << password_try_buffer[i] << endl;
		}
	}
	
	if(i == try_limit)
		cout << "Account locked" << endl;
	return 0;
}*/

/*
//https://www.cnblogs.com/fengzhongzhuifeng/p/10712122.html
1��cin.getline()����istream������getline()����string�����ǲ�һ������������
2����ͬʱʹ��cin>>,getline()ʱ����Ҫע����ǣ���cin>>���������֮��getline()֮ǰ����Ҫͨ��
		str="\n"; getline(cin,str);
	�ķ�ʽ���س�����Ϊ������cin��������棬������������Ļ����ڿ���̨�ϾͲ������getline()��������ʾ��
	��ֱ����������Ϊ����Ĭ�ϵؽ�֮ǰ�ı�����Ϊ��������
*/