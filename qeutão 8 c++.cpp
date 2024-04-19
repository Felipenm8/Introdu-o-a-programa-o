#include <iostream>
#include <cmath> // Inclui a biblioteca cmath para usar a função abs()

int main() {
    // Declaração da variável para armazenar o número
    float numero;

    // Solicita ao usuário que insira um número
    std::cout << "Digite um numero: ";
    std::cin >> numero;

    // Calcula e imprime o valor absoluto do número
    std::cout << "O valor absoluto do numero digitado eh: " << std::abs(numero) << std::endl;

    return 0;
}

