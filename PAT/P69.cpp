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

struct IfWinner
{
	bool flag = false;
};

int main()
{
	int N = 0, S = 0, first_winner_id = 0; // 转发总量，中将间隔，第一个中间者编号。
	cin >> N >> S >> first_winner_id;
	map<string, IfWinner> player;
	bool first_winner_flag = true;
	string temp_id;
	int winner_winner_count = 0;
	vector<string> winner_buffer;
	for (int i = 0; i < N; i++)
	{
		cin >> temp_id;
		if (first_winner_flag)
		{
			winner_winner_count++;
			if (winner_winner_count == first_winner_id)
			{
				player[temp_id].flag = true;
				first_winner_flag = false;
				winner_winner_count = 0;
				winner_buffer.push_back(temp_id);
			}
		}
		else
		{
			if (player[temp_id].flag == false)//是没有获奖的人
			{
				winner_winner_count++;
				if (winner_winner_count == S)
				{
					player[temp_id].flag = true; // 获奖
					winner_winner_count = 0;
					winner_buffer.push_back(temp_id);
				}
			}
		}
	}
	if (winner_buffer.size() == 0)
		cout << "Keep going..." << endl;
	else
		for (auto it_v = winner_buffer.begin(); it_v != winner_buffer.end(); it_v++)
			cout << *it_v << endl;

	return 0;
}*/