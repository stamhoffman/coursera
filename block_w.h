//#include <math.h>
//#include <algorithm>
//#include <iomanip>
//#include <iostream>
//#include <limits>
//#include <stdexcept>
//#include <vector>

// using namespace std;

// class Parallelepiped {
// public:
//    Parallelepiped(int a, int b, int c, int density) {
//        if (a < int(0) || a > 10000 || b < int(0) || b > 10000 || c < int(0)
//        ||
//            c > 10000 || density < int(0) || density > 100) {
//            a_ = 0;
//            b_ = 0;
//            c_ = 0;
//            density_ = 0;
//            weight_ = 0;
//        } else {
//            a_ = static_cast<unsigned long long>(a);
//            b_ = static_cast<unsigned long long>(b);
//            c_ = static_cast<unsigned long long>(c);
//            density_ = static_cast<uint8_t>(density);
//            unsigned long long foo = a_ * b_;
//            weight_ = foo * c_ * density_;
//        }
//    }
//    unsigned long long GetWeight() { return weight_; }

//    ~Parallelepiped() {}

// private:
//    unsigned long long a_;
//    unsigned long long b_;
//    unsigned long long c_;
//    unsigned long long density_;
//    unsigned long long weight_;
//};

// int main() {
//    try {
//        int number_blok = 0;
//        int density = 0;
//        std::cin >> number_blok >> density;
//        if (number_blok < int(0) || number_blok > 100000 || density < int(0)
//        ||
//            density > 100) {
//            return 0;
//        }

//        std::vector<Parallelepiped> data;

//        for (size_t i = 0; i < static_cast<size_t>(number_blok); i++) {
//            int a = 0;
//            int b = 0;
//            int c = 0;
//            std::cin >> a >> b >> c;
//            data.push_back({a, b, c, density});
//        }
//        unsigned long long acum = 0;
//        std::for_each(data.begin(), data.end(),
//                      [&](auto unit) { acum += unit.GetWeight(); });
//        std::cout << acum;
//    } catch (...) {
//        std::cout << "Oops exeption" << std::endl;
//    }

//    return 0;
//}
