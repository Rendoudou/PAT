//#include <iostream>
//#include <string>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <math.h>
//#include <sstream>
//#include <iomanip>
//using namespace std;
//
//string buffer_greater;
//string buffer_smaller;
//
//bool greatter(const char & a, const char & b)
//{
//	return (a > b);
//}
//
//bool smaller(const char & a, const char & b)
//{
//	return (a < b);
//}
//
//int get_number(const string & a)
//{
//	return ((a[0] - '0') * 1000 + (a[1] - '0') * 100 + (a[2] - '0') * 10 + (a[3] - '0'));
//}
//
//int main()
//{
//	cin >> buffer_greater;
//	unsigned int size_in = buffer_greater.size();
//	if (size_in < 4)
//	{
//		for (unsigned int i = 4; i > size_in; i--)
//		{
//			buffer_greater.push_back('0');
//		}
//	}
//	buffer_smaller = buffer_greater;
//
//	int res = 0;
//	int big = 0, small = 0;
//	while (true)
//	{
//		sort(buffer_greater.begin(), buffer_greater.end(), greatter);
//		sort(buffer_smaller.begin(), buffer_smaller.end(), smaller);
//		big = get_number(buffer_greater);
//		small = get_number(buffer_smaller);
//		res = big - small;
//
//		cout << buffer_greater << " - " << buffer_smaller << " = ";
//		cout.width(4);
//		cout.fill('0');
//		cout << res << endl;
//
//		if (res == 0 || 6174 == res)
//			break;
//		buffer_greater.clear();
//		buffer_smaller.clear();
//		buffer_greater.push_back((char)((res / 1000) + '0'));
//		buffer_greater.push_back((char)((res % 1000 / 100) + '0'));
//		buffer_greater.push_back((char)((res % 100 / 10) + '0'));
//		buffer_greater.push_back((char)((res % 10) + '0'));
//		buffer_smaller = buffer_greater;
//	}
//	
//	return 0;
//}