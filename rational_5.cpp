//#include <iostream>
//#include <map>
//#include <set>
//#include <sstream>
//#include <string>
//#include <vector>
// using namespace std;

// class Rational {
// public:
//  Rational() {
//    numerator_ = 0;
//    denominator_ = 1;
//  }

//  void SetNum(int num) { numerator_ = num; }
//  void SetDen(int num) { denominator_ = num; }

//  bool operator==(const Rational &rhs) {
//    if (rhs.numerator_ == numerator_ && rhs.denominator_ == denominator_) {
//      return true;
//    } else {
//      return false;
//    }
//  }

//  Rational operator+(const Rational &rhs) {
//    if (denominator_ == rhs.Denominator())
//      return Rational(numerator_ + rhs.Numerator(), denominator_);

//    return Rational(
//        numerator_ * rhs.Denominator() + rhs.Numerator() * denominator_,
//        denominator_ * rhs.Denominator());
//  }

//  Rational operator-(const Rational &rhs) {
//    if (denominator_ == rhs.Denominator())
//      return Rational(numerator_ - rhs.Numerator(), denominator_);

//    return Rational(
//        numerator_ * rhs.Denominator() - rhs.Numerator() * denominator_,
//        denominator_ * rhs.Denominator());
//  }

//  Rational operator*(const Rational &rhs) {
//    return Rational(numerator_ * rhs.numerator_,
//                    denominator_ * rhs.denominator_);
//  }

//  Rational operator/(const Rational &rhs) {
//    return Rational(numerator_ * rhs.denominator_,
//                    denominator_ * rhs.numerator_);
//  }

//  friend std::ostream &operator<<(std::ostream &out, const Rational &rat);
//  friend std::istream &operator>>(std::istream &in, Rational &rat);

//  Rational(int numerator, int denominator) {
//    auto nod = [](int a, int b) {
//      if (a < 0) a = -a;
//      if (b < 0) b = -b;
//      if (a == 0 || b == 0) return 1;
//      for (int i = a; i >= 2; i--) {
//        if (a % i == 0) {
//          if (b % i == 0) {
//            return i;
//          }
//        }
//      }
//      return 1;
//    };

//    if (numerator == 0) {
//      denominator = 1;
//    }

//    if (denominator < 0) {
//      denominator = -denominator;
//      numerator = -numerator;
//    }

//    denominator_ = denominator / nod(numerator, denominator);
//    numerator_ = numerator / nod(numerator, denominator);
//  }

//  int Numerator() const { return numerator_; }

//  int Denominator() const { return denominator_; }

// private:
//  int numerator_;
//  int denominator_;
//};

// std::ostream &operator<<(std::ostream &out, const Rational &rat) {
//  out << rat.Numerator() << "/" << rat.Denominator();
//  return out;
//}
// std::istream &operator>>(std::istream &in, Rational &rat) {
//  int numerator = 0;
//  int denominator = 1;
//  if (!in.eof()) in >> numerator;
//  if (!in.eof()) in.ignore(1);
//  if (!in.eof()) in >> denominator;
//  if (numerator != 0) {
//    Rational rat_(numerator, denominator);
//    rat = rat_;
//  }

//  return in;
//}

// bool operator<(const Rational &lhs, const Rational &rhs) {
//  double n = (double)lhs.Numerator() / (double)lhs.Denominator();
//  double m = (double)rhs.Numerator() / (double)rhs.Denominator();
//  if (n < m) {
//    return true;
//  } else {
//    return false;
//  }
//}

// bool operator==(const Rational &lhs, const Rational &rhs) {
//  if (lhs.Numerator() == rhs.Numerator() &&
//      lhs.Denominator() == rhs.Denominator()) {
//    return true;
//  } else {
//    return false;
//  }
//}

// int main_5() {
//  {
//    const set<Rational> rs = {{1, 2}, {1, 25}, {3, 4}, {3, 4}, {1, 2}};
//    if (rs.size() != 3) {
//      cout << "Wrong amount of items in the set" << endl;
//      return 1;
//    }

//    vector<Rational> v;
//    for (auto x : rs) {
//      v.push_back(x);
//    }
//    if (v != vector<Rational>{{1, 25}, {1, 2}, {3, 4}}) {
//      cout << "Rationals comparison works incorrectly" << endl;
//      return 2;
//    }
//  }

//  {
//    map<Rational, int> count;
//    ++count[{1, 2}];
//    ++count[{1, 2}];

//    ++count[{2, 3}];

//    if (count.size() != 2) {
//      cout << "Wrong amount of items in the map" << endl;
//      return 3;
//    }
//  }

//  cout << "OK" << endl;
//  return 0;
//}
