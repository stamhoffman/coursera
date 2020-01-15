//#include <iostream>
//#include <map>
//#include <set>
//#include <sstream>
//#include <stdexcept>
//#include <string>
//#include <vector>

// using namespace std;

// class Matrix {
// public:
//    Matrix() : num_rows_{0}, num_cols_{0} {}
//    Matrix(char num_rows, char num_cols)
//        : num_rows_(num_rows), num_cols_(num_cols) {
//        if (num_rows_ < 0 || num_cols_ < 0) {
//            throw(std::out_of_range("Error num_rows_ < 0 || num_cols_"));
//        }
//    }

//    void Reset(char num_rows, char num_cols) { data[num_rows][num_cols] = 0; }

//    double At(char num_rows, char num_cols) const {
//        if (num_rows > num_rows_ || num_cols > num_cols_) {
//            throw(std::out_of_range(
//                "Error num_rows > num_rows_ || num_cols > num_cols_"));
//        }
//        return data[num_rows][num_cols];
//    }
//    double &At(char num_rows, char num_cols) {
//        if (num_rows > num_rows_ || num_cols > num_cols_) {
//            throw(std::out_of_range(
//                "Error num_rows > num_rows_ || num_cols > num_cols_"));
//        }
//        return data[num_rows][num_cols];
//    }

//    friend Matrix &operator+(const Matrix lhs, const Matrix rhs);

//    ostream &operator << (const Matrix matrix, ostream &out)
//    {
//        if(!out.eof())
//        {
//            out <<
//      }
//    }

//    char GetNumRows() const { return num_rows_; }
//    char GetNumColumns() const { return num_cols_; }

// private:
//    const char num_rows_;
//    const char num_cols_;
//    std::vector<std::vector<double>> data;
//};

// int main() {
//    Matrix one;
//    Matrix two;

//    cin >> one >> two;
//    cout << one + two << endl;
//    return 0;
//}
