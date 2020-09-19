#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

struct list_node
{
	int adress;
	int data;
	int next_adress;
};

vector<list_node> buffer_out;
vector<list_node> buffer_1;
vector<list_node> buffer_2;

int main()
{
	int first_adrr = 0, n = 0, reflex_count = 0;

	cin >> first_adrr >> n >> reflex_count;

	list_node temp_node;
	for (unsigned int i = 0; i < n; i++)
	{
		cin >> temp_node.adress;
		cin >> temp_node.data;
		cin >> temp_node.next_adress;
		buffer_1.push_back(temp_node);
	}

	//取出第一个
	for (unsigned int i = 0; i < n; i++)
		if (buffer_1[i].adress == first_adrr)
		{
			buffer_2.push_back(buffer_1[i]);
			break;
		}

	int aim_adrr = buffer_2[0].next_adress;
	while (true)
	{
		for(unsigned int i =0; i < n; i++)
			if (buffer_1[i].adress == aim_adrr)
			{
				buffer_2.push_back(buffer_1[i]);
				aim_adrr = buffer_1[i].next_adress;
				break;
			}
		if (aim_adrr == -1)
			break;
	}

	//更新n
	n = buffer_2.size();
	unsigned int zu = n / reflex_count;
	unsigned int re = n % reflex_count;

	for (int i = 0; i < zu; i++)
	{
		for (int j = reflex_count * (i + 1) - 1; j >= reflex_count * i; j--)
		{

			if (i != 0 && (j == reflex_count * (i + 1) - 1)) //两组之间相连
				buffer_out[i * reflex_count - 1].next_adress = buffer_2[j].adress;
			if (j == reflex_count * i)
				buffer_2[j].next_adress = -1;
			else
				buffer_2[j].next_adress = buffer_2[j - 1].adress;

			buffer_out.push_back(buffer_2[j]);
		}
	}

	for (unsigned int i = zu * reflex_count; i < buffer_2.size(); i++)
	{
		if (i == zu * reflex_count)
			buffer_out[buffer_out.size() - 1].next_adress = buffer_2[i].adress; //上一个最后一个
		if (i == buffer_2.size() - 1)
			buffer_2[i].next_adress = -1;
		buffer_out.push_back(buffer_2[i]);

	}

	for (unsigned int i = 0; i < buffer_out.size(); i++)
	{
		cout << setw(5) << setfill('0') << buffer_out[i].adress;
		cout << ' ' << buffer_out[i].data;
		if (buffer_out[i].next_adress == -1)
			cout << ' ' << -1;
		else
			cout << ' ' << setw(5) << setfill('0') << buffer_out[i].next_adress << endl;
	}

	return 0;
}