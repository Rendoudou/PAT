//#include <iostream>
//#include <string>
//using namespace std;
//
//bool check_string_char_number(const string str, char);
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	string* data_In = new string[n];
//	bool* data_Out = new bool[n];
//	int pos_P = 0;
//	bool flag_P = false;
//	int pos_T = 0;
//	bool flag_T = false;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> data_In[i];
//		pos_P = 0;
//		flag_P = false;
//		pos_T = 0;
//		flag_T = false;
//
//		//找‘P’的位置
//		for (unsigned int j = 0; j < data_In[i].length(); j++)
//		{
//			if (data_In[i][j] == 'P')
//			{
//				pos_P = j;
//				flag_P = true;
//				break;
//			}
//		}
//		//找‘T’的位置
//		for (unsigned int j = 0; j < data_In[i].length(); j++)
//		{
//			if (data_In[i][j] == 'T')
//			{
//				pos_T = j;
//				flag_T = true;
//				break;
//			}
//		}
//		
//		//判断
//		if (flag_T && flag_P && pos_P < pos_T)
//		{
//			string str1 = data_In[i].substr(0, pos_P);
//			string str2 = data_In[i].substr(pos_P + 1, pos_T - pos_P - 1);
//			string str3 = data_In[i].substr(pos_T + 1, data_In[i].length() - pos_T - 1);
//			if (str3.length() == str1.length() * str2.length() && str2.length() != 0)
//			{
//				if(check_string_char_number(str1,'A') && check_string_char_number(str2, 'A') && check_string_char_number(str3, 'A'))
//					data_Out[i] = true;
//				else
//					data_Out[i] = false;
//			}
//			else
//				data_Out[i] = false;
//		}
//		else
//			data_Out[i] = false;
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		if (data_Out[i] == true)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//
//	delete[] data_In;
//	delete[] data_Out;
//	return 0;
//
//}
//
////检查字符转内是否全为同一字符
//bool check_string_char_number(const string str, char a)
//{
//	unsigned int count = 0;
//	bool flag = false;
//	for (unsigned int i = 0; i < str.length(); i++)
//	{
//		if (str[i] == a)
//			count += 1;
//	}
//	if (count == str.length())
//		flag = true;
//	return flag;
//}