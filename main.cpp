#include <math.h>
#include <algorithm>
#include <array>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <set>
#include <stdexcept>
#include <tuple>
#include <vector>

using namespace std;

// template <typename T>
// T Sqr(T data);

// template <typename T>
// std::map<T, std::pair<T, T>> Sqr(std::map<T, std::pair<T, T>> data);

// template <typename T>
// std::vector<T> Sqr(std::vector<T> data);

// template <typename T>
// T Sqr(T data) {
//  return data * data;
//}

// template <typename T>
// std::vector<T> Sqr(std::vector<T> data) {
//  for (auto& unit : data) {
//    unit = unit * unit;
//  }
//  return data;
//}

// template <typename T>
// std::map<T, std::pair<T, T>> Sqr(std::map<T, std::pair<T, T>> data) {
//  for (auto& unit : data) {
//    unit.second.first = unit.second.first * unit.second.first;
//    unit.second.second = unit.second.second * unit.second.second;
//  }
//  return data;
//}

// template <typename T>
// std::ostream& operator<<(std::ostream& out, std::vector<T> data) {
//  for (auto unit : data) {
//    out << " " << unit;
//  }
//  return out;
//}

template <typename T>
T Sqr(T data);

template <typename type>
vector<type> Sqr(const vector<type>& vec);

template <typename key, typename value>
map<key, value> Sqr(const map<key, value>& m);

template <typename left, typename right>
pair<left, right> Sqr(const pair<left, right>& vec);

template <typename left, typename right>
pair<left, right> operator*(const pair<left, right>& l,
                            const pair<left, right>& r);

template <typename T>
T Sqr(T data) {
  return data * data;
}

template <typename T>
std::vector<T> Sqr(const vector<T>& data) {
  auto data_(data);
  for (auto& unit : data_) {
    unit = unit * unit;
  }
  return data_;
}

template <typename K, typename V>
pair<K, V> operator*(const pair<K, V>& lhr, const pair<K, V>& rhr) {
  return {lhr.first * rhr.first, lhr.second * lhr.second};
}

template <typename K, typename V>
map<K, V> Sqr(const map<K, V>& data) {
  auto data_(data);
  for (auto& unit : data_) {
    unit.second = unit.second * unit.second;
  }
  return data_;
}

template <typename left, typename right>
pair<left, right> Sqr(const pair<left, right>& vec) {
  return {vec.first * vec.first, vec.second * vec.second};
}

int main() {
  vector<int> v = {1, 2, 3};
  cout << "vector:";
  for (int x : Sqr(v)) {
    cout << ' ' << x;
  }
  cout << endl;

  map<int, pair<int, int>> map_of_pairs = {{4, {2, 2}}, {7, {4, 3}}};
  cout << "map of pairs:" << endl;
  for (const auto& x : Sqr(map_of_pairs)) {
    cout << x.first << ' ' << x.second.first << ' ' << x.second.second << endl;
  }
  return 0;
}
