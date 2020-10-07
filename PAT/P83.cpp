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
	int cha_zhi_count[10000] = { 0 }; // 0 - 9999;
	int n = 0, temp = 0;
	cin >> n;
	vector<int> buf;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		buf.push_back(temp);
	}

	for (int i = 0; i < n; i++)
	{
		temp = abs(int(buf[i] - (i + 1)));
		cha_zhi_count[temp]++;
	}

	for (int i = 9999; i >= 0; i--)
		if (cha_zhi_count[i] > 1)
			printf("%d %d\n", i, cha_zhi_count[i]);

	return 0;
}*/
