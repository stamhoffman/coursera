//#include <iostream>
//#include <stdexcept>
//#include <string>
//#include <vector>

// using namespace std;

// class Matrix {
// public:
//    Matrix() {
//        num_rows_ = 0;
//        num_cols_ = 0;
//    }
//    Matrix(int num_rows, int num_cols) {
//        if (num_rows < 0 || num_cols < 0) {
//            throw(std::out_of_range("Error num_rows_ < 0 || num_cols_"));
//        }
//        num_rows_ = num_rows;
//        num_cols_ = num_cols;
//        data.resize(GetNumRows());
//        for (auto &unit : data) {
//            unit.resize(GetNumColumns());
//        }
//    }

//    void Reset(int num_rows, int num_cols) {
//        num_cols_ = num_cols;
//        num_rows_ = num_rows;
//        data.resize(GetNumRows());
//        for (auto &unit : data) {
//            unit.resize(GetNumColumns());
//        }
//    }

//    int At(int num_rows, int num_cols) const {
//        if (data.size() == 0 || num_rows > num_rows_ || num_cols > num_cols_
//        ||
//            num_rows < 0 || num_cols < 0) {
//            throw(std::out_of_range(
//                "Error num_rows > num_rows_ || num_cols > num_cols_"));
//        }
//        return
//        data[static_cast<size_t>(num_rows)][static_cast<size_t>(num_cols)];
//    }
//    int &At(int num_rows, int num_cols) {
//        if (data.size() == 0 || num_rows > num_rows_ || num_cols > num_cols_
//        ||
//            num_rows < 0 || num_cols < 0) {
//            throw(std::out_of_range(
//                "Error num_rows > num_rows_ || num_cols > num_cols_"));
//        }
//        auto ret =
//            &data[static_cast<size_t>(num_rows)][static_cast<size_t>(num_cols)];
//        return *ret;
//    }

//    size_t GetNumRows() const { return static_cast<size_t>(num_rows_); }
//    size_t GetNumColumns() const { return static_cast<size_t>(num_cols_); }

//    friend std::ostream &operator<<(std::ostream &out, const Matrix &matrix);
//    friend std::istream &operator>>(std::istream &in, Matrix &matrix);
//    friend Matrix operator+(const Matrix &lhs, const Matrix &rhs);
//    friend bool operator==(const Matrix &lhs, const Matrix &rhs);

//    std::vector<std::vector<int>> data;

// private:
//    int num_rows_;
//    int num_cols_;
//};

// std::ostream &operator<<(std::ostream &out, const Matrix &matrix) {
//    out << matrix.GetNumRows() << " " << matrix.GetNumColumns() << std::endl;
//    for (size_t row_ = 0; row_ < matrix.GetNumRows(); row_++) {
//        for (size_t col_ = 0; col_ < matrix.GetNumColumns(); col_++) {
//            out << matrix.data[row_][col_];
//            if (col_ + 1 != matrix.GetNumColumns()) {
//                out << " ";
//            }
//        }
//        out << std::endl;
//    }
//    return out;
//}

// std::istream &operator>>(std::istream &in, Matrix &matrix_) {
//    std::string row;
//    std::string col;
//    std::getline(in, row, ' ');
//    std::getline(in, col);
//    Matrix matrix(std::atoi(row.data()), std::atoi(col.data()));
//    for (size_t row_ = 0; row_ < matrix.GetNumRows(); row_++) {
//        for (size_t col_ = 0; col_ < matrix.GetNumColumns(); col_++) {
//            in >> matrix.data[row_][col_];
//        }
//    }
//    matrix_ = matrix;
//    return in;
//}

// Matrix operator+(const Matrix &lhs, const Matrix &rhs) {
//    if (lhs.GetNumRows() != rhs.GetNumRows() ||
//        lhs.GetNumColumns() != rhs.GetNumColumns()) {
//        throw(out_of_range("Error range"));
//    }
//    Matrix matrix;
//    for (size_t row_ = 0; row_ < lhs.GetNumRows(); row_++) {
//        for (size_t col_ = 0; col_ < lhs.GetNumColumns(); col_++) {
//            matrix.data[row_][col_] = lhs.data[row_][col_] +
//            rhs.data[row_][col_];
//        }
//    }
//    return matrix;
//}

// bool operator==(Matrix &lhs, const Matrix &rhs) {
//    if (lhs.GetNumRows() == rhs.GetNumRows() &&
//        lhs.GetNumColumns() == rhs.GetNumColumns() && lhs.data == rhs.data) {
//        return true;
//    }
//    return false;
//}

//#include <stdint.h>

// int main() {
//    //  Matrix one;
//    //  Matrix two;

//    //  cin >> one >> two;
//    //  cout << one + two << endl;

//    int t0{0};
//    int16_t t1(1);
//    uint16_t t2(2);
//    int32_t t3(4);
//    uint32_t t4(4);
//    int64_t t5(5);
//    uint64_t t6(6);

//    std::cout << typeid(t2 + t3).name() << std::endl;
//    std::cout << typeid(t3).name() << std::endl;
//    std::cout << sizeof(int) << std::endl;

//    return 0;
//}
