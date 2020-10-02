/*#include <iostream>
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
	int id = 0;
	int temp = 0;
	cin >> n;

	vector<long> buffer(100000, 0);

	while (n--)
	{
		cin >> id;
		cin >> temp;
		buffer[id - 1] += temp;
	}

	vector<long>:: iterator biggest = std::max_element(buffer.begin(), buffer.end()); // 返回最大值处的迭代器，指针。

	int out_id = std::distance(buffer.begin(), biggest);

	cout << out_id + 1 << ' ' << *biggest;

	return 0;
} */