#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;

    // Solicitar n�meros ao usu�rio at� que ele digite 0
    cout << "Digite uma sequ�ncia de n�meros (digite 0 para parar):\n";

    do {
        // Ler o pr�ximo n�mero
        cin >> numero;
        // Adicionar o n�mero � soma se ele n�o for 0
        if (numero != 0) {
            soma += numero;
        }
    } while (numero != 0);

    // Exibir a soma dos n�meros digitados (excluindo o 0)
    cout << "A soma dos n�meros digitados �: " << soma << endl;

    return 0;
}

