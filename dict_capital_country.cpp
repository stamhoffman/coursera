//#include "dict_capital_country.h"

// int InputNumberRequest() {}

// int InputNumberRequest(int num) {}

// std::string InputPairString() {}

// std::string InputPairString(std::string str) {}

// bool CHANGE_CAPITAL(std::string country, std::string new_capital,
//                    std::map<std::string, std::string> &dict) {
//  if (dict.count(country) && dict[country] == new_capital) {
//    std::cout << "Country " + country + " hasn't changed its capital"
//              << std::endl;
//    return false;
//  }

//  if (dict.count(country) == 0) {
//    dict[country] = new_capital;
//    std::cout << "Introduce new country " + country + " with capital " +
//                     new_capital
//              << std::endl;
//    return true;
//  }
//  if (dict.count(country)) {
//    std::cout << "Country " + country + " has changed its capital from " +
//                     dict[country] + " to " + new_capital
//              << std::endl;
//    dict[country] = new_capital;
//    return true;
//  }
//  return false;
//}

// bool RENAME(std::string country, std::string new_country_name,
//            std::map<std::string, std::string> &dict) {
//  if (dict.count(new_country_name) || dict.count(country) == 0 ||
//      country == new_country_name || dict[country].size() == 0) {
//    std::cout << "Incorrect rename, skip" << std::endl;
//    return false;
//  }
//  auto buffer = dict[country];
//  if (buffer.size() != 0) {
//    std::cout << "Country " + country + " with capital " + dict[country] +
//                     " has been renamed to " + new_country_name
//              << std::endl;
//    dict[new_country_name] = buffer;
//    dict.erase(country);
//  }
//  return true;
//}

// bool ABOUT(std::string country, std::map<std::string, std::string> &dict) {
//  if (dict.count(country) == 0) {
//    std::cout << "Country " + country + " doesn't exist" << std::endl;
//    return false;
//  }
//  if (dict[country].size() != 0) {
//    std::cout << "Country " + country + " has capital " + dict[country]
//              << std::endl;
//  }
//  return true;
//}

// bool DUMP(std::map<std::string, std::string> &dict) {
//  if (dict.empty()) {
//    std::cout << "There are no countries in the world" << std::endl;
//    return false;
//  }
//  std::string ret;
//  for (auto unit : dict) {
//    ret.append(unit.first + "/" + unit.second + " ");
//  }
//  ret.resize(ret.size() - 1);
//  std::cout << ret << std::endl;
//}

//////#include <algorithm>
////#include <iostream>
////#include <map>
////#include <string>
////#include <vector>

//// using namespace std;

//// int main(int argc, char *argv[]) {
////    try {
////        int count = 0;
////        std::string cmd;
////        std::map<std::string, std::string> dict;
////        std::cin >> count;

////        for (auto i = 1; i <= count; i++) {
////            std::cin >> cmd;
////            if (cmd == "DUMP") {
////                if (dict.empty()) {
////                    std::cout << "There are no countries in the world" <<
////                    std::endl; continue;
////                }
////                std::string ret;
////                for (auto unit : dict) {
////                    ret.append(unit.first + "/" + unit.second + " ");
////                }
////                ret.resize(ret.size() - 1);
////                std::cout << ret << std::endl;
////                continue;
////            }

////            if (cmd == "ABOUT") {
////                std::string country;
////                std::string arg3;

////                std::cin >> country;
////                if (dict.count(country) == 0) {
////                    std::cout << "Country " + country + " doesn't exist" <<
////                    std::endl; continue;
////                }
////                if (dict.at(country).size() != 0) {
////                    std::cout << "Country " + country + " has capital " +
////                    dict.at(country)
////                              << std::endl;
////                    continue;
////                }
////            }

////            if (cmd == "RENAME") {
////                std::string country;
////                std::string new_country_name;
////                std::cin >> country >> new_country_name;
////                if (dict.count(new_country_name) || dict.count(country) == 0
////                ||
////                    country == new_country_name) {
////                    std::cout << "Incorrect rename, skip" << std::endl;
////                    continue;
////                }
////                auto buffer = dict.at(country);
////                if (buffer.size() != 0) {
////                    std::cout << "Country " + country + " with capital " +
////                            dict.at(country) + " has been renamed to " +
////                            new_country_name
////                              << std::endl;
////                    dict[new_country_name] = buffer;
////                    dict.erase(country);
////                    continue;
////                }
////            }

////            if (cmd == "CHANGE_CAPITAL") {
////                std::string country;
////                std::string new_capital;

////                std::cin >> country >> new_capital;
////                {
////                    if (dict.count(country) == 0) {
////                        dict[country] = new_capital;
////                        std::cout << "Introduce new country " + country + "
////                        with capital " +
////                                new_capital
////                                  << std::endl;
////                        continue;
////                    }

////                    if (dict.count(country) && dict.at(country) ==
////                    new_capital) {
////                        std::cout << "Country " + country + " hasn't changed
////                        its capital"
////                                  << std::endl;
////                        continue;
////                    }

////                    if (dict.count(country) && dict.at(country) !=
////                    new_capital) {
////                        std::cout << "Country " + country +
////                                " has changed its capital from " +
////                                dict.at(country) + " to " + new_capital
////                                  << std::endl;
////                        dict[country] = new_capital;
////                        continue;
////                    }
////                }
////            }
////        }

////    } catch (...) {
////    }

////    return 0;
////}
