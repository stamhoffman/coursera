//#include <algorithm>
//#include <fstream>
//#include <iomanip>
//#include <iostream>
//#include <iterator>
//#include <map>
//#include <set>
//#include <string>
//#include <vector>
// using namespace std;

// struct Student {
// public:
//  void Print() {
//    std::cout << first_name_ << " " << last_name_ << " " << day_birthday_ << "
//    "
//              << month_birthday_ << " " << year_birthday_ << std::endl;
//  }
//  Student(std::string first_name, std::string last_name, int day_birthday,
//          int month_birthday, int year_birthday) {
//    first_name_ = first_name;
//    last_name_ = last_name;
//    day_birthday_ = day_birthday;
//    month_birthday_ = month_birthday;
//    year_birthday_ = year_birthday;
//  }
//  std::string GetNames() { return first_name_ + " " + last_name_; }
//  std::string GetBirthday() {
//    return std::to_string(day_birthday_) + "." +
//           std::to_string(month_birthday_) + "." +
//           std::to_string(year_birthday_);
//  }

// private:
//  std::string first_name_;
//  std::string last_name_;
//  int day_birthday_;
//  int month_birthday_;
//  int year_birthday_;
//};

// int main_print_student(int argc, char *argv[]) {
//  std::string buffer;
//  int number_student = 0;
//  std::cin >> number_student;

//  std::string first_name;
//  std::string last_name;
//  int day_birthday;
//  int month_birthday;
//  int year_birthday;

//  std::vector<Student> students;

//  for (auto i = 0; i < number_student && i < 10000; i++) {
//    std::cin >> first_name >> last_name >> day_birthday >> month_birthday >>
//        year_birthday;
//    Student student(first_name, last_name, day_birthday, month_birthday,
//                    year_birthday);
//    students.push_back(student);
//  }

//  int number_cmd = 0;
//  std::cin >> number_cmd;
//  std::string cmd;
//  for (auto i = 0; i < number_cmd && i < 10000; i++) {
//    std::cin >> cmd >> number_student;
//    if (students.size() == 0 || number_student > students.size() ||
//        number_student < 1) {
//      std::cout << "bad request" << std::endl;
//      continue;
//    }
//    if (cmd == "name") {
//      std::cout << students[number_student - 1].GetNames() << std::endl;
//      continue;
//    }
//    if (cmd == "date") {
//      std::cout << students[number_student - 1].GetBirthday() << std::endl;
//      continue;
//    }
//    std::cout << "bad request" << std::endl;
//  }

//  return 0;
//}
