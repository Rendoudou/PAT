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
//struct people
//{
//	string name;
//	int year;
//	int month;
//	int day;
//	long real;
//};
//
//vector<people> buffer;
//
//bool sort_greater(const people & a, const people & b)
//{
//	return (a.real < b.real);
//}
//
//int main()
//{
//	long n = 0;
//	cin >> n;
//	people people_temp;
//	//2014 9 6
//	while (n--)
//	{
//		cin >> people_temp.name;
//		scanf("%d/%d/%d", &people_temp.year, &people_temp.month, &people_temp.day);
//
//		if (people_temp.year > 2014)
//			continue;
//		else if (people_temp.year == 2014 && people_temp.month > 9)
//			continue;
//		else if (people_temp.year == 2014 && people_temp.month == 9 && people_temp.day > 6)
//			continue;
//
//		if (people_temp.year < 1814)
//			continue;
//		else if (people_temp.year == 1814 && people_temp.month < 9)
//			continue;
//		else if (people_temp.year == 1814 && people_temp.month == 9 && people_temp.day < 6)
//			continue;
//
//		people_temp.real = people_temp.year * 365 + people_temp.month * 30 + people_temp.day;
//
//		buffer.push_back(people_temp);
//	}
//
//	if (buffer.size() == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//
//	sort(buffer.begin(), buffer.end(), sort_greater);
//
//	cout<< buffer.size() << " " << buffer.front().name << " " << buffer.back().name;
//
//	return 0;
//
//}