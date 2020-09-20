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
//bool sort_greater(const long& a, const long& b)
//{
//	return(a < b);
//}
//
//int main()
//{
//	vector<long> buffer;
//	long N = 0, P = 0;
//	cin >> N >> P;
//	long temp =0;
//	while (N--)
//	{
//		cin >> temp;
//		buffer.push_back(temp);
//	}
//
//	sort(buffer.begin(), buffer.end(), sort_greater);
//	long max_length = 0, temp_max_length = 0;
//
//	for (int i = 0; i < buffer.size(); i++)
//	{
//		for (int j = i + temp_max_length; j < buffer.size(); j++) // j = i + temp_max_length 解决时间问题。
//		{
//			if (buffer[j] <= buffer[i] * P)
//			{
//				temp_max_length = j - i + 1;
//				continue;
//			}
//			else
//			{
//				break;
//			}
//		}
//		if (temp_max_length > max_length)
//			max_length = temp_max_length;
//	}
//
//	cout << max_length;
//
//	return 0;
//
//}