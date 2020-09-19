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
//struct moon_cake
//{
//	float zong_liang;
//	float zong_jia;
//	float dan_jia;
//};
//
//bool sort_greater(const moon_cake& a, const moon_cake& b) 
//{
//	return (a.dan_jia > b.dan_jia);
//}
//
//int main()
//{
//	int zhong_lei = 0;
//	float need = 0;
//	cin >> zhong_lei >> need;
//	vector<moon_cake> buffer_moon_cake(zhong_lei);
//	//record
//	for (int i = 0; i < zhong_lei; i++)
//		cin >> buffer_moon_cake[i].zong_liang;
//	for (int i = 0; i < zhong_lei; i++)
//	{
//		cin >> buffer_moon_cake[i].zong_jia;
//		buffer_moon_cake[i].dan_jia = buffer_moon_cake[i].zong_jia / buffer_moon_cake[i].zong_liang;
//	}
//
//	sort(buffer_moon_cake.begin(), buffer_moon_cake.end(), sort_greater);
//
//	int pos = 0;
//	float money_out = 0;
//	while (true)
//	{
//		if (need <= 0) break;
//		if (need < buffer_moon_cake[pos].zong_liang)
//		{
//			money_out += need * buffer_moon_cake[pos].dan_jia;
//			need = 0;
//		}
//		else
//		{
//			money_out += buffer_moon_cake[pos].zong_liang * buffer_moon_cake[pos].dan_jia;
//			need -= buffer_moon_cake[pos].zong_liang;
//		}
//		pos++;
//		if (pos >= zhong_lei) break;
//	}
//
//	cout << setiosflags(ios::fixed) << setprecision(2) << money_out;
//	return 0;
//}