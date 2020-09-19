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
//string days[7] = {
//	"MON","TUE","WED","THU","FRI","SAT","SUN"
//};
//
//
//
//int main()
//{
//	string buffer[4];
//
//	for (int i = 0; i < 4; i++)
//		cin >> buffer[i];
//
//	//第一组
//	unsigned int length = 0;
//	char a = '\0', b = '\0';
//	bool flag = false;
//	length = buffer[0].length() < buffer[1].length() ? buffer[0].length() : buffer[1].length();
//
//	for (unsigned int i = 0; i < length; i++)
//	{
//		if (buffer[0][i] == buffer[1][i] )
//		{
//			if (flag == false && buffer[0][i] >= 'A' && buffer[0][i] <= 'G')
//			{
//				a = buffer[0][i];
//				flag = true;
//				continue;
//			}
//			if(flag && ((buffer[0][i] >= 'A' && buffer[0][i] <= 'N')|| (buffer[0][i] >= '0' && buffer[0][i] <= '9')))
//			{
//				b = buffer[0][i];
//				break;
//			}
//		}
//	}
//
//	int day = 0;
//	int hour = 0;
//	
//	day = a - 'A';
//	if (b >= 'A' && b <= 'N')
//		hour = b - 'A' + 10;
//	else
//		hour = b - '0';
//
//	//第二组
//	unsigned int length2 = 0;
//	int c = 0;
//	length2 = buffer[2].length() < buffer[3].length() ? buffer[2].length() : buffer[3].length();
//	for (unsigned int i = 0; i < length2; i++)
//	{
//		if (buffer[2][i] == buffer[3][i]  && ((buffer[3][i] >= 'A' && buffer[3][i] <= 'Z')|| (buffer[3][i] >= 'a' && buffer[3][i] <= 'z')))
//		{
//			c = i;
//			break;
//		}
//	}
//
//	//display
//	cout << days[day] << ' ';
//
//	if (hour < 10)
//		cout << '0' << hour << ':';
//	else
//		cout << hour << ':';
//
//	if (c < 10)
//		cout << '0' << c;
//	else
//		cout << c;
//
//	return 0;
//}