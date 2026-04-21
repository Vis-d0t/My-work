#include <iostream>
#include <fstream>
#include <cstring> // вариант 3

int main() {
    char s[256];

    std::cout << "Введите строку: ";
    std::cin.getline(s, 256);

    int n = std::strlen(s);
    int k = 0; // количество слов

    // подсчет слов
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            k++;
        }
    }

    std::cout << "Количество слов: " << k << std::endl;

    char c;
    std::cout << "Введите букву: ";
    std::cin >> c;

    std::ofstream f("out1.txt");

    int i = 0;
    while (i < n) {
        while (i < n && s[i] == ' ') i++;

        int st = i;

        while (i < n && s[i] != ' ') i++;

        int en = i;

        if (st < n && (s[st] == c || s[st] == c + 32)) {
            for (int j = st; j < en; j++) {
                f << s[j];
            }
            f << std::endl;
        }
    }

    f.close();
    std::cout << "Слова записаны в файл out1.txt" << std::endl;

    return 0;
}