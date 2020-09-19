//#include <iostream>
//#include <string>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <math.h>
//#include <sstream>
//using namespace std;

//char buffer[10000] = {};

//cin.getline(buffer,10000);
//string buffer_str = string(buffer);
//for (unsigned int i = 0; i < buffer_str.size(); i++)
//	if (buffer_str[i] == ' ')
//		group += 1;
//group = (group + 1) / 2;

/*istringstream is(buffer_str);*/

/*for (unsigned int i = 0; i < group; i++)
{
	is >> temp_a >> temp_b;
	a.push_back(temp_a);
	b.push_back(temp_b);
}*/

//int main()
//{
//	unsigned int group = 0;
//	int temp_a = 0;
//	int temp_b = 0;
//	vector<int> a;
//	vector<int> b;
//
//	while (cin >> temp_a >> temp_b)
//	{
//		a.push_back(temp_a);
//		b.push_back(temp_b);
//		group += 1;
//	}
//
//	if (b[0] == 0)
//	{
//		cout << 0 << ' ' << 0;
//		return 0;
//	}
//
//	for (unsigned int i = 0; i < group; i++)
//	{
//		if (b[i] == 0) 
//		{ 
//			//a[i] = 0;
//			a.pop_back();
//			b.pop_back();
//			group = group - 1;
//			break; 
//		}
//		a[i] = a[i] * b[i];
//		b[i] -= 1;
//	}
//	
//	bool flag = true;
//	for (unsigned int i = 0; i < group; i++)
//	{
//		if (flag)
//		{
//			cout << a[i] << ' ' << b[i];
//			flag = false;
//		}
//		else
//			cout << ' '<< a[i] << ' ' << b[i];
//	}
//	
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int a, b, flag = 0;
//	while (cin >> a >> b) {
//		if (b != 0) {
//			if (flag == 1) cout << " ";
//			cout << a * b << " " << b - 1;
//			flag = 1;
//		}
//	}
//	if (flag == 0) cout << "0 0";
//	return 0;
//}

