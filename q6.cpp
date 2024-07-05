#include <iostream>
using namespace std;

int main() {
    int valorSaque;
    
    // Array para armazenar as notas dispon�veis
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    // Array para armazenar a quantidade de cada nota
    int quantidadeNotas[7] = {0};

    // Solicitar ao usu�rio o valor que deseja sacar
    cout << "Digite o valor que deseja sacar (apenas n�meros inteiros): ";
    cin >> valorSaque;

    // Calcular a quantidade m�nima de cada nota
    for (int i = 0; i < 7; ++i) {
        quantidadeNotas[i] = valorSaque / notas[i];
        valorSaque %= notas[i];
    }

    // Exibir a quantidade m�nima de cada nota
    cout << "\nQuantidade de notas necess�rias:\n";
    for (int i = 0; i < 7; ++i) {
        if (quantidadeNotas[i] > 0) {
            cout << notas[i] << " reais: " << quantidadeNotas[i] << " nota(s)\n";
        }
    }

    return 0;
}

