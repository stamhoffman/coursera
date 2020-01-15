//#include <algorithm>
//#include <iostream>
//#include <vector>
// using namespace std;

// class FunctionPart {
// public:
//  FunctionPart(char operations, double value) {
//    operations_ = operations;
//    value_ = value;
//  }
//  double Apply(double source_value) const {
//    if (operations_ == '+') {
//      return source_value + value_;
//    } else if (operations_ == '-') {
//      return source_value - value_;
//    } else if (operations_ == '*') {
//      return source_value * value_;
//    } else {
//      return source_value / value_;
//    }
//  }

//  void Invert() {
//    if (operations_ == '+') {
//      operations_ = '-';
//    } else if (operations_ == '-') {
//      operations_ = '+';
//    } else if (operations_ == '*') {
//      operations_ = '/';
//    } else {
//      operations_ = '*';
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
//  function.AddPart('*', params.a);
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
