//#include <iostream>
//#include <vector>
//#include <string>
//#include <list>
//#include <algorithm>
//using namespace std;
//
////得到3n+1的过程
//list<unsigned int> & get_process(const unsigned int n, list<unsigned int> & ml);
////检查是否为关键字，多次检查
//void check_key_number(vector<unsigned int>& data_in, vector<bool>& flags, list<unsigned int>& data_process);
////sort 排序算法调用的排序规则
//bool sort_greatter(const unsigned int& m, const unsigned int& n);
//
////main
//int main()
//{
//	int n = 0;
//	int temp = 0;
//	bool flag = true;
//	vector<unsigned int> data_in; //创建容量为n的无符号整型容器,存储3n+1初始数字
//	vector<bool> flags; //关键字标记
//	list<unsigned int> process; //创建空链表存储3n+1的过程
//
//	//获得待检测数据
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		data_in.push_back(temp);
//		flags.push_back(true); //初始默认为关键字
//	}
//
//	//迭代器
//	vector<unsigned int>::iterator it_v;
//	list<unsigned int>::iterator it_l;
//
//	//得到过程与检测
//	for (it_v = data_in.begin(); it_v != data_in.end(); it_v++)
//	{
//		//cout << "process address at" << &process << endl;
//		get_process(*it_v, process);
//		//for (it_l = process.begin(); it_l != process.end(); it_l++)//输出当前过程
//		//	cout << *it_l << ' ';
//		//cout << endl;
//		check_key_number(data_in, flags, process);//检查关键字
//		process.clear();
//	}
//
//	//display
//	vector<unsigned int> data_out;
//	vector<bool>::iterator it_f;
//	for (it_f = flags.begin(); it_f != flags.end(); it_f++)
//		if (*it_f == true)
//			data_out.push_back(data_in[it_f - flags.begin()]);
//	sort(data_out.begin(), data_out.end(), sort_greatter);
//	for (it_v = data_out.begin(); it_v != data_out.end(); it_v++) 
//	{
//		if (true == flag) 
//		{
//			cout << *it_v;
//			flag = false;
//		}
//		else
//			cout << ' ' << *it_v;
//	}
//
//	return 0;
//}
//
////得到过程
//list<unsigned int> & get_process(const unsigned int n, list<unsigned int> & ml)
//{
//	unsigned int temp = n;
//	ml.push_back(temp);
//	while (true)
//	{
//		if (temp == 1)
//			break;
//		if (temp % 2 == 0)
//			temp = temp / 2;
//		else
//			temp += (temp + 1) / 2;
//		ml.push_back(temp);
//	}
//	return ml;
//}
//
////检查关键字
//void check_key_number(vector<unsigned int>& data_in, vector<bool>& flags, list<unsigned int>& data_process)
//{
//	vector<unsigned int>::iterator it_data_in;
//	list<unsigned int>::iterator it_data_process;
//
//	for (it_data_in = data_in.begin(); it_data_in != data_in.end(); it_data_in++)
//		for (it_data_process = data_process.begin(); it_data_process != data_process.end(); it_data_process++)
//			if (*it_data_in == *it_data_process && it_data_process != data_process.begin())
//			{
//				flags[it_data_in - data_in.begin()] = false;
//				break;
//			}
//	return;
//}
//
////algorithm
//bool sort_greatter(const unsigned int& m, const unsigned int& n)
//{
//	return (m > n);
//}


//vector<string> myvt;
//template <class T, class Allocator = allocator<T>>class vector;
//vector func
//1. push_back 在尾部加入元素
//2. pop_back 尾部抛出
//3. reserve 预先设置容器大小
//4. 方法 size(),capacity() 实现统计元素的目的
//5. resize,reserve 设置同期大小的目的	
//cout << "size" << data_in.size() << endl;
//cout << "capacity" << data_in.capacity() << endl;
//cout << "max_size" << data_in.max_size() << endl;