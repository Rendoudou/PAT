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
//	string A;
//	int B;
//	cin >> A >> B;
//
//	string Q;
//
//	int yu = 0;
//	int jieguo = 0;
//	int flag = true;
//	int now = 0;
//
//	for (unsigned int i = 0; i < A.size(); i++)
//	{
//		if (flag) //µÚÒ»Î»
//		{
//			flag = false;
//			if ((A[i] - '0') > B)
//			{
//				jieguo = (A[i] - '0') / B;
//				yu = (A[i] - '0') % B;
//				Q.push_back(char(jieguo + '0'));
//				continue;
//			}
//			else
//			{
//				yu = A[i] - '0';
//				if (A.size() == 1)
//					Q.push_back(char(jieguo + '0'));
//				continue;
//			}
//		}
//		else
//		{
//			now = (A[i] - '0') + yu * 10;
//			jieguo = now / B;
//			yu = now % B;
//			Q.push_back(char(jieguo + '0'));
//		}
//	}
//	cout << Q << ' ' << yu;
//	return 0;
//}