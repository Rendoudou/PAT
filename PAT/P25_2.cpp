//#pragma warning(disable : 4996)
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <math.h>
//#include <sstream>
//#include <iomanip>
//using namespace std;
//
//struct list_node
//{
//	int pos;
//	int adress;
//	int next_adress;
//	int data;
//};
//
//vector<list_node> buffer_2;
//vector<list_node> buffer_1;
//
//bool pos_greater(const list_node& a, const list_node& b)
//{
//	return (a.pos < b.pos);
//}
//
//int main()
//{
//	int first_adrr = 0, n = 0, reflex_count = 0;
//
//	cin >> first_adrr >> n >> reflex_count;
//
//	list_node temp_node;
//	for (unsigned int i = 0; i < n; i++)
//	{
//		scanf("%d", &temp_node.adress);
//		scanf("%d", &temp_node.data);
//		scanf("%d", &temp_node.next_adress);
//		buffer_1.push_back(temp_node);
//	}
//
//	/*排序*/
//	//取出第一个
//	for (unsigned int i = 0; i < n; i++)
//		if (buffer_1[i].adress == first_adrr)
//		{
//			buffer_2.push_back(buffer_1[i]);
//			break;
//		}
//
//	int aim_adrr = buffer_2[0].next_adress;
//	while (true)
//	{
//		for (unsigned int i = 0; i < n; i++)
//			if (buffer_1[i].adress == aim_adrr)
//			{
//				buffer_2.push_back(buffer_1[i]);
//				aim_adrr = buffer_1[i].next_adress;
//				break;
//			}
//		if (aim_adrr == -1)
//			break;
//	}
//
//	//更新n
//	n = buffer_2.size();
//
//	//重置次序
//	unsigned int zu = n / reflex_count;
//	unsigned int re = n % reflex_count;
//	int pos_reset = 0;
//	for (int i = 0; i < zu; i++)
//	{
//		for (int j = reflex_count * (i+1) - 1; j >= reflex_count * i; j--)
//		{
//			buffer_2[j].pos = pos_reset;
//			pos_reset++;
//		}
//	}
//	for (int i = zu * reflex_count; i < n; i++)
//	{
//		buffer_2[i].pos = pos_reset;
//		pos_reset++;
//	}
//
//	// 重置次序
//	sort(buffer_2.begin(), buffer_2.end(), pos_greater);
//
//	//设置连接
//	for (int i = 0; i < n; i++)
//	{
//		if (i == n - 1)
//		{
//			buffer_2[i].next_adress = -1;
//			break;
//		}
//		else
//		{
//			buffer_2[i].next_adress = buffer_2[i + 1].adress;
//		}
//	}
//
//	//display
//	for (unsigned int i = 0; i < buffer_2.size(); i++)
//	{
//		printf("%05d", buffer_2[i].adress);
//		printf(" %d", buffer_2[i].data);
//		if (i == n - 1)
//			printf(" -1");
//		else
//			printf(" %05d\n", buffer_2[i].next_adress);
//	}
//
//	return 0;
//}