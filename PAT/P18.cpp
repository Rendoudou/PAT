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
//void check(long&, long&, long&);
//
//int main()
//{
//	long N = 0;
//	cin >> N;
//	char jia, yi;
//	long jia_win_yi_lose = 0, jia_lose_yi_win = 0, ping = 0;
//
//	long jia_B = 0, jia_C = 0, jia_J = 0;
//	long yi_B = 0, yi_C = 0, yi_J = 0;
//
//	for (long i = 0; i < N; i++) //B > C > J > B
//	{
//		cin >> jia >> yi;
//		if (jia == yi)
//			ping++;
//		else
//		{
//			if (jia == 'B' && yi == 'C') // B > C
//			{
//				jia_win_yi_lose++;
//				jia_B++;
//				continue;
//			}
//			if (jia == 'B' && yi == 'J')// J > B
//			{
//				jia_lose_yi_win++;
//				yi_J++;
//				continue;
//			}
//			if (jia == 'C' && yi == 'B')//B > C > J > B
//			{
//				jia_lose_yi_win++;
//				yi_B++;
//				continue;
//			}
//			if(jia == 'C' && yi == 'J')//B > C > J > B
//			{
//				jia_win_yi_lose++;
//				jia_C++;
//				continue;
//			}
//			if (jia == 'J' && yi == 'B')//B > C > J > B
//			{
//				jia_win_yi_lose++;
//				jia_J++;
//				continue;
//			}
//			if (jia == 'J' && yi == 'C')//B > C > J > B
//			{
//				jia_lose_yi_win++;
//				yi_C++;
//				continue;
//			}
//		}
//	}
//
//	cout << jia_win_yi_lose << ' ' << ping << ' ' << jia_lose_yi_win << endl;
//	cout << jia_lose_yi_win << ' ' << ping << ' ' << jia_win_yi_lose << endl;
//	check(jia_B, jia_C, jia_J);
//	cout << ' ';
//	check(yi_B, yi_C, yi_J);
//	return 0;
//}
//
//void check(long& b, long&c, long&j) 
//{
//	if (b >= c && b >= j)
//		cout << 'B';
//	else if (c > b && c >= j) 
//		cout << 'C';
//	else if (j > b&&j > c)
//		cout << 'J';
//	return;
//}