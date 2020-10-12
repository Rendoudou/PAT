#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
#include <map>
using namespace std;


/************************************************************************/
/*                            ������Ϣ                                  */
/************************************************************************/
// STU ���Եȼ�
enum TestLevel {
	NONE = 0,
	LEVEL_T,
	LEVEL_A,
	LEVEL_B,
};

// STU �ṹ��
struct Stu{
	string test_id_str;
	TestLevel level = NONE;
	int test_place_id = 0;
	string day;
	int stu_id = 0;
	int score = 0;

	bool decl_stu_info(void);
};

// STU �����ַ���
bool Stu::decl_stu_info(void) {

	if (test_id_str.size() <= 0)
		return false;

	//�ȼ�
	char level = test_id_str[0];
	if (level == 'B')
		this->level = LEVEL_B;
	else if (level == 'A')
		this->level = LEVEL_A;
	else if (level == 'T')
		this->level = LEVEL_T;

	//�������
	this->test_place_id = stoi(test_id_str.substr(1, 3));

	//������
	this->day = test_id_str.substr(4, 6);

	//id
	this->stu_id = stoi(test_id_str.substr(10, 3));

	return true;
}


/************************************************************************/
/*                           ����ṹ������                             */
/************************************************************************/
// command�ṹ
struct Command {

	bool get_command(void);
	friend ostream& operator<<(ostream& os, Command& a);

	int type = 0;
	char type_1_level_char;
	TestLevel type_1_level = NONE;
	int type_2_testplace_id = 0;
	string type_3_day;
	
};

// ����type�������
bool Command::get_command(void){

	if (type == 1) { // ͬһ���ȼ��Ŀ������� ����ͬ��ʱ����׼��֤����
		char temp;
		cin >> temp;
		this->type_1_level_char = temp;
		if (temp == 'B')
			this->type_1_level = LEVEL_B;
		else if (temp == 'A')
			this->type_1_level = LEVEL_A;
		else if (temp == 'T')
			this->type_1_level = LEVEL_T;
		return true;
	}
	else if (2 == type) { // ���ָ���������������ܷ�
		cin >> this->type_2_testplace_id;
	}
	else if (3 == type) { // ĳָ�����ڵĿ��������ֿ���ͳ�ƣ������������ͬ����ʱ��������
		cin >> this->type_3_day;
	}
	
	return false;
}

// �������
ostream& operator<<(ostream& os, Command& a) {
	os << a.type << " ";
	if (a.type == 1)
		os << a.type_1_level_char;
	else if (a.type == 2)
		printf("%03d", a.type_2_testplace_id);
	else if (a.type == 3)
		os << a.type_3_day;
	else
		os << "ERROR";
	os << endl;
	return os;
}


/************************************************************************/
/*                          ������Ϣ�ṹ                                */
/************************************************************************/
struct TestPlace{
	int id = 0;
	int stu_count = 0;
};


/************************************************************************/
/*                         ����1��3 �Ƚ�����                            */
/************************************************************************/
// compare ����
bool cmp_type_1(const Stu& a, const Stu& b) {// ͬһ���ȼ��Ŀ������� ����ͬ��ʱ����׼��֤����
	if (a.score != b.score)
		return a.score > b.score;
	else
		return a.test_id_str < b.test_id_str;
}

bool cmp_type_3_pre(const Stu& a, const Stu& b) { //������Ԥ����
	return a.test_place_id < b.test_place_id;
}

bool cmp_type_3(const TestPlace& a, const TestPlace& b) {// ĳָ�����ڵĿ��������ֿ���ͳ�ƣ������������ͬ����ʱ��������
	if (a.stu_count != b.stu_count)
		return a.stu_count > b.stu_count;
	else
		return a.id < b.id;
}

/************************************************************************/
/*                             main����                                 */
/************************************************************************/
int main()
{
	unsigned int n = 0, m = 0;
	cin >> n >> m;

	//�ռ�ѧ������
	Stu temp_stu;
	vector<Stu> stu_buf_vec;
	for (size_t i = 0; i < n; i++){
		cin >> temp_stu.test_id_str >> temp_stu.score;
		temp_stu.decl_stu_info();
		stu_buf_vec.push_back(temp_stu);
	}

	//�ռ������
	vector<Command> command_buf_vec;
	for (size_t i = 0; i < m; i++){
		Command temp_command;
		cin >> temp_command.type;
		temp_command.get_command();
		command_buf_vec.push_back(temp_command);
	}

	//���������
	vector<Stu> stu_buf_process_vec;
	vector<TestPlace> test_place_buf_vec;
	for (size_t i = 0; i < command_buf_vec.size(); i++) {
		printf("Case %d: ", i + 1);
		cout << command_buf_vec[i];
		switch (command_buf_vec[i].type)
		{
		case (1): {// ͬһ���ȼ��Ŀ������� ����ͬ��ʱ����׼��֤����
			
			for (size_t j = 0; j < n; j++)//��ȡ����ͬһ���ȼ��Ŀ���
				if (stu_buf_vec[j].level == command_buf_vec[i].type_1_level)
					stu_buf_process_vec.push_back(stu_buf_vec[j]);
			if (0 == stu_buf_process_vec.size()) {
				cout << "NA" << endl;
				break;
			}
			sort(stu_buf_process_vec.begin(), stu_buf_process_vec.end(), cmp_type_1);
			for (size_t j = 0; j < stu_buf_process_vec.size(); j++) 
				cout << stu_buf_process_vec[j].test_id_str << " " << stu_buf_process_vec[j].score << endl;
			stu_buf_process_vec.clear();
			break;
		}
		case (2): {// ���ָ���������������ܷ�
			
			int sum = 0, stu_count = 0;
			for (size_t j = 0; j < n; j++)
				if (stu_buf_vec[j].test_place_id == command_buf_vec[i].type_2_testplace_id)
				{
					sum += stu_buf_vec[j].score;
					stu_count++;
				}
			if (0 == stu_count) {
				cout << "NA" << endl;
				break;
			}
			cout << stu_count << " " << sum << endl;
			break;
		}
		case (3): {// ĳָ�����ڵĿ��������ֿ���ͳ�ƣ������������ͬ����ʱ��������
			
			TestPlace temp_test_place;
			for (size_t j = 0; j < n; j++) 
				if (stu_buf_vec[j].day == command_buf_vec[i].type_3_day)
					stu_buf_process_vec.push_back(stu_buf_vec[j]);
			if (0 == stu_buf_process_vec.size()) {
				cout << "NA" << endl;
				break;
			}
			sort(stu_buf_process_vec.begin(), stu_buf_process_vec.end(), cmp_type_3_pre);//Ԥ������ ͬһ������������
			temp_test_place.id = stu_buf_process_vec[0].test_place_id;
			for (size_t j = 0; j < stu_buf_process_vec.size(); j++) {
				if (stu_buf_process_vec[j].test_place_id == temp_test_place.id)
					temp_test_place.stu_count++;
				else {
					test_place_buf_vec.push_back(temp_test_place);
					temp_test_place.stu_count = 0;
					temp_test_place.id = stu_buf_process_vec[j].test_place_id;
					temp_test_place.stu_count++;
				}
				if (j == stu_buf_process_vec.size() - 1) {//���һ��
					test_place_buf_vec.push_back(temp_test_place);
					temp_test_place.stu_count = 0;
				}
			}
			sort(test_place_buf_vec.begin(), test_place_buf_vec.end(), cmp_type_3);
			for (size_t j = 0; j < test_place_buf_vec.size(); j++)
				printf("%03d %d\n", test_place_buf_vec[j].id, test_place_buf_vec[j].stu_count);
			stu_buf_process_vec.clear();
			test_place_buf_vec.clear();
			break;
		}
		default:
			break;
		}
	}

	return 0;
}*/
