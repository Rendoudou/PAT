/*#pragma warning(disable : 4996)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <math.h>
#include <sstream>
#include <iomanip>
#include <map>
using namespace std;

//��ʱ���� for ̫����

struct Node
{
	int id = -1;
	int data = -1;
	int next_node_id = -1;
};

int main()
{
	vector<Node> buf;
	vector<Node> buf_proc;

	int first_node_id = 0, node_count = 0, K = 0;
	Node temp;
	cin >> first_node_id >> node_count >> K;
	for (int i = 0; i < node_count; i++)
	{
		scanf("%d%d%d", &temp.id, &temp.data, &temp.next_node_id);
		buf.push_back(temp);
	}

	//�ҵ���һ���ڵ� ���ҿ������ýڵ�
	for (int i = 0; i < buf.size(); i++)
	{
		if (buf[i].id == first_node_id)
		{
			buf_proc.push_back(buf[i]);
			break;
		}
	}

	//���Ӳ��ҿ������ýڵ�
	int next_node_id = buf_proc[0].next_node_id;
	while (next_node_id != -1)
	{
		for (int i = 0; i < buf.size(); i++)
			if (buf[i].id == next_node_id)
			{
				buf_proc.push_back(buf[i]);
				next_node_id = buf[i].next_node_id;
				break;
			}
	}

	//��ʼ����buf_proc,�������ܷ����仯
	buf.clear();
	for (int i = 0; i < buf_proc.size(); i++) // �Ѹ���������ǰ��
	{
		if (buf_proc[i].data < 0)
			buf.push_back(buf_proc[i]);
	}
	for (int i = 0; i < buf_proc.size(); i++) // 0 �� K
	{
		if (buf_proc[i].data >= 0 && buf_proc[i].data <= K)
			buf.push_back(buf_proc[i]);
	}
	for (int i = 0; i < buf_proc.size(); i++) // ���� K
	{
		if (buf_proc[i].data > K)
			buf.push_back(buf_proc[i]);
	}

	////��������
	//for (int i = 0; i < buf.size(); i++)
	//{
	//	if (i == buf.size() - 1)
	//		buf[i].next_node_id = -1;
	//	else
	//		buf[i].next_node_id = buf[i + 1].id;
	//}

	//display
	for (int i = 0; i < buf.size(); i++)
	{
		if(i != buf.size() - 1)
			printf("%05d %d %05d\n", buf[i].id, buf[i].data, buf[i+1].id);
		else
			printf("%05d %d -1\n", buf[i].id, buf[i].data);
	}

	return 0;
}
*/