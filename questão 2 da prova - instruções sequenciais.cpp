#include <iostream>
using namespace std;

int main() {
    int idade;
    float peso;
    int dosagem_gotas;

    // Solicitar e ler idade do paciente
    cout << "Digite a idade do paciente: ";
    cin >> idade;

    // Solicitar e ler peso do paciente em kg
    cout << "Digite o peso do paciente em kg: ";
    cin >> peso;

    // Verificar e calcular a dosagem em gotas conforme as regras fornecidas
    if (idade >= 12) {
        if (peso >= 60) {
            dosagem_gotas = 40;
        } else {
            dosagem_gotas = 30;
        }
    } else { // idade < 12
        dosagem_gotas = peso / 2; // 1 gota para cada 2 kg de peso
    }

    // Exibir a dosagem recomendada em gotas
    cout << "\nDosagem recomendada: " << dosagem_gotas << " gotas" << endl;

    return 0;
}

