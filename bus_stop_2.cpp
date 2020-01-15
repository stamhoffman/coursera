//#include "bus_stop_2.h"
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

int main() {
  int count_cmd = 0;
  std::cin >> count_cmd;
  std::map<std::set<std::string>, size_t> route;

  while (count_cmd--) {
    int stop_count;
    std::cin >> stop_count;
    std::set<std::string> stops;
    while (stop_count--) {
      std::string stop;
      std::cin >> stop;
      stops.insert(stop);
    }

    auto result = route.find(stops);
    if (result == route.end()) {
      auto size_r = route.size();
      route[stops] = static_cast<size_t>(size_r + 1);
      std::cout << "New bus " << size_r + 1 << std::endl;
    } else {
      std::cout << "Already exists for " << route.at(stops) << std::endl;
    }
  }
}
