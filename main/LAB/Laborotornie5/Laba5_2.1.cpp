#include <iostream>
#include <fstream>
#include <cctype>

int main() {
    std::ifstream f("in2.txt");

    char s[256];
    f.getline(s, 256);
    f.close();

    char r[512];
    int j = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (!std::isdigit(s[i])) {
            r[j++] = s[i];

            if (std::isupper(s[i])) {
                r[j++] = std::tolower(s[i]);
            }
        }
    }

    r[j] = '\0';

    std::cout << "Результат: " << r << std::endl;

    return 0;
}