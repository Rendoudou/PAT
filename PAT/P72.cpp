/*#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
#include <map>
using namespace std;

struct Stu
{
	string name;
	int things_have_count = 0;
	vector<int> ban_goods;
};

int main()
{
	int stu_n = 0, ban_goods_count = 0;
	vector<int> ban_thins_buf;
	cin >> stu_n >> ban_goods_count;
	int temp = 0;
	for (int i = 0; i < ban_goods_count; i++)
	{
		scanf("%d", &temp);
		ban_thins_buf.push_back(temp);
	}

	Stu temp_stu;
	vector<Stu> stu_buf;
	vector<int>::iterator it_v;
	for (int i = 0; i < stu_n; i++)
	{
		cin >> temp_stu.name >> temp_stu.things_have_count;
		for (int j = 0; j < temp_stu.things_have_count; j++)
		{
			scanf("%d", &temp);
			it_v = find(ban_thins_buf.begin(), ban_thins_buf.end(), temp);
			if(it_v != ban_thins_buf.end())
				temp_stu.ban_goods.push_back(temp);
		}
		if (temp_stu.ban_goods.size() != 0)
			stu_buf.push_back(temp_stu);

		temp_stu.ban_goods.clear();
		temp_stu.name.clear();
		temp_stu.things_have_count = 0;
	}

	int all_goods_count = 0;
	for (int i = 0; i < stu_buf.size(); i++)
	{
		all_goods_count += stu_buf[i].ban_goods.size();
		cout << stu_buf[i].name << ":";
		for (int j = 0; j < stu_buf[i].ban_goods.size(); j++)
			printf(" %04d", stu_buf[i].ban_goods[j]);
		cout << endl;
	}
	cout << stu_buf.size() << " " << all_goods_count;
	return 0;
}*/
