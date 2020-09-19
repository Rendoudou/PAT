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
//bool sort_greater(const unsigned int & a, const unsigned int & b)
//{
//	return (a > b);
//}
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	vector<unsigned int> buffer(n);
//	for (int i = 0; i < n; i++)
//		cin >> buffer[i];
//	vector<unsigned int> a1;
//	vector<unsigned int> a2;
//	int a3 = 0;
//	vector<unsigned int> a4;
//	vector<unsigned int> a5;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (buffer[i] % 2 == 0 && buffer[i] % 5 == 0)
//			a1.push_back(buffer[i]);
//		if (buffer[i] % 5 == 1)
//			a2.push_back(buffer[i]);
//		if (buffer[i] % 5 == 2)
//			a3 += 1;
//		if (buffer[i] % 5 == 3)
//			a4.push_back(buffer[i]);
//		if (buffer[i] % 5 == 4)
//			a5.push_back(buffer[i]);
//	}
//
//	long A1 = 0;
//	long A2 = 0;
//	int A3 = 0;
//	double A4 = 0.0;
//	int A5 = 0;
//
//	//A1
//	if (!a1.empty())
//	{
//		vector<unsigned int>::iterator it_v;
//		for (it_v = a1.begin(); it_v != a1.end(); it_v++)
//			A1 += *it_v;
//		cout << A1;
//	}
//	else
//		cout << 'N';
//
//	//A2
//	if (!a2.empty())
//	{
//		int f = 1;
//		for (unsigned int i = 0; i < a2.size(); i++)
//		{
//			A2 += a2[i] * f;
//			f = -f;
//		}
//		cout << ' ' << A2;
//	}
//	else
//		cout << ' ' << 'N';
//
//	//A3
//	if (a3)
//	{
//		A3 = a3;
//		cout << ' ' << A3;
//	}
//	else
//		cout << ' ' << 'N';
//
//	//A4
//	if (!a4.empty())
//	{
//		for (unsigned int i = 0; i < a4.size(); i++)
//			A4 += a4[i];
//		A4 = A4 / a4.size();
//		cout << ' ' << std::setiosflags(ios::fixed) << setprecision(1) << A4;
//	}
//	else
//		cout << ' ' << 'N';
//
//	//A5
//	if (!a5.empty())
//	{
//		sort(a5.begin(), a5.end(), sort_greater);
//		A5 = a5[0];
//		cout << ' ' << A5;
//	}
//	else
//		cout << ' ' << 'N';
//
//	return 0;
//}