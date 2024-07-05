#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    float peso;

    // Solicitar e ler nome da pessoa
    cout << "digite o peso da pessoa: ";
    getline(cin, nome);

    // Solicitar e ler peso da pessoa em kg
    cout << "Digite o peso da pessoa em kg: ";
    cin >> peso;

    // Calcular a quantidade recomendada de água em litros
    float quantidade_agua = peso * 0.05; // 50 ml por kg
    // Calcular a quantidade recomendada de carboidratos em kg
    float quantidade_carboidratos = peso * 0.006; // 6g por kg
    // Calcular a quantidade recomendada de proteínas em kg
    float quantidade_proteinas = peso * 0.0025; // 2.5g por kg

    // Exibir os resultados
    cout << "\nRecomendações diárias para " << nome << ":" << endl;
    cout << "Água: " << quantidade_agua << " litros" << endl;
    cout << "Carboidratos: " << quantidade_carboidratos << " kg" << endl;
    cout << "Proteínas: " << quantidade_proteinas << " kg" << endl;

    return 0;
}

