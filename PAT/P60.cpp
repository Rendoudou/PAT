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

bool sort_greater(const int & a, const int & b)
{
	return  a < b;
}

int main()
{
	int n = 0, temp = 0;
	vector<int> buffer;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		buffer.push_back(temp);
	}

	sort(buffer.begin(), buffer.end(), sort_greater);

	for (int i = 0; i < n; i++ )
	{
		if (buffer[i] > n - i)//����buffer[i]����
		{
			cout << (n - 1) - i + 1;
			return 0;
		}
		
	}
	cout << 0;

	return 0;
}
*/
/*
int max_temp = 0;
int max = 0;
int j = 0;
// ��e�� ���� e
for (int i = buffer[0]; i <= buffer.back(); i++)//���п���Eȡֵ
{
	for (; j < n; )
	{
		if (buffer[j] > i)
		{
			if (n - j >= i) //��n - j ����� i �� n -j ���� i;
			{
				max_temp = i;
			}
			break;
		}
		j++;
	}
	if (max < max_temp)
		max = max_temp;
}
cout << max;
*/