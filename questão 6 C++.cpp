#include <iostream>

int main() {
    // Declaração das variáveis
    int numero_usuario; // Para armazenar o número inserido pelo usuário

    // Solicita ao usuário que insira um número e armazena na variável numero_usuario
    std::cout << "Digite um numero: ";
    std::cin >> numero_usuario;

    // Verifica se o número inserido é maior que 20
    if(numero_usuario > 20) {
        // Calcula a metade do número inserido
        float metade_numero = numero_usuario / 2.0; // Para armazenar a metade do número

        // Imprime a metade do número inserido
        std::cout << "A metade do numero digitado eh: " << metade_numero << std::endl;
    }

    return 0;
}
