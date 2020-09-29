/*#pragma warning(disable : 4996)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <math.h>
#include <sstream>
#include <iomanip>
#include<map>
using namespace std;

//检查质数
bool check_su_shu(int a)
{
	for (int i = 2; i < sqrt(a); i++)
	{
		if (a % i == 0)
			return false;
	}
	return (a > 1);
}


bool checkprime(int i)
{
	if (i == 2)
		return 1;
	for (int j = 2; j <= sqrt(i); j++)
	{
		if (i%j == 0)
			return 0;
	}
	return 1;
}

//main
int main()
{

	map<int, string> buffer;
	int n = 0, k = 0, temp_id = 0;
	cin >> n;

	scanf("%d", &temp_id);//获取id
	buffer[temp_id] = "Mystery Award";

	for (int i = 2; i <= n; i++) // 第二名到最后一名
	{
		scanf("%d", &temp_id);
		if(check_su_shu(i)) // 是素数
			buffer[temp_id] = "Minion";
		else
			buffer[temp_id] = "Chocolate";
	}

	cin >> k;
	vector<int> wait_check_buffer;
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &temp_id);
		wait_check_buffer.push_back(temp_id);
	}

	for (int i = 0; i < k; i++)
	{
		printf("%04d: ", wait_check_buffer[i]);
		if (buffer[wait_check_buffer[i]].size() > 0)
		{
			cout << buffer[wait_check_buffer[i]] << endl;
			buffer[wait_check_buffer[i]] = "Checked";
		}
		else
			printf("Are you kidding?\n");
	}

	return 0;
}*/
