#include <iostream>

int main() {
    // Declara��o das vari�veis
    int numero_usuario; // Para armazenar o n�mero inserido pelo usu�rio

    // Solicita ao usu�rio que insira um n�mero e armazena na vari�vel numero_usuario
    std::cout << "Digite um numero: ";
    std::cin >> numero_usuario;

    // Verifica se o n�mero inserido � maior que 20
    if(numero_usuario > 20) {
        // Calcula a metade do n�mero inserido
        float metade_numero = numero_usuario / 2.0; // Para armazenar a metade do n�mero

        // Imprime a metade do n�mero inserido
        std::cout << "A metade do numero digitado eh: " << metade_numero << std::endl;
    }

    return 0;
}
