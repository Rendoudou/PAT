//#include <iostream>
//#include <string>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <math.h>
//
//using namespace std;
//
//int main()
//{
//	unsigned int n = 0;//ÊýÄ¿
//	unsigned int m = 0;//ÒÆÎ»
//	unsigned int real_m = 0;
//	int temp = 0;
//	bool flag = true;
//
//	cin >> n >> m;
//	vector<int> buffer;
//	for (unsigned int i = 0; i < n; i++) 
//	{
//		cin >> temp;
//		buffer.push_back(temp);
//	}
//	real_m = m % n;
//	if (real_m != 0)
//	{
//		for (unsigned int i = n - real_m; i < n; i++)
//		{
//			if (flag)
//			{
//				flag = false;
//				cout << buffer[i];
//			}
//			else
//				cout << ' ' << buffer[i];
//		}
//		for (unsigned int j = 0; j < n - real_m; j++)
//			cout << ' ' << buffer[j];
//	}
//	else
//		for (unsigned int i = 0; i < n; i++)
//		{
//			if (flag)
//			{
//				flag = false;
//				cout << buffer[i];
//			}
//			else
//				cout << ' ' << buffer[i];
//		}
//	return 0;
//}