/*#pragma warning(disable : 4996)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

struct People
{
	string name;
	int height;
};

bool sort_greater(const People& a, const People& b) 
{
	if (a.height == b.height)
		return a.name > b.name; //字典排序
	return a.height < b.height;
}

int main()
{
	int n = 0, pai = 0;
	cin >> n >> pai;
	People temp_people;
	vector<People> buffer_people;
	vector< vector<People> > out_buffer_people;
	list< list<People> > out_list_people;
	for(int i = 0; i < n; i++)
	{
		cin >> temp_people.name >> temp_people.height;
		buffer_people.push_back(temp_people);
	}
	sort(buffer_people.begin(), buffer_people.end(), sort_greater);

	//分组
	int count_per_pai = n / pai;
	int pos = 0;
	vector<People> temp_buffer_people;
	for (int i = 0; i < pai; i++)
	{
		for (int j = 0; j < count_per_pai; j++)
		{
			temp_buffer_people.push_back(buffer_people[pos]);
			pos++;
		}
		out_buffer_people.push_back(temp_buffer_people);
		temp_buffer_people.clear();
	}
	//把余下的放在最后一组
	for (; pos < n; pos++)
		out_buffer_people[pai - 1].push_back(buffer_people[pos]);

	//调整
	int size = 0;
	bool front_flag = false;//刚开始是先从后插入第一个 然后开始先左后右
	list<People> temp_list_people;
	for (int i = 0; i < pai; i++)
	{
		size = out_buffer_people[i].size();
		front_flag = false;
		for (int j = 0; j < size; j++)
		{
			temp_people = out_buffer_people[i].back();
			out_buffer_people[i].pop_back();
			if (front_flag) 
			{
				temp_list_people.push_front(temp_people);
				front_flag = false;
			}
			else
			{
				temp_list_people.push_back(temp_people);
				front_flag = true;
			}
		}
		out_list_people.push_back(temp_list_people);
		temp_list_people.clear();
	}

	//输出
	bool kong_flag = true;
	for (int i = 0; i < pai; i++)
	{
		kong_flag = true;
		temp_list_people = out_list_people.back();
		out_list_people.pop_back();
		for (list<People>::iterator it_l = temp_list_people.begin(); it_l != temp_list_people.end(); it_l++)
		{
			if (kong_flag)
			{
				cout << it_l->name;
				kong_flag = false;
			}
			else
			{
				cout << ' ' << it_l->name;
			}
		}
		cout << endl;
	}

	return 0;
}*/