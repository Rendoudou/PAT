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
//int main()
//{
//	string buffer;
//	cin >> buffer;
//
//	int pos_nop = 0, pos_E = 0, pos_fu_hao = 0;
//	int fu_hao = 1;
//	for (unsigned int i = 1; i < buffer.size(); i++)
//	{
//		if (buffer[i] == '.')
//		{
//			pos_nop = i;
//			continue;
//		}
//		if (buffer[i] == 'E')
//		{
//			pos_E = i;
//			continue;
//		}
//		if (buffer[i] == '+' || buffer[i] == '-')
//		{
//			if (buffer[i] == '+') fu_hao = 1;
//			else fu_hao = -1;
//			pos_fu_hao = i;
//			break;
//		}
//	}
//
//	string data_depart[3];
//	data_depart[0] = buffer.substr(1, pos_nop - 1);
//	data_depart[1] = buffer.substr(pos_nop + 1, pos_E - 1 - pos_nop);
//	data_depart[2] = buffer.substr(pos_fu_hao + 1);
//
//	int fang_suo = 0;
//	fang_suo = stoi(data_depart[2]);
//	//for ( int i = 0; i < int(data_depart[2].size()); i++)
//	//	fang_suo += (data_depart[2][i] - '0') * int(pow(10, data_depart[2].size() - i - 1));
//
//	
//	//display
//	if(buffer[0] == '-')  //小错误 但是很致命
//		cout << buffer[0];
//	if (fang_suo == 0)
//	{
//		cout << data_depart[0] << '.' << data_depart[1];
//	}
//	else
//	{
//		if (fu_hao > 0)
//		{
//			if (fang_suo < int(data_depart[1].size()))
//			{
//				cout << data_depart[0];
//				for (unsigned int i = 0; i < data_depart[1].size(); i++)
//				{
//					cout << data_depart[1][i];
//					if (i == fang_suo - 1)
//						cout << '.';
//				}
//			}
//			else
//			{
//
//				cout << data_depart[0] << data_depart[1];
//				for (unsigned int i = 0; i < fang_suo - data_depart[1].size(); i++)
//					cout << '0';
//			}
//		}
//		else //为负数时只会大于等于part0
//		{
//			for (unsigned int i = 0; i <= fang_suo - data_depart[0].size(); i++)
//			{
//				cout << '0';
//				if (i == 0)
//					cout << '.';
//			}
//			cout << data_depart[0] << data_depart[1];
//		}
//
//	}
//	
//	return 0;
//}