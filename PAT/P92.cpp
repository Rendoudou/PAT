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

typedef pair<int, long> MooncakesSaleInfo;

bool cmp(const long& a, const long& b) {
	return a > b;
}

bool cmp_pair(const MooncakesSaleInfo& a, const MooncakesSaleInfo& b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second > b.second;
}

int main()
{
	vector < vector<long> > citys_buf_vec;
	vector<long> city_mooncakes_vec;
	map<int, long long> mooncakes_sale_sum_map;
	long n = 0, m = 0, mooncake_int_temp = 0;//n种月饼 m个城市
	cin >> n >> m;
	for (size_t i = 0; i < m; i++){ // m个城市
		for (size_t j = 0; j < n; j++){ //n种月饼
			scanf("%ld", &mooncake_int_temp);
			city_mooncakes_vec.push_back(mooncake_int_temp);
		}
		citys_buf_vec.push_back(city_mooncakes_vec);
		sort(city_mooncakes_vec.begin(), city_mooncakes_vec.end(), cmp); // 找最大值
		city_mooncakes_vec.clear();
	}

	long long sale_sum_temp = 0;
	for (size_t i = 0; i < n; i++) { // n种月饼
		sale_sum_temp = 0;
		for (size_t j = 0; j < m; j++) { //m个城市
			sale_sum_temp += citys_buf_vec[j][i];
		}
		mooncakes_sale_sum_map[i] = sale_sum_temp;
	}

	vector<MooncakesSaleInfo> mooncakes_sale_sum_vec(mooncakes_sale_sum_map.begin(), 
		mooncakes_sale_sum_map.end()); // 转换为vec

	//vector<MooncakesSaleInfo> mooncakes_sale_sum_vec = vector<MooncakesSaleInfo>(mooncakes_sale_sum_map.begin(), mooncakes_sale_sum_map.end());
	sort(mooncakes_sale_sum_vec.begin(), mooncakes_sale_sum_vec.end(), cmp_pair);//排序销量

	long long max_sum = mooncakes_sale_sum_vec[0].second;
	cout << max_sum << endl;
	cout << mooncakes_sale_sum_vec[0].first + 1;
	for (size_t i = 1; i < n; i++){ // 输出序号
		if (mooncakes_sale_sum_vec[i].second == max_sum)
			cout << " " << mooncakes_sale_sum_vec[i].first + 1;
		else
			break;
	}

	return 0;
}*/
