#include <iostream>
using namespace std;

int main() {
    int inicio, fim;
    int soma = 0;

    // Solicitar e ler os números inicial e final do intervalo
    cout << "Digite o número inicial do intervalo: ";
    cin >> inicio;
    cout << "Digite o número final do intervalo: ";
    cin >> fim;

    // Verificar se inicio é par, se não for, ajustar para próximo número par
    if (inicio % 2 != 0) {
        inicio++;
    }

    // Calcular a soma dos números pares no intervalo
    for (int i = inicio; i <= fim; i += 2) {
        soma += i;
    }

    // Exibir o resultado
    cout << "\nA soma dos números pares no intervalo de " << inicio << " a " << fim << " é: " << soma << endl;

    return 0;
}

