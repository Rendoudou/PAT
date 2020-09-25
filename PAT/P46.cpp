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
	int n = 0;
	int jia_win_count = 0, yi_win_count = 0;
	int jia_han = 0, jia_hua = 0, yi_han = 0, yi_hua = 0;
	int temp_sum = 0;
	cin >> n;
	while (n--)
	{
		cin >> jia_han >> jia_hua >> yi_han >> yi_hua;
		temp_sum = jia_han + yi_han;
		if (jia_hua == temp_sum && yi_hua != temp_sum)
			jia_win_count++;
		else if (jia_hua != temp_sum && yi_hua == temp_sum)
			yi_win_count++;

	}
	cout << yi_win_count << " " << jia_win_count;

	return 0;
}*/
