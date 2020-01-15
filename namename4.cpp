//#include <algorithm>
//#include <fstream>
//#include <iostream>
//#include <iterator>
//#include <map>
//#include <set>
//#include <string>
//#include <vector>

// using namespace std;

// class Person {
// public:
//  Person(std::string first_name, std::string last_name, int year) {
//    data[year]["first_name"] = first_name;
//    data[year]["last_name"] = last_name;
//  }

//  void ChangeFirstName(int year, const string &first_name) {
//    if (data.size() == 0) return;
//    data[year]["first_name"] = first_name;
//  }

//  void ChangeLastName(int year, const string &last_name) {
//    if (data.size() == 0) return;
//    data[year]["last_name"] = last_name;
//  }

//  std::string GetFullName(int year) const {
//    if (data.size() == 0 || year < data.begin()->first) {
//      return "No person";
//    }

//    std::string last;
//    std::string first;
//    for (auto unit : data) {
//      if (unit.first > year) {
//        break;
//      }
//      if (unit.second["last_name"].size() != 0) {
//        last = unit.second["last_name"];
//      }
//      if (unit.second["first_name"].size() != 0) {
//        first = unit.second["first_name"];
//      }
//    }

//    if (last.size() == 0) {
//      last = "with unknown last name";
//    }
//    if (first.size() == 0) {
//      first = "with unknown first name";
//      first.swap(last);
//    }
//    return first + " " + last;
//  }

//  string GetFullNameWithHistory(int year) const {
//    // получить все имена и фамилии по состоянию на конец года year
//    if (data.size() == 0 || year < data.begin()->first) {
//      return "No person";
//    }

//    std::string last;
//    std::string first;

//    for (auto unit : data) {
//      if (unit.first > year) {
//        break;
//      }

//      if (unit.second["last_name"].size() != 0) {
//        last = unit.second["last_name"];
//      }
//      if (unit.second["first_name"].size() != 0) {
//        first = unit.second["first_name"];
//      }
//    }

//    std::vector<std::string> a;
//    std::vector<std::string> b;

//    for (auto unit : data) {
//      if (unit.first > year) {
//        break;
//      }
//      if (unit.second["last_name"].size() != 0) {
//        a.push_back(unit.second["last_name"]);
//      }
//      if (unit.second["first_name"].size() != 0) {
//        b.push_back(unit.second["first_name"]);
//      }
//    }

//    if (a.size() > 0) a.pop_back();
//    if (b.size() > 0) b.pop_back();

//    auto itra = std::unique(a.begin(), a.end());
//    a.resize(itra - a.begin());

//    auto itrb = std::unique(b.begin(), b.end());
//    b.resize(itrb - b.begin());

//    if (a.size() == 1 && (*a.begin() == last)) {
//      a.pop_back();
//    }
//    if (b.size() == 1 && (*b.begin() == first)) {
//      b.pop_back();
//    }

//    if (a.size() > 1 && (*(a.end() - 1) == last)) {
//      a.pop_back();
//    }
//    if (b.size() > 1 && (*(b.end() - 1) == first)) {
//      b.pop_back();
//    }

//    std::string pred_first;
//    std::string pred_last;

//    pred_last.clear();
//    pred_first.clear();

//    for (auto unit : a) {
//      pred_last.insert(0, unit + ", ");
//    }

//    for (auto unit : b) {
//      pred_first.insert(0, unit + ", ");
//    }

//    if (pred_last.size() != 0) {
//      pred_last.erase(pred_last.end() - 1);
//      pred_last.erase(pred_last.end() - 1);
//      pred_last.insert(0, " (");
//      pred_last.append(")");
//    }

//    if (pred_first.size() != 0) {
//      pred_first.erase(pred_first.end() - 1);
//      pred_first.erase(pred_first.end() - 1);
//      pred_first.insert(0, " (");
//      pred_first.append(")");
//    }

//    if (last.size() == 0) {
//      last = "with unknown last name";
//    }
//    if (first.size() == 0) {
//      first = "with unknown first name";
//      first.swap(last);
//      pred_first.swap(pred_last);
//    }
//    return first + pred_first + " " + last + pred_last;
//  }

// private:
//  std::map<int, std::map<std::string, std::string>> data;
//};

//// int main() {
////    Person person("Polina", "Sergeeva", 1960);
////    for (int year : {1959, 1960}) {
////        cout << person.GetFullNameWithHistory(year) << endl;
////    }

////    person.ChangeFirstName(1965, "Appolinaria");
////    person.ChangeLastName(1967, "Ivanova");
////    for (int year : {1965, 1967}) {
////        cout << person.GetFullNameWithHistory(year) << endl;
////    }

////    return 0;
////}
