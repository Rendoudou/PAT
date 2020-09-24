//#pragma warning(disable : 4996)
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
//bool sort_smaller(const long& a, const long& b) {
//	return a < b;
//}
//
//int main()
//{
//	int n = 0;
//	vector<long> buffer;
//	vector<long> buffer_sort;
//	vector<long> buffer_out;
//
//	cin >> n;
//	long temp = 0;
//	bool flag_bigger = true, flag_smaller = true;
//	bool flag_kong = true;
//
//	while (n--)
//	{
//		scanf("%ld", &temp);
//		buffer.push_back(temp);
//	}
//
//	buffer_sort = buffer;
//	sort(buffer_sort.begin(), buffer_sort.end(), sort_smaller);
//	long max = 0;
//
//	for (int i = 0; i < buffer_sort.size(); i++)
//	{
//		if (max < buffer[i]) max = buffer[i];
//		if (buffer_sort[i] == buffer[i] && max == buffer[i]) // 位置不变，且为当前最大
//			buffer_out.push_back(buffer[i]);
//	}
//
//	cout << buffer_out.size() << endl;
//
//	if (buffer_out.size() == 0) cout << endl;
//
//	bool flag_out = true;
//	for (int i = 0; i < buffer_out.size(); i++)
//	{
//		if (flag_out) {
//			cout << buffer_out[i];
//			flag_out = false;
//		}
//		else {
//			cout << " " << buffer_out[i];
//		}
//	}
//
//	return 0;
//}