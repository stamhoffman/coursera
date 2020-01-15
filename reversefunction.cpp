//#include <algorithm>
//#include <fstream>
//#include <iostream>
//#include <iterator>
//#include <map>
//#include <set>
//#include <string>
//#include <vector>

// using namespace std;

// struct Image {
//  double quality;
//  double freshness;
//  double rating;
//};

// struct Params {
//  double a;
//  double b;
//  double c;
//};

// class FunctionPart {
// public:
//  FunctionPart(char operations, double value) {
//    operations_ = operations;
//    value_ = value;
//  }
//  double Apply(double source_value) const {
//    if (operations_ == '+') {
//      return source_value + value_;
//    } else {
//      return source_value - value_;
//    }
//  }
//  void Invert() {
//    if (operations_ == '+') {
//      operations_ = '-';
//    } else {
//      operations_ = '+';
//    }
//  }

// private:
//  char operations_;
//  double value_;
//};

// class Function {
// public:
//  Function() {}
//  void AddPart(char operation, double val) {
//    parts.push_back({operation, val});
//  }
//  double Apply(double val) const {
//    for (const FunctionPart& part : parts) {
//      val = part.Apply(val);
//    }
//    return val;
//  }
//  void Invert() {
//    for (FunctionPart& part : parts) {
//      part.Invert();
//    }
//    std::reverse(begin(parts), end(parts));
//  }

// private:
//  std::vector<FunctionPart> parts;
//};

// Function MakeWeightFunction(const Params& params, const Image& image) {
//  Function function;
//  function.AddPart('-', image.freshness * params.a + params.b);
//  function.AddPart('+', image.rating * params.c);
//  return function;
//}

// double ComputeImageWeight(const Params& params, const Image& image) {
//  Function function = MakeWeightFunction(params, image);
//  return function.Apply(image.quality);
//}

// double ComputeQualityByWeight(const Params& params, const Image& image,
//                              double weight) {
//  Function function = MakeWeightFunction(params, image);
//  function.Invert();
//  return function.Apply(weight);
//}

// int main() {
//    Image image = {10, 2, 6};
//    Params params = {4, 2, 6};
//    cout << ComputeImageWeight(params, image) << endl;
//    cout << ComputeQualityByWeight(params, image, 46) << endl;
//    return 0;
//}

// int main() {
//    Image image = {10, 2, 6};
//    Params params = {4, 2, 6};
//    // 10 - 2 * 4 - 2 + 6 * 6 = 36
//    cout << ComputeQualityByWeight(params, image, 46) << endl;

//    return 0;
//}
