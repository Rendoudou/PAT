//#include <iostream>
//#include <string>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <math.h>
//#include <sstream>
//using namespace std;
//const unsigned int MAX = 100;
//char buffer[81] = {};
//string buffer_depart[MAX];
//int main()
//{
//	unsigned int count = 0;
//	cin.getline(buffer, 81);
//	string buffer_str = string(buffer);
//	unsigned int pos_now = 0;
//	unsigned int pos_before = 0;
//
//	for (unsigned int i = 0; i < buffer_str.size(); i++)
//		if (buffer_str[i] == ' ')
//			count += 1;
//	
//	if (count == 0)
//	{
//		cout << buffer_str;
//		return 0;
//	}
//
//	bool flag = true;
//	istringstream is(buffer_str);
//	for (unsigned int i = 0; i <= count; i++)
//		is >> buffer_depart[i];
//
//	for (int i = count; i >= 0; i--)
//	{
//		if (flag)
//		{
//			cout << buffer_depart[i];
//			flag = false;
//		}
//		else
//			cout << ' ' << buffer_depart[i];
//	}
//
//	return 0;
//}