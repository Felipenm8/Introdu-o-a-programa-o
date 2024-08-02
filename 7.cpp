#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        Node* current = head;
        Node* nextNode;

        while (current != nullptr) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    void append(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() const {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList lista;
    int quantidade, valor;

    std::cout << "Digite a quantidade de elementos para adicionar na lista: ";
    std::cin >> quantidade;

    for (int i = 0; i < quantidade; ++i) {
        std::cout << "Digite o valor do elemento " << i + 1 << ": ";
        std::cin >> valor;
        lista.append(valor);
    }

    std::cout << "Elementos da lista: ";
    lista.display();

    return 0;
}

