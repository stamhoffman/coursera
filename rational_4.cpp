//#include <iostream>
//#include <map>
//#include <set>
//#include <sstream>
//#include <string>
//#include <vector>
// using namespace std;

// class Rational {
// public:
//    Rational() {
//        numerator_ = 0;
//        denominator_ = 1;
//    }

//    void SetNum(const int num) { numerator_ = num; }
//    void SetDen(const int num) { denominator_ = num; }

//    bool operator==(const Rational &rhs) {
//        if (rhs.numerator_ == numerator_ && rhs.denominator_ == denominator_)
//        {
//            return true;
//        } else {
//            return false;
//        }
//    }

//    Rational operator+(const Rational &rhs) {
//        if (denominator_ == rhs.Denominator())
//            return Rational(numerator_ + rhs.Numerator(), denominator_);

//        return Rational(
//            numerator_ * rhs.Denominator() + rhs.Numerator() * denominator_,
//            denominator_ * rhs.Denominator());
//    }

//    Rational operator-(const Rational &rhs) {
//        if (denominator_ == rhs.Denominator())
//            return Rational(numerator_ - rhs.Numerator(), denominator_);

//        return Rational(
//            numerator_ * rhs.Denominator() - rhs.Numerator() * denominator_,
//            denominator_ * rhs.Denominator());
//    }

//    Rational operator*(const Rational &rhs) {
//        return Rational(numerator_ * rhs.numerator_,
//                        denominator_ * rhs.denominator_);
//    }

//    Rational operator/(const Rational &rhs) {
//        return Rational(numerator_ * rhs.denominator_,
//                        denominator_ * rhs.numerator_);
//    }

//    friend std::ostream &operator<<(std::ostream &out, const Rational &rat);
//    friend std::istream &operator>>(std::istream &in, Rational &rat);

//    Rational(int numerator, int denominator) {
//        auto nod = [](int a, int b) {
//            if (a < 0) a = -a;
//            if (b < 0) b = -b;
//            if (a == 0 || b == 0) return 1;
//            for (int i = a; i >= 2; i--) {
//                if (a % i == 0) {
//                    if (b % i == 0) {
//                        return i;
//                    }
//                }
//            }
//            return 1;
//        };

//        if (numerator == 0) {
//            denominator = 1;
//        }

//        if (denominator < 0) {
//            denominator = -denominator;
//            numerator = -numerator;
//        }

//        denominator_ = denominator / nod(numerator, denominator);
//        numerator_ = numerator / nod(numerator, denominator);
//    }

//    int Numerator() const { return numerator_; }

//    int Denominator() const { return denominator_; }

// private:
//    int numerator_;
//    int denominator_;
//};

// std::ostream &operator<<(std::ostream &out, const Rational &rat) {
//    out << rat.Numerator() << "/" << rat.Denominator();
//    return out;
//}
// std::istream &operator>>(std::istream &in, Rational &rat) {
//    std::string numerator;
//    std::string denominator;
//    std::string err;
//    std::getline(in, numerator, '/');
//    std::getline(in, denominator, ' ');
//    if (std::atoi(denominator.data()) != 0 &&
//        std::atoi(denominator.data()) != 0) {
//        Rational rat_(std::atoi(numerator.data()),
//        std::atoi(denominator.data())); rat = rat_;
//    }

//    return in;
//}

// bool operator<(const Rational &lhs, const Rational &rhs) {
//    double n = (double)lhs.Numerator() / (double)lhs.Denominator();
//    double m = (double)rhs.Numerator() / (double)rhs.Denominator();
//    if (n < m) {
//        return true;
//    } else {
//        return false;
//    }
//}

// bool operator==(const Rational &lhs, const Rational &rhs) {
//    if (lhs.Numerator() == rhs.Numerator() &&
//        lhs.Denominator() == rhs.Denominator()) {
//        return true;
//    } else {
//        return false;
//    }
//}
// int main() {
//    {
//        ostringstream output;
//        output << Rational(-6, 8);
//        if (output.str() != "-3/4") {
//            cout << "Rational(-6, 8) should be written as \"-3/4\"" << endl;
//            return 1;
//        }
//    }

//    {
//        istringstream input("5/7");
//        Rational r;
//        input >> r;
//        bool equal = r == Rational(5, 7);
//        if (!equal) {
//            cout << "5/7 is incorrectly read as " << r << endl;
//            return 2;
//        }
//    }

//    {
//        istringstream input("5/7 5/4");
//        Rational r1, r2;
//        input >> r1 >> r2;
//        bool correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
//        if (!correct) {
//            cout << "Multiple values are read incorrectly: " << r1 << " " <<
//            r2
//                 << endl;
//            return 3;
//        }

//        input >> r1;
//        input >> r2;
//        correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
//        if (!correct) {
//            cout << "Read from empty stream shouldn't change arguments: " <<
//            r1 << " "
//                 << r2 << endl;
//            return 4;
//        }
//    }

//    cout << "OK" << endl;
//    return 0;
//}
