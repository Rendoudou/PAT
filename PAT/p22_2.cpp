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
//	unsigned long a = 0, b = 0, D = 0;
//	unsigned long sum = 0;
//	cin >> a >> b >> D;
//	sum = a + b;
//
//	long max = 0;
//	long temp = sum;
//	long now = 0;
//	while (true)
//	{
//		if (pow(D, max) > sum)
//			break;
//		max++;
//	}
//
//	if (sum == 0) cout << 0;
//	for (int i = max - 1; i >= 0; i--)
//	{
//		now = temp / (int)(pow(D, i));
//		cout << now;
//		temp -= now * (int)(pow(D, i));
//	}
//	
//
//	return 0;
//}