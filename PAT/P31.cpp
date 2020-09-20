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
//char check_buffer[11] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
//
//int quan_buffer[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
//
//vector<string> id_buffer;
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	string id_temp;
//	while (n--) 
//	{
//		cin >> id_temp;
//		id_buffer.push_back(id_temp);
//	}
//	int sum = 0;
//	bool flag = true;
//	for (int i = 0; i < id_buffer.size(); i++)
//	{
//		sum = 0;
//		for (int j = 0; j < 17; j++)
//			sum += (id_buffer[i][j] - '0') * quan_buffer[j];
//		if (check_buffer[sum % 11] != id_buffer[i][17])
//		{
//			cout << id_buffer[i] << endl;
//			flag = false;
//		}
//	}
//
//	if (flag)
//		cout << "All passed";
//
//	return 0;
//
//}