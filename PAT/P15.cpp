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
//struct student
//{
//	long id;
//	int de;
//	int cai;
//	char level;
//};
//
//vector<student> buffer_in;
//
//bool sum_greatter(const student& a, const student& b)
//{
//	if (a.level != b.level)
//		return (a.level < b.level);
//	else
//	{
//		if ((a.de + a.cai) != (b.de + b.cai))
//			return ((a.de + a.cai) > (b.de + b.cai));
//		else
//		{
//			if (a.de != b.de)
//				return (a.de > b.de);
//			else
//				return (a.id < b.id);
//		}
//	}
//}
//
//int main()
//{
//	long m = 0; int low_limit = 0, high_limit = 0;
//	cin >> m >> low_limit >> high_limit;
//
//	//data_in
//	student temp_stu;
//	for (long i = 0; i < m; i++)
//	{
//		cin >> temp_stu.id;
//		cin >> temp_stu.de;
//		cin >> temp_stu.cai;
//		if (temp_stu.de >= low_limit && temp_stu.cai >= low_limit)
//		{
//			if (temp_stu.de >= high_limit && temp_stu.cai >= high_limit) //才德全尽 总分从高到低
//				temp_stu.level = 1;
//			else if(temp_stu.de >= high_limit) //德胜才 总分从高到低
//				temp_stu.level = 2;
//			else if (temp_stu.de >= temp_stu.cai) //“才德兼亡”但尚有“德胜才”者
//				temp_stu.level = 3;
//			else
//				temp_stu.level = 4;
//			buffer_in.push_back(temp_stu);
//		}
//	}
//
//	sort(buffer_in.begin(), buffer_in.end(), sum_greatter);
//
//	cout << buffer_in.size() << endl;
//	for (unsigned int j = 0; j < buffer_in.size(); j++)
//	{
//		cout << buffer_in[j].id;
//		cout << ' ' << buffer_in[j].de;
//		cout << ' ' << buffer_in[j].cai << endl;
//	}
//
//	return 0;
//}