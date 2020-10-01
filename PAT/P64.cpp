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

int get_sum_num(const string & a)
{
	int res = 0;
	for (int i = 0; i < a.length(); i++)
		res += (a[i] - '0');
	return res;
}

int main()
{
	bool friend_id[37] = { false }; // 0 µ½ 36
	int n = 0;
	string temp;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		friend_id[get_sum_num(temp)] = true;
	}
	
	int count = 0;
	for (int i = 0; i < 37; i++)
		if (friend_id[i] == true)
			count++;
	cout << count << endl;

	bool flag = true;
	for (int i = 0; i < 37; i++)
		if (friend_id[i] == true)
		{
			if (flag)
			{
				printf("%d", i);
				flag = false;
			}
			else
				printf(" %d", i);
		}
	return 0;
}*/
