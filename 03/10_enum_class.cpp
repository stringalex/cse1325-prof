#include <iostream>
#include <vector>

enum Month {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
std::string to_string(Month month) {
    std::vector<std::string> v = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                                  "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    return v[month];
}

enum class Size {SMALL, MEDIUM, LARGE};
std::string to_string(Size size) {
    switch (size) {
        case Size::SMALL  : return "Small";
        case Size::MEDIUM : return "Medium";
        case Size::LARGE  : return "Large";
    }
    return "Unknown";
}

int main() {
    Month month = JUL;
    Size size = Size::MEDIUM;
    std::cout << to_string(month) << std::endl;
    std::cout << to_string(size) << std::endl;

    // C++ doesn't really support iterating over enum values...
    for(Month month=JAN; month<=DEC; month=(Month)((int)month+1)) std::cout << to_string(month) << ' ';
}
