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
//};
//
//vector<student> buffer_in;
//vector<student> buffer_stu_level[4];
//vector<student> buffer_out;
//
//bool sum_greatter(const student& a, const student& b)
//{
//	if ((a.de + a.cai) != (b.de + b.cai))
//		return ((a.de + a.cai) > (b.de + b.cai));
//	else if (a.de != b.de)
//		return (a.de > b.de);
//	else
//		return (a.id < b.id);
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
//		buffer_in.push_back(temp_stu);
//	}
//
//	//筛选分四类
//	for (long i = 0; i < m; i++)
//	{
//		if (buffer_in[i].de >= low_limit && buffer_in[i].cai >= low_limit)
//		{
//			if (buffer_in[i].de >= high_limit && buffer_in[i].cai >= high_limit) //才德全尽 总分从高到低
//			{
//				buffer_stu_level[0].push_back(buffer_in[i]);
//				continue;
//			}
//			else if (buffer_in[i].de >= high_limit) //德胜才 总分从高到低
//			{
//				buffer_stu_level[1].push_back(buffer_in[i]);
//				continue;
//			}
//			else if (buffer_in[i].de >= buffer_in[i].cai) //“才德兼亡”但尚有“德胜才”者
//			{
//				buffer_stu_level[2].push_back(buffer_in[i]);
//				continue;
//			}
//			else
//			{
//				buffer_stu_level[3].push_back(buffer_in[i]);
//				continue;
//			}
//		}
//	}
//
//	//各自排序
//	for (int i = 0; i < 4; i++)
//		if (!buffer_stu_level[i].empty())
//			sort(buffer_stu_level[i].begin(), buffer_stu_level[i].end(), sum_greatter);
//
//	//累计输出
//	for (int i = 0; i < 4; i++)
//		for (unsigned int j = 0; j < buffer_stu_level[i].size(); j++)
//			buffer_out.push_back(buffer_stu_level[i][j]);
//
//	cout << buffer_out.size() << endl;
//	for (unsigned int j = 0; j < buffer_out.size(); j++)
//	{
//		cout << buffer_out[j].id;
//		cout << ' ' << buffer_out[j].de;
//		cout << ' ' << buffer_out[j].cai << endl;
//	}
//
//	return 0;
//}