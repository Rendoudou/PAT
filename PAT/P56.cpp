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

int main()
{

	int n = 0;
	vector<int> buffer;
	int temp = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		buffer.push_back(temp);
	}
	
	int sum = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			sum += buffer[i] * 11 + buffer[j] * 11;
		}
	}

	cout << sum;

	return 0;
}*/