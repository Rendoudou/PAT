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

//结构体存信息
struct words_struct
{
	int id;
	int words_count;
};

//函数对象
class sort_greater
{
public:
	bool operator()(const words_struct &a, const words_struct&b)
	{
		if (a.words_count == b.words_count)
			return a.id < b.id;
		else
			return a.words_count > b.words_count;
	}
};

int main()
{
	string buffer;
	vector<words_struct> buffer_count(26);
	getline(cin, buffer);

	for (int i = 0; i < buffer_count.size(); i++)
		buffer_count[i].id = i;

	for (unsigned int i = 0; i < buffer.size(); i++)
	{
		if (buffer[i] >= 'A' && buffer[i] <= 'Z')
			buffer[i] = char(buffer[i] + 32);

		if (buffer[i] >= 'a' && buffer[i] <= 'z')
			buffer_count[int(buffer[i] - 'a')].words_count++;
	}

	sort(buffer_count.begin(), buffer_count.end(), sort_greater());

	cout << char('a' + buffer_count[0].id) << ' ' << buffer_count[0].words_count;

	return 0;

}*/