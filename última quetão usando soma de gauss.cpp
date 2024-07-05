#include <iostream>
using namespace std;

int somaParesAte(int n) {
    // Calcula a soma de todos os n�meros pares at� n usando a f�rmula de Gauss
    if (n % 2 != 0) {
        n--; // Se n for �mpar, consideramos o n�mero anterior que � par
    }
    return (n / 2) * (n / 2 + 1);
}

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

    // Calcular a soma dos n�meros pares no intervalo usando a f�rmula de Gauss
    int somaInicio = somaParesAte(inicio - 1);
    int somaFim = somaParesAte(fim);

    soma = somaFim - somaInicio;

    // Exibir o resultado
    cout << "\nA soma dos n�meros pares no intervalo de " << inicio << " a " << fim << " �: " << soma << endl;

    return 0;
}

