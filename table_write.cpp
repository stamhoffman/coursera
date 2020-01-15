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

// int main_table_write(int argc, char *argv[]) {
//  std::ifstream input;
//  input.open("input.txt");
//  if (!input.is_open()) {
//    std::cerr << "Error open file" << std::endl;
//  }

//  std::string buffer;
//  int m = 0;
//  int n = 0;

//  input >> m;
//  input >> n;

//  for (auto i = 0; i < m; i++) {
//    for (auto j = 0; j < n; j++) {
//      int b;
//      input >> b;
//      input.ignore(1);
//      std::cout << std::setw(10) << b;
//      if (j != n - 1) {
//        std::cout << ' ';
//      }
//    }
//    if (i != m - 1) {
//      std::cout << std::endl;
//    }
//  }

//  return 0;
//}
