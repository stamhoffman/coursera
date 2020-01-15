#ifndef DICT_CAPITAL_COUNTRY_H
#define DICT_CAPITAL_COUNTRY_H

#include <iostream>
#include <map>
#include <string>
#include <vector>

int InputNumberRequest();
int InputNumberRequest(int num);
std::string InputPairString();
std::string InputPairString(std::string str);

bool CHANGE_CAPITAL(std::string country, std::string countrynew_capital,
                    std::map<std::string, std::string> &dict);
bool RENAME(std::string country, std::string new_name_country,
            std::map<std::string, std::string> &dict);
bool ABOUT(std::string coutry, std::map<std::string, std::string> &dict);
bool DUMP(std::map<std::string, std::string> &dict);

#endif  // DICT_CAPITAL_COUNTRY_H
