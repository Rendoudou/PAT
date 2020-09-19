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
//list<unsigned int>a;
//list<unsigned int>b;
//list<unsigned int>c;
//int main()
//{
//	string buffer_a, buffer_b;
//	int D;
//	cin >> buffer_a >> buffer_b >> D;
//
//	for (unsigned int i = 0; i < buffer_a.size(); i++)
//		a.push_back(unsigned int(buffer_a[i] - '0'));
//	for (unsigned int i = 0; i < buffer_b.size(); i++)
//		b.push_back(unsigned int(buffer_b[i] - '0'));
//
//	//补齐
//	if (a.size() < b.size())
//	{
//		for (int i = a.size(); i < b.size(); i++)
//		{
//			a.push_front(0);
//		}
//	}
//	else if(a.size() > b.size())
//		for (int i = b.size(); i < a.size(); i++)
//		{
//			b.push_front(0);
//		}
//	//新进制下的加法
//	unsigned int ben_wei = 0;
//	unsigned int jin_wei = 0;
//	if (a.size() == b.size())
//	{
//		for (int i = a.size() - 1; i >= 0; i--)
//		{
//			int temp_a = a.back();
//			int temp_b = b.back();
//			ben_wei = ((a.back() + b.back()) + jin_wei) % D;
//			jin_wei = ((a.back() + b.back()) + jin_wei) / D;
//			c.push_front(ben_wei);
//			if (i == 0 && jin_wei != 0)
//				c.push_front(jin_wei);
//			a.pop_back();
//			b.pop_back();
//		}
//		for (list<unsigned int>::iterator it_l = c.begin(); it_l != c.end(); it_l++)
//			cout << *it_l;
//	}
//	else
//	{
//		cout << "error" << endl;
//		return 0;
//	}
//	return 0;
//}