//#include <math.h>
//#include <algorithm>
//#include <iostream>
//#include <stdexcept>
//#include <string>
//#include <unordered_map>
//#include <vector>
// using namespace std;

// template <typename T>
// std::ostream &operator<<(std::ostream &out, const std::vector<T> &data) {
//    for (auto unit = data.begin(); unit != data.end(); unit++) {
//        out << *unit;
//        if (unit != (data.end())) {
//            out << " ";
//        }
//    }
//    return out;
//}

// int main() {
//    size_t num_number;
//    std::cin >> num_number;
//    std::vector<int> temperaturs;

//    if (num_number <= 0 || num_number >= 10E6) {
//        return 0;
//    }

//    int64_t acum = 0;

//    try {
//        for (size_t i = 0; i < num_number; i++) {
//            int temp = 0;
//            std::cin >> temp;
//            temperaturs.push_back(temp);
//            acum += temp;
//        }

//        auto average = acum / static_cast<int64_t>(temperaturs.size());

//        std::vector<int> out;
//        std::for_each(temperaturs.begin(), temperaturs.end(), [&](auto unit) {
//            static int i = 0;
//            if (unit > average) {
//                out.push_back(i);
//            }
//            i++;
//        });

//        std::cout << out.size() << std::endl;
//        std::cout << out;

//    } catch (...) {
//        std::cout << "Oops exeption" << std::endl;
//    }

//    return 0;
//}
