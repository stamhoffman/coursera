#ifndef CONFIG_H
#define CONFIG_H

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

size_t GetSizeMonate(const std::vector<std::vector<std::string>> &years);
void ADD(size_t day, std::string messeng,
         std::vector<std::vector<std::string>> &m);
void NEXT(std::vector<std::vector<std::string>> &m);
void DUMP(size_t day, std::vector<std::vector<std::string>> &m);

#endif  // CONFIG_H
