//#include <iostream>
//#include <string>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <math.h>
//
//using namespace std;
//
////得到小于n的素数数列
//unsigned int get_data_below_n(const unsigned int& n);
//
//int main()
//{
//	unsigned int n = 0;
//	while (cin >> n)
//		cout << get_data_below_n(n) << endl;
//	return 0;
//}
//
////得到小于等于某一个数字的所有质数
//unsigned int get_data_below_n(const unsigned int& n)
//{
//	bool flag = true;
//	unsigned int before = 0;
//	unsigned int count = 0;
//	for (unsigned int i = 2; i <= n; i++)
//	{
//		flag = true; //init
//		for (unsigned int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0) //被中间的某一个数字除尽，则不是质数。
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag == true) 
//		{
//			if (before != 0)
//				if (i - before == 2)
//					count += 1;
//			before = i;
//		}
//
//	}
//	return count;
//}