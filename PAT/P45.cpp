//#pragma warning(disable : 4996)
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
//	vector<long> buffer;
//	vector<long> buffer_out;
//	cin >> n;
//	long temp = 0;
//	bool flag = true;
//	while (n--)
//	{
//		scanf("%ld", &temp);
//		buffer.push_back(temp);
//	}
//
//	for (int i = 0; i < buffer.size(); i++)
//	{
//		temp = buffer[i];
//		flag = true;
//		for (int j = i - 1; j >= 0; j--)
//		{
//			if (buffer[j] > temp)
//			{
//				flag = false;
//				break;
//			}
//		}
//		if(flag)	//超时
//			for (int k = i + 1; k < buffer.size(); k++) //后面的
//				if (buffer[k] < temp)
//				{
//					flag = false;
//					break;
//				}
//		if (flag)
//			buffer_out.push_back(temp);
//	}
//
//	cout << buffer_out.size() << endl;
//	if (buffer_out.size() == 0) cout << endl;
//
//	bool flag_out = true;
//	for (int i = 0; i < buffer_out.size(); i++)
//	{
//		if (flag_out) {
//			cout << buffer_out[i];
//			flag_out = false;
//		}
//		else {
//			cout << " " << buffer_out[i];
//		}
//	}
//
//	return 0;
//}