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
//	string A, B;
//	char a = '0', b = '0';
//	long PA = 0, PB = 0;
//	int count_a = 0, count_b = 0;
//	cin >> A >> a >> B >> b;
//
//	for (unsigned int i = 0; i < A.size(); i++)
//	{
//		if (A[i] == a)
//		{
//			count_a++;
//		}
//	}
//
//	for (unsigned int i = 0; i < B.size(); i++)
//	{
//		if (B[i] == b)
//		{
//			count_b++;
//		}
//	}
//
//	for ( int i = 0; i < count_a; i++)
//		PA += (a - '0') * int(pow(10, i));
//	for ( int i = 0; i < count_b; i++)
//		PB += (b - '0') * int(pow(10, i));
//
//	cout << PA + PB;
//	 
//	return 0;
//}