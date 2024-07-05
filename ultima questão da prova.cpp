#include <iostream>
using namespace std;

int main() {
    int inicio, fim;
    int soma = 0;

    // Solicitar e ler os n�meros inicial e final do intervalo
    cout << "Digite o n�mero inicial do intervalo: ";
    cin >> inicio;
    cout << "Digite o n�mero final do intervalo: ";
    cin >> fim;

    // Verificar se inicio � par, se n�o for, ajustar para pr�ximo n�mero par
    if (inicio % 2 != 0) {
        inicio++;
    }

    // Calcular a soma dos n�meros pares no intervalo
    for (int i = inicio; i <= fim; i += 2) {
        soma += i;
    }

    // Exibir o resultado
    cout << "\nA soma dos n�meros pares no intervalo de " << inicio << " a " << fim << " �: " << soma << endl;

    return 0;
}

