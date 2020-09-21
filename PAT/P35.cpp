/* #pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

vector<long long> buffer_in_1;
vector<long long> buffer_in_2;
vector<long long> buffer_process;
vector<long long> buffer;
bool flag_insert = false;
bool flag_merge = false;

bool sort_smaller(const long long &a, const long long &b)
{
	return (a < b);
}

void show_buffer(const vector<long long> & a)
{
	for(int i = 0; i < a.size(); i++)
	{
		if (i == a.size() - 1)
		{
			printf("%lld", a[i]);
			break;
		}
		printf("%lld ", a[i]);
	}
	return;	
}

int main()
{
	int n = 0;
	long long temp = 0;

	scanf("%d", &n);

	for(int i =0; i < n; i++) //原始
	{
		scanf("%lld", &temp);
		buffer_in_1.push_back(temp);
	}
	buffer_in_2 = buffer_in_1;

	for (int i = 0; i < n; i++) //中间过程
	{
		scanf("%lld", &temp);
		buffer_process.push_back(temp);
	}

	//插入法
	if (buffer_in_1 == buffer_process)
	{
		printf("Insertion Sort\n");
		int i = 0;
		while (true)
		{
			if (buffer_in_1[i] <= buffer_in_1[i + 1])
				i++;
			else
				break;
		}
		vector<long long>::iterator it_v = (distance(buffer_in_1.begin(), buffer_in_1.begin() + i + 2) > 
			distance(buffer_in_1.begin(), buffer_in_1.end())) ? buffer_in_1.end() : buffer_in_1.begin() + i + 2;
		sort(buffer_in_1.begin(), buffer_in_1.begin() + i + 2, sort_smaller);
		show_buffer(buffer_in_1);
		return 0;
	}

	for (int i = 0; i < buffer_in_1.size(); i++)
	{
		buffer.push_back(buffer_in_1[i]);//每次加入一个新数
		sort(buffer.begin(), buffer.end(), sort_smaller); //排序
		for (int j = 0; j < buffer.size(); j++) // 更新
			buffer_in_1[j] = buffer[j];
		if (flag_insert == true)
		{
			printf("Insertion Sort\n");
			show_buffer(buffer_in_1);
			break;
		}
		if (buffer_in_1 == buffer_process)
		{
			flag_insert = true;
			continue;
		}
	}

	if (flag_insert) return 0;

	//合并法 递归得到子任务
	int level = 1;
	while (pow(2, level) <= buffer_in_2.size())
	{
		int step = int(pow(2, level));
		for (int i = 0; i < buffer_in_2.size(); i += step)
		{
			if(  i + step >= buffer_in_2.size())
				sort(buffer_in_2.begin() + i, buffer_in_2.end(), sort_smaller);
			else
				sort(buffer_in_2.begin() + i, buffer_in_2.begin() + i + step, sort_smaller);
		}
		level++;
		if (buffer_in_2 == buffer_process)
		{
			flag_merge = true;
			continue;
		}
		if (flag_merge)
		{
			printf("Merge Sort\n");
			show_buffer(buffer_in_2);
			flag_merge = false;
			break;
		}
	}

	return 0;
}*/

/*
vector<long long> merge_sort(vector<long long> buffer_in)
{
	vector<long long> buffer_left;
	vector<long long> buffer_right;
	vector<long long> buffer_out;
	if (buffer_in.size() <= 1)
		return buffer_in;
	if (buffer_in.size() == 2)
	{
		if (buffer_in[0] > buffer_in[1])
		{
			long long temp = buffer_in[0];
			buffer_in[0] = buffer_in[1];
			buffer_in[1] = temp;
		}
		return buffer_in;
	}
	for (int i = 0; i < buffer_in.size() / 2; i++)
		buffer_left.push_back(buffer_in[i]);
	for (int i = buffer_in.size() / 2; i < buffer_in.size() / 2; i++)
		buffer_right.push_back(buffer_in[i]);
	merge_sort(buffer_left);
	merge_sort(buffer_right);
	//合并
	for (int i = 0; i < buffer_left.size(); i++)
		buffer_out.push_back(buffer_left[i]);
	for (int i = 0; i < buffer_right.size(); i++)
		buffer_out.push_back(buffer_right[i]);

	//排序
	sort(buffer_out.begin(), buffer_out.end(), sort_smaller);
	return buffer_out;
}

void merge_sort(vector<long long>::iterator it_v_begin, vector<long long>::iterator it_v_end)
{
	int dis = std::distance(it_v_begin, it_v_end);
	if (dis == 2) //两个元素
	{
		sort(it_v_begin, it_v_end, sort_smaller);
		if (buffer_in_2 == buffer_process && flag_merge == false)
			flag_merge = true;
		if (flag_merge == true)
		{
			flag_merge = false;
			show_buffer(buffer_in_2);
		}
		return;
	}
	if (dis == 1) //一个元素
	{
		if (buffer_in_2 == buffer_process && flag_merge == false)
			flag_merge = true;
		if (flag_merge == true)
		{
			flag_merge = false;
			show_buffer(buffer_in_2);
		}
		return;
	}
	merge_sort(it_v_begin, it_v_begin + (dis / 2));
	merge_sort(it_v_begin + (dis / 2), it_v_end);
	sort(it_v_begin, it_v_end, sort_smaller);
	if (buffer_in_2 == buffer_process && flag_merge == false)
		flag_merge = true;
	if (flag_merge == true)
	{
		flag_merge = false;
		show_buffer(buffer_in_2);
	}
	return;
} */