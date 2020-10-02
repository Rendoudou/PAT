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
		if (password_try == "#") // 输入结束
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
1、cin.getline()属于istream流，而getline()属于string流，是不一样的两个函数
2、当同时使用cin>>,getline()时，需要注意的是，在cin>>输入流完成之后，getline()之前，需要通过
		str="\n"; getline(cin,str);
	的方式将回车符作为输入流cin以清除缓存，如果不这样做的话，在控制台上就不会出现getline()的输入提示，
	而直接跳过，因为程序默认地将之前的变量作为输入流。
*/