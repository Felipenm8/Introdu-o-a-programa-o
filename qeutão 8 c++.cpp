#include <iostream>
#include <cmath> // Inclui a biblioteca cmath para usar a fun��o abs()

int main() {
    // Declara��o da vari�vel para armazenar o n�mero
    float numero;

    // Solicita ao usu�rio que insira um n�mero
    std::cout << "Digite um numero: ";
    std::cin >> numero;

    // Calcula e imprime o valor absoluto do n�mero
    std::cout << "O valor absoluto do numero digitado eh: " << std::abs(numero) << std::endl;

    return 0;
}

