#include <iostream>

int main() {
    // Declara��o da vari�vel para armazenar o valor de investimento
    float valor_investimento;

    // Solicita ao usu�rio que insira o valor de investimento
    std::cout << "Digite o valor do investimento: R$ ";
    std::cin >> valor_investimento;

    // Verifica se o valor de investimento � maior que R$ 10.000,00
    if(valor_investimento > 10000.00) {
        // Se for maior, imprime "Investimento Alto"
        std::cout << "Investimento Alto" << std::endl;
    } else {
        // Caso contr�rio, imprime "Investimento Baixo"
        std::cout << "Investimento Baixo" << std::endl;
    }

    return 0;
}

