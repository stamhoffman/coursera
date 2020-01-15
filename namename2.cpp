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
//  void ChangeFirstName(int year, const string &first_name) {
//    data[year]["first_name"] = first_name;
//  }

//  void ChangeLastName(int year, const string &last_name) {
//    data[year]["last_name"] = last_name;
//  }

//  std::string GetFullName(int year) {
//    if (data.size() == 0 || year < data.begin()->first) {
//      return "Incognito";
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

//  void getHistory(std::string last, std::string first, int year) {
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
//  }

//  string GetFullNameWithHistory(int year) {
//    // получить все имена и фамилии по состоянию на конец года year
//    if (data.size() == 0 || year < data.begin()->first) {
//      return "Incognito";
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

//    getHistory(last, first, year);

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
//  std::string pred_first;
//  std::string pred_last;
//};

//// int main() {
////  Person person;
////  person.ChangeFirstName(1900, "Evgenychka");
////  person.ChangeFirstName(1901, "Evgenychka");
////  person.ChangeFirstName(1901, "Evgenychka");
////  person.ChangeLastName(1900, "Sokolov");
////  person.ChangeLastName(1910, "Sokolov");
////  person.ChangeLastName(1911, "Suvorov");
////  person.ChangeLastName(1912, "Sokolov");
////  person.ChangeLastName(1913, "Sokolov");
////  person.ChangeFirstName(1920, "Evgeny");
////  person.ChangeFirstName(1921, "Evgeny");
////  person.ChangeFirstName(1922, "Evgeny");
////  person.ChangeFirstName(1920, "Evgeny");
////  person.ChangeLastName(1930, "Sokolov");
////  person.ChangeLastName(1931, "Sokolov");
////  person.ChangeLastName(1932, "Sokolov");
////  person.ChangeLastName(1934, "Sokolov");
////  cout << person.GetFullNameWithHistory(1940) << endl;

////  return 0;
////}
