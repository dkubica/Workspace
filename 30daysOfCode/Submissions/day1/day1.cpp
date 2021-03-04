#include <iostream>
#include <iomanip>
#include <limits>


int main() {
    int i = 4;
    double d = 4.0;
    std::string s = "HackerRank ";

    int i_integer;
    double d_double;
    std::string s_string;

    std::cin >> i_integer >> d_double;
    std::getline(std::cin >> std::ws, s_string);
    std::cout << i + i_integer << std::endl;
    std::cout << std::fixed << std::setprecision(1) << d + d_double << std::endl;
    std::cout << s << s_string << std::endl;
    return 0;
}