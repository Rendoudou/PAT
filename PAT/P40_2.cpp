/*#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	string buffer;
	cin >> buffer;
	long long count = 0;
	int cp = 0, ct = 0;
	for (unsigned int i = 0; i < buffer.size(); i++)
		if (buffer[i] == 'P')
			cp++;
	for (int i = buffer.size() - 1; i > 0; i--)
	{
		if (buffer[i] == 'P') cp--;
		if (buffer[i] == 'T') ct++;
		if (buffer[i] == 'A') count = (count + cp * ct % 1000000007) % 1000000007;
	}
	cout << count;

	return 0;
}*/