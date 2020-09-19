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
//int main()
//{
//	int n = 0;
//	int temp = 0;
//	int f = 1;
//	int count = 0;
//	bool flags[5] = { false };
//	
//	long A1 = 0;
//	long A2 = 0;
//	int A3 = 0;
//	double A4 = 0.0;
//	int A5 = 0;
//	
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		switch (temp % 5)
//		{
//		case 0:
//		{
//			if (temp % 2 == 0)
//			{
//				A1 += temp;
//				flags[0] = true;
//			}
//			break;
//		}
//		case 1:
//		{
//			flags[1] = true;
//			A2 += f * temp;
//			f = -f;
//			break;
//		}
//		case 2:
//		{
//			A3++;
//			flags[2] = true;
//			break;
//		}
//		case 3:
//		{
//			A4 += temp;
//			count++;
//			flags[3] = true;
//			break;
//		}
//		case 4:
//		{
//			flags[4] = true;
//			if (temp > A5)
//				A5 = temp;
//			break;
//		}
//		}
//	}
//
//	if (flags[0])
//		cout << A1;
//	else
//		cout << 'N';
//
//	if (flags[1])
//		cout << ' ' << A2;
//	else
//		cout << ' ' << 'N';
//
//	if (flags[2])
//		cout << ' ' << A3;
//	else
//		cout << ' ' << 'N';
//
//	if (flags[3])
//		cout << ' ' <<setiosflags(ios::fixed)<<setprecision(1) << A4 / count;
//	else
//		cout << ' ' << 'N';
//
//	if (flags[4])
//		cout << ' ' << A5;
//	else
//		cout << ' ' << 'N';
//
//	return 0;
//}