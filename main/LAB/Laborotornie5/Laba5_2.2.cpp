#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

int main() {
    std::ifstream f("in2.txt");

    std::string s;
    std::getline(f, s);
    f.close();

    std::string r = "";

    for (char c : s) {
        if (!std::isdigit(c)) {
            r += c;

            if (std::isupper(c)) {
                r += std::tolower(c);
            }
        }
    }

    std::cout << "Результат: " << r << std::endl;

    return 0;
}