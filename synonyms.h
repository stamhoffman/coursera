#ifndef SYNONYMS_H
#define SYNONYMS_H

#include <iostream>
#include <map>
#include <set>
#include <string>

int ADD(std::string s1, std::string s2,
        std::map<std::string, std::set<std::string>> &data);
int COUNT(std::string word, std::map<std::string, std::set<std::string>> &data);
int CHECK(std::string s1, std::string s2,
          std::map<std::string, std::set<std::string>> &data);

int main_synonyms();

#endif  // SYNONYMS_H
