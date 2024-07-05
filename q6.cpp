#include <iostream>
using namespace std;

int main() {
    int valorSaque;
    
    // Array para armazenar as notas disponíveis
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    // Array para armazenar a quantidade de cada nota
    int quantidadeNotas[7] = {0};

    // Solicitar ao usuário o valor que deseja sacar
    cout << "Digite o valor que deseja sacar (apenas números inteiros): ";
    cin >> valorSaque;

    // Calcular a quantidade mínima de cada nota
    for (int i = 0; i < 7; ++i) {
        quantidadeNotas[i] = valorSaque / notas[i];
        valorSaque %= notas[i];
    }

    // Exibir a quantidade mínima de cada nota
    cout << "\nQuantidade de notas necessárias:\n";
    for (int i = 0; i < 7; ++i) {
        if (quantidadeNotas[i] > 0) {
            cout << notas[i] << " reais: " << quantidadeNotas[i] << " nota(s)\n";
        }
    }

    return 0;
}

