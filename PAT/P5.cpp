//#include <iostream>
//#include <vector>
//#include <string>
//#include <list>
//#include <algorithm>
//using namespace std;
//
////�õ�3n+1�Ĺ���
//list<unsigned int> & get_process(const unsigned int n, list<unsigned int> & ml);
////����Ƿ�Ϊ�ؼ��֣���μ��
//void check_key_number(vector<unsigned int>& data_in, vector<bool>& flags, list<unsigned int>& data_process);
////sort �����㷨���õ��������
//bool sort_greatter(const unsigned int& m, const unsigned int& n);
//
////main
//int main()
//{
//	int n = 0;
//	int temp = 0;
//	bool flag = true;
//	vector<unsigned int> data_in; //��������Ϊn���޷�����������,�洢3n+1��ʼ����
//	vector<bool> flags; //�ؼ��ֱ��
//	list<unsigned int> process; //����������洢3n+1�Ĺ���
//
//	//��ô��������
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		data_in.push_back(temp);
//		flags.push_back(true); //��ʼĬ��Ϊ�ؼ���
//	}
//
//	//������
//	vector<unsigned int>::iterator it_v;
//	list<unsigned int>::iterator it_l;
//
//	//�õ���������
//	for (it_v = data_in.begin(); it_v != data_in.end(); it_v++)
//	{
//		//cout << "process address at" << &process << endl;
//		get_process(*it_v, process);
//		//for (it_l = process.begin(); it_l != process.end(); it_l++)//�����ǰ����
//		//	cout << *it_l << ' ';
//		//cout << endl;
//		check_key_number(data_in, flags, process);//���ؼ���
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
////�õ�����
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
////���ؼ���
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
//1. push_back ��β������Ԫ��
//2. pop_back β���׳�
//3. reserve Ԥ������������С
//4. ���� size(),capacity() ʵ��ͳ��Ԫ�ص�Ŀ��
//5. resize,reserve ����ͬ�ڴ�С��Ŀ��	
//cout << "size" << data_in.size() << endl;
//cout << "capacity" << data_in.capacity() << endl;
//cout << "max_size" << data_in.max_size() << endl;