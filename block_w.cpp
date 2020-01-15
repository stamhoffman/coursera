//#include <math.h>
//#include <algorithm>
//#include <iostream>
//#include <stdexcept>
//#include <string>
//#include <unordered_map>
//#include <vector>
// using namespace std;

// class Parallelepiped {
// public:
//  Parallelepiped(int a, int b, int c, int density) {
//    if (a < 0 || a > 10E4 || b < 0 || b > 10E4 || c < 0 || c > 10E4 ||
//        density < 0 || density > 100) {
//      a_ = 0;
//      b_ = 0;
//      c_ = 0;
//      density_ = 0;
//      weight_ = 0;
//    } else {
//      a_ = static_cast<uint32_t>(a);
//      b_ = static_cast<uint32_t>(b);
//      c_ = static_cast<uint32_t>(c);
//      density_ = static_cast<uint8_t>(density);
//      weight_ = (a_ * b_ * c_) * density_;
//    }
//  }

//  uint8_t GetDensity() { return density_; }
//  uint64_t GetWeight() { return weight_; }

//  ~Parallelepiped() {}

// private:
//  uint32_t a_;
//  uint32_t b_;
//  uint32_t c_;
//  uint8_t density_;
//  uint64_t weight_;
//};
