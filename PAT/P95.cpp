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
/*                            考生信息                                  */
/************************************************************************/
// STU 考试等级
enum TestLevel {
	NONE = 0,
	LEVEL_T,
	LEVEL_A,
	LEVEL_B,
};

// STU 结构体
struct Stu{
	string test_id_str;
	TestLevel level = NONE;
	int test_place_id = 0;
	string day;
	int stu_id = 0;
	int score = 0;

	bool decl_stu_info(void);
};

// STU 处理字符串
bool Stu::decl_stu_info(void) {

	if (test_id_str.size() <= 0)
		return false;

	//等级
	char level = test_id_str[0];
	if (level == 'B')
		this->level = LEVEL_B;
	else if (level == 'A')
		this->level = LEVEL_A;
	else if (level == 'T')
		this->level = LEVEL_T;

	//考场编号
	this->test_place_id = stoi(test_id_str.substr(1, 3));

	//年月日
	this->day = test_id_str.substr(4, 6);

	//id
	this->stu_id = stoi(test_id_str.substr(10, 3));

	return true;
}


/************************************************************************/
/*                           命令结构及处理                             */
/************************************************************************/
// command结构
struct Command {

	bool get_command(void);
	friend ostream& operator<<(ostream& os, Command& a);

	int type = 0;
	char type_1_level_char;
	TestLevel type_1_level = NONE;
	int type_2_testplace_id = 0;
	string type_3_day;
	
};

// 根据type获得命令
bool Command::get_command(void){

	if (type == 1) { // 同一个等级的考生排序 降序，同分时按照准考证降序。
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
	else if (2 == type) { // 输出指定考场的人数和总分
		cin >> this->type_2_testplace_id;
	}
	else if (3 == type) { // 某指定日期的考生人数分考场统计，输出人数降序，同人数时考场升序
		cin >> this->type_3_day;
	}
	
	return false;
}

// 重载输出
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
/*                          考场信息结构                                */
/************************************************************************/
struct TestPlace{
	int id = 0;
	int stu_count = 0;
};


/************************************************************************/
/*                         命令1与3 比较排序                            */
/************************************************************************/
// compare 函数
bool cmp_type_1(const Stu& a, const Stu& b) {// 同一个等级的考生排序 降序，同分时按照准考证降序。
	if (a.score != b.score)
		return a.score > b.score;
	else
		return a.test_id_str < b.test_id_str;
}

bool cmp_type_3_pre(const Stu& a, const Stu& b) { //类型三预处理
	return a.test_place_id < b.test_place_id;
}

bool cmp_type_3(const TestPlace& a, const TestPlace& b) {// 某指定日期的考生人数分考场统计，输出人数降序，同人数时考场升序
	if (a.stu_count != b.stu_count)
		return a.stu_count > b.stu_count;
	else
		return a.id < b.id;
}

/************************************************************************/
/*                             main函数                                 */
/************************************************************************/
int main()
{
	unsigned int n = 0, m = 0;
	cin >> n >> m;

	//收集学生数据
	Stu temp_stu;
	vector<Stu> stu_buf_vec;
	for (size_t i = 0; i < n; i++){
		cin >> temp_stu.test_id_str >> temp_stu.score;
		temp_stu.decl_stu_info();
		stu_buf_vec.push_back(temp_stu);
	}

	//收集命令集合
	vector<Command> command_buf_vec;
	for (size_t i = 0; i < m; i++){
		Command temp_command;
		cin >> temp_command.type;
		temp_command.get_command();
		command_buf_vec.push_back(temp_command);
	}

	//处理命令集合
	vector<Stu> stu_buf_process_vec;
	vector<TestPlace> test_place_buf_vec;
	for (size_t i = 0; i < command_buf_vec.size(); i++) {
		printf("Case %d: ", i + 1);
		cout << command_buf_vec[i];
		switch (command_buf_vec[i].type)
		{
		case (1): {// 同一个等级的考生排序 降序，同分时按照准考证增序。
			
			for (size_t j = 0; j < n; j++)//读取所有同一个等级的考生
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
		case (2): {// 输出指定考场的人数和总分
			
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
		case (3): {// 某指定日期的考生人数分考场统计，输出人数降序，同人数时考场升序
			
			TestPlace temp_test_place;
			for (size_t j = 0; j < n; j++) 
				if (stu_buf_vec[j].day == command_buf_vec[i].type_3_day)
					stu_buf_process_vec.push_back(stu_buf_vec[j]);
			if (0 == stu_buf_process_vec.size()) {
				cout << "NA" << endl;
				break;
			}
			sort(stu_buf_process_vec.begin(), stu_buf_process_vec.end(), cmp_type_3_pre);//预先排序 同一个考场的相邻
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
				if (j == stu_buf_process_vec.size() - 1) {//最后一个
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
