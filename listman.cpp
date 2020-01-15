//#include <algorithm>
//#include <iostream>
//#include <string>
//#include <vector>

// using namespace std;

//#define NO_PANIK 0
//#define PANIK 1

// void WORRY(int i, std::vector<int> &list_man) { list_man[i] = PANIK; }

// void QUIET(int i, std::vector<int> &list_man) { list_man[i] = NO_PANIK; }

// void COME(int k, std::vector<int> &list_man) {
//  if (k > 0) {
//    for (int i = 0; i < k; i++) {
//      list_man.push_back(NO_PANIK);
//    }
//  }
//  if (k < 0) {
//    for (int i = k; i < 0; i++) {
//      list_man.pop_back();
//    }
//  }
//  list_man.resize(list_man.size() + k);
//}

// int WORRY_COUNT(const std::vector<int> &list_man) {
//  int count = 0;
//  for (auto unit : list_man) {
//    if (unit == 1) {
//      count++;
//    }
//  }
//  return count;
//}

// int main() {
//  int Q = 0;
//  std::string type_opr;
//  std::string arg_opr;
//  std::string input_str;

//  std::vector<int> list_man;

//  std::cin >> Q;
//  for (int numb_opr = 0; numb_opr < Q; numb_opr++) {
//    std::cin >> type_opr;

//    if (type_opr == "WORRY") {
//      std::cin >> arg_opr;
//      WORRY(atoi(arg_opr.data()), list_man);
//      continue;
//    }
//    if (type_opr == "QUIET") {
//      std::cin >> arg_opr;
//      QUIET(atoi(arg_opr.data()), list_man);
//      continue;
//    }
//    if (type_opr == "COME") {
//      std::cin >> arg_opr;
//      COME(atoi(arg_opr.data()), list_man);
//      continue;
//    }
//    if (type_opr == "WORRY_COUNT") {
//      std::cout << WORRY_COUNT(list_man) << std::endl;
//      continue;
//    }
//  }

//  return 0;
//}
