#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool trocou;
    do {
        trocou = false;
        for (int i = 0; i < n - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                trocou = true;
            }
        }
        --n; // Reduz o tamanho da comparação pois o maior elemento já está no final
    } while (trocou);
}

int main() {
    std::vector<int> numeros;
    int quantidade, numero;

    std::cout << "Digite a quantidade de números a serem ordenados: ";
    std::cin >> quantidade;

    for (int i = 0; i < quantidade; ++i) {
        std::cout << "Digite o número " << i + 1 << ": ";
        std::cin >> numero;
        numeros.push_back(numero);
    }

    bubbleSort(numeros);

    std::cout << "Números ordenados: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

