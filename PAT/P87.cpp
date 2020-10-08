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

struct Count
{
	int count = 0;
};

int main(int argc, char* argv[])
{
	map<int, Count> buf_map;
	int n = 0, temp = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		temp = i / 2 + i / 3 + i / 5;
		buf_map[temp].count++;
	}

	cout << buf_map.size();

	return 0;
}*/
