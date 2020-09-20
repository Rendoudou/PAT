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
//
//
//int main()
//{
//	string out;
//	string buffer_1, buffer_2;
//	cin >> buffer_1 >> buffer_2;
//	for (int i = 0; i < buffer_1.size(); i++)
//		if (buffer_1[i] >= 'A' && buffer_1[i] <= 'Z')
//			buffer_1[i] = char(buffer_1[i] + 32);
//
//	for (int i = 0; i < buffer_2.size(); i++)
//		if (buffer_2[i] >= 'A' && buffer_2[i] <= 'Z')
//			buffer_2[i] = char(buffer_2[i] + 32);
//
//	for (int i = 0; i < buffer_1.size(); i++)
//	{
//		if(buffer_1[i] == ' ') continue;
//		if (buffer_2.find(buffer_1[i]) == string::npos)
//		{
//			if ((out.find(buffer_1[i]) == string::npos) || out.empty())
//				out.push_back(buffer_1[i]);
//		}
//	}
//
//	for (int i = 0; i < out.size(); i++)
//	{
//		if (out[i] >= 'a' && out[i] <= 'z')
//		{
//			out[i] = char(out[i] - 32);
//			printf("%c", out[i]);
//		}
//		else
//			printf("%c", out[i]);
//	}
//
//
//	return 0;
//}