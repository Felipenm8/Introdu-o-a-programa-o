#include <iostream>

int main() {
    char operacao;
    double num1, num2;

    std::cout << "Digite uma opera��o (+, -, *, /): ";
    std::cin >> operacao;

    std::cout << "Digite o primeiro n�mero: ";
    std::cin >> num1;

    std::cout << "Digite o segundo n�mero: ";
    std::cin >> num2;

    switch (operacao) {
        case '+':
            std::cout << "Resultado: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Resultado: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Resultado: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Resultado: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Erro: Divis�o por zero!" << std::endl;
            }
            break;
        default:
            std::cout << "Opera��o inv�lida!" << std::endl;
            break;
    }

    return 0;
}

