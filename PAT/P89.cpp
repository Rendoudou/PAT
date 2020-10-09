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

struct Player
{
	bool lang_ren_flag = false;
	int say = 0;
};

int main()
{
	int first_lang = 0, second_lang = 0;
	int player_count = 0;
	cin >> player_count;
	vector<Player> player_buf;
	Player temp;
	for (int i = 0; i < player_count; i++)
	{
		scanf("%d", &(temp.say));
		temp.lang_ren_flag = false;//全是好人
		player_buf.push_back(temp);
	}

	//假设
	int lang_ren_lie = 0, lie_count = 0, k = 0;
	bool if_lang_ren = false, out_flag = false;
	int say = 0;
	for (first_lang; first_lang < player_count - 1; first_lang++)
	{
		for (second_lang = first_lang + 1; second_lang < player_count; second_lang++)
		{
			lang_ren_lie = 0, lie_count = 0;
			player_buf[first_lang].lang_ren_flag = true;//假设两个狼人
			player_buf[second_lang].lang_ren_flag = true;
			for (k = 0; k < player_count; k++)
			{
				say = player_buf[k].say;
				if_lang_ren = player_buf[k].lang_ren_flag;
				if (say > 0) // 说某个人不是狼人
				{
					if (player_buf[say - 1].lang_ren_flag == false) //说的是真话
						continue;
					else {
						lie_count++;
						if (if_lang_ren)
							lang_ren_lie++;
					}
				}
				else if (say < 0) //说某个人是狼人
				{
					say = -say;
					if (player_buf[say - 1].lang_ren_flag == true)//说的是真话
						continue;
					else {
						lie_count++;
						if (if_lang_ren)
							lang_ren_lie++;
					}
				}
			}
			if (lie_count == 2 && lang_ren_lie == 1)
			{
				out_flag = true;
				break;
			}
			player_buf[first_lang].lang_ren_flag = false;//重置假设的狼人
			player_buf[second_lang].lang_ren_flag = false;
		}
		if(out_flag)
			break;
	}

	int sum_of_lang = 0;
	vector<int> lang;
	for (int i = 0; i < player_count; i++)
	{
		if (player_buf[i].lang_ren_flag == true)
		{
			sum_of_lang++;
			lang.push_back(i + 1);
		}
	}

	if (sum_of_lang)
		cout << lang[0] << " " << lang[1];
	else
		cout << "No Solution" << endl;

	return 0;
}*/
