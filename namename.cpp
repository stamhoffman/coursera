//#include "namename.h"

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

//  string GetFullNameWithHistory(int year) {
//    // получить все имена и фамилии по состоянию на конец года year
//    if (data.size() == 0 || year < data.begin()->first) {
//      return "Incognito";
//    }

//    std::string pred_first;
//    std::string pred_last;

//    std::string last;
//    std::string first;
//    for (auto unit : data) {
//      if (unit.first > year) {
//        break;
//      }
//      if (unit.second["last_name"].size() != 0) {
//        last = unit.second["last_name"];
//        pred_last.insert(0, unit.second["last_name"] + ", ");
//      }
//      if (unit.second["first_name"].size() != 0) {
//        first = unit.second["first_name"];
//        pred_first.insert(0, unit.second["first_name"] + ", ");
//      }
//    }

//    if (pred_last.size() != 0) {
//      pred_last.erase(pred_last.end() - 1);
//      pred_last.erase(pred_last.end() - 1);
//      pred_last.insert(0, " (");
//      pred_last.append(") ");
//    }

//    if (pred_first.size() != 0) {
//      pred_first.erase(pred_first.end() - 1);
//      pred_first.erase(pred_first.end() - 1);
//      pred_first.insert(0, " (");
//      pred_first.append(") ");
//    }

//    if (last.size() == 0) {
//      last = "with unknown last name";
//    }
//    if (first.size() == 0) {
//      first = "with unknown first name";
//      first.swap(last);
//    }
//    return first + pred_first + " " + last + pred_last;
//  }

// private:
//  std::map<int, std::map<std::string, std::string>> data;
//};
// int main() {
//  Person person;

//  person.ChangeFirstName(1965, "Polina");
//  person.ChangeLastName(1967, "Sergeeva");
//  for (int year : {1900, 1965, 1990}) {
//    cout << person.GetFullNameWithHistory(year) << endl;
//  }

//  person.ChangeFirstName(1970, "Appolinaria");
//  for (int year : {1969, 1970}) {
//    cout << person.GetFullNameWithHistory(year) << endl;
//  }

//  person.ChangeLastName(1968, "Volkova");
//  for (int year : {1969, 1970}) {
//    cout << person.GetFullNameWithHistory(year) << endl;
//  }

//  person.ChangeFirstName(1990, "Polina");
//  person.ChangeLastName(1990, "Volkova-Sergeeva");
//  cout << person.GetFullNameWithHistory(1990) << endl;

//  person.ChangeFirstName(1966, "Pauline");
//  cout << person.GetFullNameWithHistory(1966) << endl;

//  person.ChangeLastName(1960, "Sergeeva");
//  for (int year : {1960, 1967}) {
//    cout << person.GetFullNameWithHistory(year) << endl;
//  }

//  person.ChangeLastName(1961, "Ivanova");
//  cout << person.GetFullNameWithHistory(1967) << endl;

//  return 0;
//}
