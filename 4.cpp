#include <iostream>

int main() {
    int num;

    std::cout << "Digite um n�mero: ";
    std::cin >> num;

    if (num % 2 == 0) {
        std::cout << num << " � par." << std::endl;
    } else {
        std::cout << num << " � �mpar." << std::endl;
    }

    return 0;
}

