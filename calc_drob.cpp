//#include <iostream>
//#include <map>
//#include <set>
//#include <sstream>
//#include <stdexcept>
//#include <string>
//#include <vector>

// using namespace std;

// int GreatestCommonDivisor(int a, int b) {
//  if (b == 0) {
//    return a;
//  } else {
//    return GreatestCommonDivisor(b, a % b);
//  }
//}

// class Rational {
// public:
//  Rational() {  // дробь по умолчанию — 0/1
//    numerator = 0;
//    denominator = 1;
//  }
//  Rational(int new_numerator, int new_denominator) {
//    const int gcd = GreatestCommonDivisor(new_numerator, new_denominator);
//    // сократим дробь, разделив числитель и знаменатель на их НОД
//    numerator = new_numerator / gcd;
//    denominator = new_denominator / gcd;
//    // знаменатель должен быть положительным
//    if (denominator < 0) {
//      denominator = -denominator;
//      numerator = -numerator;
//    }
//  }

//  int Numerator() const { return numerator; }

//  int Denominator() const { return denominator; }

// private:
//  int numerator;
//  int denominator;
//};

// bool operator==(const Rational &lhs, const Rational &rhs) {
//  return lhs.Numerator() == rhs.Numerator() &&
//         lhs.Denominator() == rhs.Denominator();
//}

// Rational operator+(const Rational &lhs, const Rational &rhs) {
//  return {
//      lhs.Numerator() * rhs.Denominator() + rhs.Numerator() *
//      lhs.Denominator(), lhs.Denominator() * rhs.Denominator()};
//}

// Rational operator-(const Rational &lhs, const Rational &rhs) {
//  return {
//      lhs.Numerator() * rhs.Denominator() - rhs.Numerator() *
//      lhs.Denominator(), lhs.Denominator() * rhs.Denominator()};
//}

// Rational operator*(const Rational &lhs, const Rational &rhs) {
//  return {lhs.Numerator() * rhs.Numerator(),
//          lhs.Denominator() * rhs.Denominator()};
//}

// Rational operator/(const Rational &lhs, const Rational &rhs) {
//  if (rhs.Numerator() == 0) throw std::domain_error("Division by zero");
//  return lhs * Rational(rhs.Denominator(), rhs.Numerator());
//}

// istream &operator>>(istream &is, Rational &r) {
//  int n, d;
//  char c;
//  is >> n >> c >> d;
//  if (d == 0) throw std::invalid_argument("Invalid argument");
//  if (is && c == '/') {
//    r = Rational(n, d);
//  }
//  return is;
//}

// ostream &operator<<(ostream &os, const Rational &r) {
//  return os << r.Numerator() << '/' << r.Denominator();
//}

// bool operator<(const Rational &lhs, const Rational &rhs) {
//  return (lhs - rhs).Numerator() < 0;
//}

// int main() {
//  try {
//    char op;
//    Rational a;
//    Rational b;
//    std::cin >> a >> op >> b;

//    switch (op) {
//      case '+': {
//        if (op == '+') std::cout << a + b << std::endl;
//      } break;
//      case '-': {
//        if (op == '-') std::cout << a - b << std::endl;
//      } break;
//      case '*': {
//        if (op == '*') std::cout << a * b << std::endl;
//      } break;
//      case '/': {
//        if (op == '/') std::cout << a / b << std::endl;
//      } break;
//      default: {
//        return 0;
//      }
//    }

//  } catch (std::domain_error &err) {
//    std::cout << err.what() << std ::endl;
//  } catch (std::invalid_argument &err) {
//    std::cout << err.what() << std::endl;
//  } catch (...) {
//    std::cout << "Unkow error" << std::endl;
//  }
//}
