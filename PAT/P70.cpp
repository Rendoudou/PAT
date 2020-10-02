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

bool sort_greater(const int & a, const int & b)
{
	return a < b;
}

int main() {
	int n;
	cin >> n;
	int temp = 0;
	vector<int> buffer;

	for (int i = 0; i < n; i++) 
	{
		cin >> temp;
		buffer.push_back(temp);
	}
	sort(buffer.begin(), buffer.end(), sort_greater);
	double ans = buffer[0];
	for (int i = 0; i < n; i++) {
		ans = (ans + buffer[i]) / 2;
	}
	cout << floor(ans);
	return 0;
}*/
