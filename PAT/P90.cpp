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

struct GoodsLimits
{
	vector<int> goods_limit;
};

int main()
{
	map<int, GoodsLimits> goods_cant_with_map;
	int n_int = 0, count_box_int = 0;
	cin >> n_int >> count_box_int;
	int goods_a_int = 0, goods_b_int = 0;
	for (size_t i = 0; i < n_int; i++)
	{
		scanf("%d%d", &goods_a_int, &goods_b_int);
		goods_cant_with_map[goods_a_int].goods_limit.push_back(goods_b_int);
		goods_cant_with_map[goods_b_int].goods_limit.push_back(goods_a_int);
	}

	unsigned int goods_count_unint = 0;
	map<int, GoodsLimits>::iterator it_m;
	vector<int>::iterator it_v;
	vector<int> goods_buf_vec;
	vector<int> goods_limit_vec;
	bool flag_limit_bool = false;
	vector<bool> if_limit_buf_vec;
	int goods_temp_int = 0;
	for (size_t i = 0; i < count_box_int; i++) //������װ��
	{
		//init
		flag_limit_bool = false;
		goods_buf_vec.clear();
		goods_limit_vec.clear();

		scanf("%d", &goods_count_unint);//��ǰ��װ���м���
		for (size_t j = 0; j < goods_count_unint; j++)//��ȡ����
		{
			scanf("%d", &goods_temp_int);
			goods_buf_vec.push_back(goods_temp_int);
		}

		for (size_t j = 0; j < goods_count_unint; j++) //��ÿһ�����һ�������洢
		{
			//it_m = find(goods_cant_with_map.begin(), goods_cant_with_map.end(), goods_buf_vec[j]);//�����ø÷�������
			it_m = goods_cant_with_map.find(goods_buf_vec[j]);
			if (it_m != goods_cant_with_map.end())//�������Ԥ���ֹ
			{
				goods_limit_vec.insert(goods_limit_vec.end(), 
					it_m->second.goods_limit.begin(), it_m->second.goods_limit.end());
			}
			else
				continue;
		}

		for (size_t j = 0; j < goods_limit_vec.size(); j++)//�ڼ�װ���п���û�в�����һ�������
		{
			it_v = find(goods_buf_vec.begin(), goods_buf_vec.end(), goods_limit_vec[j]);//��ֹ���Ƿ��ڼ�װ����
			if (it_v != goods_buf_vec.end()) //����
			{
				flag_limit_bool = true;
				break;
			}
		}

		if_limit_buf_vec.push_back(flag_limit_bool);
	}

	//display
	for (size_t i = 0; i < if_limit_buf_vec.size(); i++)
	{
		if (if_limit_buf_vec[i])
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}

	return 0;
}*/
