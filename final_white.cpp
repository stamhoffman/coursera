//#include <iostream>
//#include <map>
//#include <set>
//#include <sstream>
//#include <stdexcept>
//#include <string>
//#include <vector>

// using namespace std;

// class Rational {
// public:
//  Rational() {
//    numerator_ = 0;
//    denominator_ = 1;
//  }

//  void SetNum(const int num) { numerator_ = num; }
//  void SetDen(const int num) { denominator_ = num; }

//  bool operator==(const Rational &rhs) {
//    if (rhs.numerator_ == numerator_ && rhs.denominator_ == denominator_) {
//      return true;
//    } else {
//      return false;
//    }
//  }

//  Rational operator+(const Rational &rhs) {
//    if (rhs.Numerator() == 0 && rhs.Denominator() == 1) {
//      throw std::invalid_argument("Invalid argument");
//    }
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
//    if (rhs.Numerator() == 0) throw std::domain_error("Division by zero");
//    return Rational(numerator_ * rhs.denominator_,
//                    denominator_ * rhs.numerator_);
//  }

//  friend std::ostream &operator<<(std::ostream &out, const Rational &rat);
//  friend std::istream &operator>>(std::istream &in, Rational &rat);

//  Rational(int numerator, int denominator) {
//    if (denominator == 0) throw std::invalid_argument("Invalid argument");

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
//  std::string numerator;
//  std::string denominator;
//  std::string err;
//  if (!in.eof()) {
//    std::getline(in, numerator, '/');
//    in >> denominator;
//    if (std::atoi(numerator.data()) != 0 &&
//        std::atoi(denominator.data()) != 0) {
//      Rational rat_(std::atoi(numerator.data()),
//      std::atoi(denominator.data())); rat = rat_;
//    }
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

// int main_white() {
//  try {
//    char op;
//    Rational a;
//    Rational b;
//    std::cin >> a;
//    std::cin >> op;
//    std::cin >> b;
//    if (op == '+') std::cout << a + b << std::endl;
//    if (op == '-') std::cout << a - b << std::endl;
//    if (op == '*') std::cout << a * b << std::endl;
//    if (op == '/') std::cout << a / b << std::endl;
//    std::cin.clear();
//  } catch (std::domain_error &err) {
//    std::cout << err.what() << std ::endl;
//  } catch (std::invalid_argument &err) {
//    std::cout << err.what() << std::endl;
//  } catch (...) {
//    std::cout << "Unkow error" << std::endl;
//  }
//}
