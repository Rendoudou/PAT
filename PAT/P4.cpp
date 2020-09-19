//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	unsigned int n = 0;
//	cin >> n;
//	string* data_in_name = new string[n];
//	string* data_in_id = new string[n];
//	//unsigned int* data_in_score = new unsigned int[n];
//	vector<unsigned int> data_in_score(n);
//	for (unsigned int i = 0; i < n; i++)
//	{
//		cin >> data_in_name[i];
//		cin >> data_in_id[i];
//		cin >> data_in_score[i];
//	}
//	std::vector<unsigned int>::iterator biggest = max_element(data_in_score.begin(), data_in_score.end()); //iterator
//	std::vector<unsigned int>::iterator minnest = min_element(data_in_score.begin(), data_in_score.end()); //iterator
//	unsigned int f1 = std::distance(std::begin(data_in_score), biggest);
//	unsigned int f2 = std::distance(std::begin(data_in_score), minnest);
//
//	cout << data_in_name[f1] << " " << data_in_id[f1] << endl;
//	cout << data_in_name[f2] << " " << data_in_id[f2] << endl;
//
//	delete[] data_in_name;
//	delete[] data_in_id;
//	return 0;
//}