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
//vector<unsigned int> buffer;
//
//void get_all_sushu(vector<unsigned int>&);
//
//int main()
//{
//	int n = 0, m = 0;
//	int count = 0;
//	get_all_sushu(buffer);
//	cin >> n >> m;
//	
//	for (int i = n - 1; i < m; i++)
//	{
//		count++;
//		if (1 == count)
//			cout << buffer[i];
//		else
//			cout << ' ' << buffer[i];
//		if (10 == count) 
//		{
//			cout << endl;
//			count = 0;
//		}
//	}
//	return 0;
//}
//
//void get_all_sushu(vector<unsigned int>& buffer)
//{
//	bool flag = true;
//	for (unsigned int i = 2;true ; i++)
//	{
//		flag = true;
//		for (unsigned int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = false;
//				break;
//			}
//		}
//
//		if (flag)
//			buffer.push_back(i);
//
//		if(buffer.size() >= 10000) break;
//	}
//
//	return;
//}
