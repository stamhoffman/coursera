//#include <time.h>
//#include <exception>
//#include <iostream>
//#include <string>
// using namespace std;

// enum ResponseTypes {
//    kOk = 0,          ///< сообщение принято
//    kNetErr = 1,      ///< сетевая ошибка
//    kUnknownErr = 2,  ///< неизвестная ошибка
//};

// std::string GetTime(ResponseTypes flag) {
//    switch (flag) {
//    case kOk: {
//        const time_t t = time(nullptr);
//        struct tm* date = localtime(&t);
//        auto hour = std::to_string(date->tm_hour);
//        auto min = std::to_string(date->tm_min);
//        auto sec = std::to_string(date->tm_sec);
//        return hour + ":" + min + ":" + sec;
//    }
//    case kNetErr: {
//        throw std::system_error(std::error_code());
//    }
//    case kUnknownErr: {
//        throw std::exception();
//    }
//    }

//    if (flag == kOk) {
//    }
//}

// string AskTimeServer() { /* return GetTime(ResponseTypes::kNetErr);*/
//}

// class TimeServer {
// public:
//    string GetCurrentTime() {
//        try {
//            std::string time;
//            time = AskTimeServer();
//            if (time.size() != 0) last_fetched_time = time;
//            return time;
//        } catch (std::system_error) {
//            return last_fetched_time;
//        } catch (...) {
//            throw;
//        }
//    }

// private:
//    string last_fetched_time = "00:00:00";
//};

// int main() {
//    TimeServer ts;
//    try {
//        cout << ts.GetCurrentTime() << endl;
//    } catch (exception& e) {
//        cout << "Exception got: " << e.what() << endl;
//    }
//    return 0;
//}  // 72 5
