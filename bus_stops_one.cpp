//#include <algorithm>
//#include <iostream>
//#include <map>
//#include <regex>
//#include <set>
//#include <string>
//#include <vector>

// using namespace std;

// void NEW_BUS(string bus, vector<string> stops,
//             std::map<std::string, std::vector<std::string>> &base_bus,
//             std::map<std::string, std::vector<std::string>> &base_stops) {
//  base_bus[bus] = stops;
//  for (auto stop : stops) {
//    base_stops[stop].push_back(bus);
//  }
//}

// int BUSES_FOR_STOP(
//    string stop, std::map<std::string, std::vector<std::string>> &base_stops)
//    {
//  if (base_stops.count(stop)) {
//    for (auto bus : base_stops.at(stop)) {
//      std::cout << bus;
//      if (bus != *(base_stops.at(stop).end() - 1)) {
//        std::cout << " ";
//      } else {
//        std::cout << std::endl;
//      }
//    }
//  } else {
//    std::cout << "No stop" << std::endl;
//    return -1;
//  }
//  return 0;
//}

// int STOPS_FOR_BUS(string bus,
//                  std::map<std::string, std::vector<std::string>> &base_bus,
//                  std::map<std::string, std::vector<std::string>> &base_stops)
//                  {
//  if (base_bus.size() == 0 || base_bus.count(bus) == 0) {
//    std::cout << "No bus" << std::endl;
//    return -1;
//  }
//  for (auto stop : base_bus[bus]) {
//    std::cout << "Stop " << stop << ": ";
//    if ((base_stops.at(stop).size() == 1 && base_stops.at(stop)[0] == bus)) {
//      std::cout << "no interchange" << std::endl;
//      continue;
//    }

//    std::vector<string> buffer;

//    for (auto bus_ : base_stops[stop]) {
//      if (bus_ != bus) {
//        buffer.push_back(bus_);
//      } else {
//        continue;
//      }
//    }

//    for (auto unit = buffer.begin(); unit != buffer.end(); unit++) {
//      std::cout << *unit;
//      if (unit != (buffer.end() - 1)) std::cout << " ";
//    }

//    std::cout << std::endl;
//  }
//  return 0;
//}

// int ALL_BUSES(std::map<std::string, std::vector<std::string>> &base_bus) {
//  if (base_bus.size() == 0) {
//    std::cout << "No buses" << std::endl;
//    return -1;
//  } else {
//    for (auto bus : base_bus) {
//      std::cout << "Bus " << bus.first << ": ";
//      for (auto stop : bus.second) {
//        std::cout << stop;
//        if (stop != *(bus.second.end() - 1)) {
//          std::cout << " ";
//        } else {
//          std::cout << std::endl;
//        }
//      }
//    }
//  }
//  return 0;
//}

// int main_() {
//  int count;
//  std::string cmd;
//  std::map<std::string, std::vector<std::string>> base_bus;
//  std::map<std::string, std::vector<std::string>> base_stop;

//  std::cin >> count;
//  for (auto unit = 0; unit != count; unit++) {
//    std::cin >> cmd;
//    if (cmd == "NEW_BUS") {
//      std::string bus;
//      std::string number_stop;
//      std::string stop;
//      std::vector<std::string> params;

//      std::cin >> bus;
//      std::cin >> number_stop;

//      for (auto i = 0; i != std::atoi(number_stop.data()); i++) {
//        std::cin >> stop;
//        params.push_back(stop);
//      }
//      NEW_BUS(bus, params, base_bus, base_stop);
//      continue;
//    }
//    if (cmd == "BUSES_FOR_STOP") {
//      std::string stop;
//      std::cin >> stop;
//      BUSES_FOR_STOP(stop, base_stop);
//      continue;
//    }
//    if (cmd == "STOPS_FOR_BUS") {
//      std::string bus;
//      std::cin >> bus;
//      STOPS_FOR_BUS(bus, base_bus, base_stop);
//      continue;
//    }
//    if (cmd == "ALL_BUSES") {
//      ALL_BUSES(base_bus);
//      continue;
//    }
//  }
//  return 0;
//}
