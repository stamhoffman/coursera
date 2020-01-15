#ifndef BUS_STOPS_0_H
#define BUS_STOPS_0_H

#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

void NEW_BUS(string bus, vector<string> stops,
             std::map<std::string, std::vector<std::string>> &base_bus,
             std::map<std::string, std::vector<std::string>> &base_stops);

int BUSES_FOR_STOP(string stop,
                   std::map<std::string, std::vector<std::string>> &base_stops);

int STOPS_FOR_BUS(string bus,
                  std::map<std::string, std::vector<std::string>> &base_bus,
                  std::map<std::string, std::vector<std::string>> &base_stops);

int ALL_BUSES(std::map<std::string, std::vector<std::string>> &base_bus);

int main_();
#endif  // BUS_STOPS_0_H
