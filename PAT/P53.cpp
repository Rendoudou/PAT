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

enum house_status {
	NotFree = 0,
	MaybeFree,
	Free
};

struct house_elec{
	int day;
	vector<double> elecs;
	house_status status;
};

int main()
{
	vector< house_elec > buffer_house_elec;
	int n = 0; float e = 0;  int D = 0;
	cin >> n >> e >> D;
	house_elec temp_house;
	double temp_elec;
	int count = 0;
	int count_free = 0;
	int count_maybe_free = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> temp_house.day;
		for (int j = 0; j < temp_house.day; j++)
		{
			cin >> temp_elec;
			if (temp_elec < e)
				count++;
			temp_house.elecs.push_back(temp_elec);
		}
		if (count > (temp_house.day / 2))
		{
			if (temp_house.day > D) {
				temp_house.status = Free;
				count_free++;
			}
			else {
				temp_house.status = MaybeFree;
				count_maybe_free++;
			}
		}
		else
			temp_house.status = NotFree;

		buffer_house_elec.push_back(temp_house);
		temp_house.elecs.clear();
		temp_house.day = 0;
		count = 0;
	}
	double free = 0, may_free = 0;
	free = double(count_free) / n;
	may_free = double(count_maybe_free) / n;
	printf("%.1lf%% ", may_free * 100);
	printf("%.1lf%%", free * 100);
	return 0;
}*/