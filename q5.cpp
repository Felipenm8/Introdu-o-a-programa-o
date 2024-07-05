#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;

    // Solicitar números ao usuário até que ele digite 0
    cout << "Digite uma sequência de números (digite 0 para parar):\n";

    do {
        // Ler o próximo número
        cin >> numero;
        // Adicionar o número à soma se ele não for 0
        if (numero != 0) {
            soma += numero;
        }
    } while (numero != 0);

    // Exibir a soma dos números digitados (excluindo o 0)
    cout << "A soma dos números digitados é: " << soma << endl;

    return 0;
}

