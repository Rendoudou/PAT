/*#pragma warning(disable : 4996)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <math.h>
#include <sstream>
#include <iomanip>
#include<map>
using namespace std;

bool sort_greatter(const int & a, const int & b)
{
	return a < b;
}

int main()
{
	map<int, string> people;
	map<int, int> his_her_couple;
	int temp_id = 0, temp_id_1 = 0, temp_id_2 = 0;

	int couple_n = 0, party_human_m = 0;
	cin >> couple_n;
	for (int i = 0; i < couple_n; i++)
	{
		scanf("%d", &temp_id_1);
		people[temp_id_1] = "get married.";
		scanf("%d", &temp_id_2);
		people[temp_id_2] = "get married.";

		his_her_couple[temp_id_1] = temp_id_2;//夫妻配对
		his_her_couple[temp_id_2] = temp_id_1;
	}

	//分类
	cin >> party_human_m;
	vector<int> dan_shen_id_buffer;
	vector<int> married_in_party;
	for (int i = 0; i < party_human_m; i++)
	{
		scanf("%d", &temp_id);
		if (people[temp_id].size() > 0) //get married
		{
			people[temp_id] = "in party.";
			married_in_party.push_back(temp_id);
			continue;
		}
		else
		{
			people[temp_id] = "dan shen gou.";
			dan_shen_id_buffer.push_back(temp_id);
		}
	}
	
	//已婚的独自来的
	for (int i = 0; i < married_in_party.size(); i++)
	{
		if (people[his_her_couple[married_in_party[i]]] == "in party.")//另一本是不是在派对上
			continue;
		else
			dan_shen_id_buffer.push_back(married_in_party[i]);
	}

	cout << dan_shen_id_buffer.size() << endl;
	sort(dan_shen_id_buffer.begin(), dan_shen_id_buffer.end(), sort_greatter);
	bool flag = true;
	for (int i = 0; i < dan_shen_id_buffer.size(); i++)
	{
		if (flag)
		{
			printf("%05d", dan_shen_id_buffer[i]);
			flag = false;
		}
		else
			printf(" %05d", dan_shen_id_buffer[i]);
	}

	return 0;
}*/