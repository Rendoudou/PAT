/*//柳神思路 空间换时间 将地址具象化
#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

struct Node
{
	int data = -1;
	int next_node_id = -1;
}list_node[100000];

int main()
{
	int first_node_id = 0, node_count = 0, K = 0;
	cin >> first_node_id >> node_count >> K;
	int addr = 0;
	for (int i = 0; i < node_count; i++)//读取地址 和 数据
	{
		scanf("%d", &addr);
		cin >> list_node[addr].data >> list_node[addr].next_node_id;
	}

	//数据梳理,排序,清理无用数据
	vector<int> node_addr_record;
	int next_id = first_node_id;
	while (next_id != -1) // 地址排序
	{
		node_addr_record.push_back(next_id);
		next_id = list_node[next_id].next_node_id;
	}
	
	//地址翻转
	int node_recount = node_addr_record.size();
	for (int i = 0; i < (node_recount - node_recount % K); i = i + K)
		reverse(begin(node_addr_record) + i, begin(node_addr_record) + i + K);

	//display
	for (int i = 0; i < node_addr_record.size() - 1; i++) // （输出） 输出对应地址的内容
		printf("%05d %d %05d\n", node_addr_record[i], list_node[node_addr_record[i]].data, node_addr_record[i + 1]);
	printf("%05d %d -1\n", node_addr_record.back(), list_node[node_addr_record.back()].data);

	return 0;
}*/
