#include <iostream>
using namespace std;

int somaParesAte(int n) {
    // Calcula a soma de todos os números pares até n usando a fórmula de Gauss
    if (n % 2 != 0) {
        n--; // Se n for ímpar, consideramos o número anterior que é par
    }
    return (n / 2) * (n / 2 + 1);
}

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

    // Calcular a soma dos números pares no intervalo usando a fórmula de Gauss
    int somaInicio = somaParesAte(inicio - 1);
    int somaFim = somaParesAte(fim);

    soma = somaFim - somaInicio;

    // Exibir o resultado
    cout << "\nA soma dos números pares no intervalo de " << inicio << " a " << fim << " é: " << soma << endl;

    return 0;
}

