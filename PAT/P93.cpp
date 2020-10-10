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
	string str_a, str_b;
	getline(cin, str_a);
	getline(cin, str_b);
	// 32 - 126;
	bool flag_buf[95] = { false };
	str_a += str_b;
	for (size_t i = 0; i < str_a.length(); i++){
		if (flag_buf[str_a[i] - char(32)] == false){
			printf("%c", str_a[i]);
			flag_buf[str_a[i] - char(32)] = true;
		}
	}

	return 0;
}*/
