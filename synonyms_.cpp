#include <iostream>
#include <map>
#include <set>
#include <string>
#include "synonyms.h"

// int ADD(std::string s1, std::string s2,
//        std::map<std::string, std::string> &data) {
//    if (!data.count(s1)) data[s1] = s2;
//    if (!data.count(s2)) data[s2] = s1;
//}

// int COUNT(std::string word, std::map<std::string, std::string> &data) {
//    int count = 0;
//    for (auto unit : data) {
//        if (unit.second == word) {
//            count++;
//        }
//    }
//    std::cout << count << std::endl;
//    return count;
//}

// int CHECK(std::string s1, std::string s2,
//          std::map<std::string, std::string> &data) {
//    for (auto unit : data) {
//        if (unit.first == s1) {
//            if (unit.second == s2) {
//                std::cout << "YES" << std::endl;
//                return 0;
//            }
//        }
//        if (unit.first == s2) {
//            if (unit.second == s1) {
//                std::cout << "YES" << std::endl;
//                return 0;
//            }
//        }
//    }
//    std::cout << "NO" << std::endl;
//}

// int main_synonyms() {
//    std::map<std::string, std::string> data;
//    int count_cmd = 0;
//    std::cin >> count_cmd;
//    while (count_cmd--) {
//        std::string cmd;

//        std::cin >> cmd;

//        if (cmd == "ADD") {
//            std::string s1;
//            std::string s2;
//            std::cin >> s1 >> s2;
//            ADD(s1, s2, data);
//            continue;
//        }

//        if (cmd == "CHECK") {
//            std::string s1;
//            std::string s2;
//            std::cin >> s1 >> s2;
//            std::set<std::string> synomus{s1, s2};
//            CHECK(s1, s2, data);
//            continue;
//        }

//        if (cmd == "COUNT") {
//            std::string s;
//            std::cin >> s;
//            COUNT(s, data);
//            continue;
//        }
//    }
//    return 0;
//}
