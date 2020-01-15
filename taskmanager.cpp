//#include "taskmanager.h"

//#include <algorithm>
//#include <iostream>
//#include <string>
//#include <vector>

// size_t GetSizeMonate(const std::vector<std::vector<std::string>> &years) {
//  static size_t count_year = 0;
//  size_t cm = years.size() - count_year;

//  switch (cm) {
//    case 0: {
//    }
//      return 31;
//      ;
//    case 1: {
//    }
//      return 28;
//      ;
//    case 2: {
//    }
//      return 31;
//      ;
//    case 3: {
//    }
//      return 30;
//      ;
//    case 4: {
//    }
//      return 31;
//    case 5: {
//    }
//      return 30;
//      ;
//    case 6: {
//    }
//      return 31;
//      ;
//    case 7: {
//    }
//      return 31;
//      ;
//    case 8: {
//    }
//      return 30;
//      ;
//    case 9: {
//    }
//      return 31;
//      ;
//    case 10: {
//    }
//      return 30;
//      ;
//    case 11: {
//      count_year += 12;
//    }
//      return 31;
//  }
//  return 0;
//}

// void ADD(size_t day, std::string messeng,
//         std::vector<std::vector<std::string>> &m) {
//  m[m.size() - 1][day - 1].append(messeng + " ");
//}

// void NEXT(std::vector<std::vector<std::string>> &m) {
//  size_t next_size = GetSizeMonate(m);
//  std::vector<std::string> monate(next_size);
//  if (m[m.size() - 1].size() < next_size) {
//    std::copy(m[m.size() - 1].begin(), m[m.size() - 1].end(), monate.begin());
//  } else {
//    std::copy(m[m.size() - 1].begin(), m[m.size() - 1].begin() + next_size,
//              monate.begin());
//    for (auto i = next_size; i < m[m.size() - 1].size(); i++) {
//      auto delete_work = m[m.size() - 1][i];
//      monate[next_size - 1].append(delete_work);
//    }
//  }
//  m.push_back(monate);
//}

// void DUMP(size_t day, std::vector<std::vector<std::string>> &m) {
//  if (m[m.size() - 1][day - 1].size() == 0) {
//    std::cout << "0" << std::endl;
//  } else {
//    auto tasks = m[m.size() - 1][day - 1];
//    auto number_task = std::count(tasks.begin(), tasks.end(), ' ');
//    tasks.erase(tasks.size() - 1);
//    std::cout << number_task << " " << tasks << "\0" << std::endl;
//  }
//}
