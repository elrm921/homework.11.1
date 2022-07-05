#include <iostream>
#include "greater.h"

int main() {
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    Greater::great(name);
}