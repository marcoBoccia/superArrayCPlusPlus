#include <iostream>
#include <string>
#include <array>
using namespace std;

int trovaPosizione(int base[], int dim, int cerca) {
    for (int i = 0; i < dim; i++) {
        if (base[i] == cerca) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int cerca = 25;
    int posizione = trovaPosizione(arr, size, cerca);
    if (posizione == -1) {
        std::cout << "Elemento non trovato" << std::endl;
    } else {
        std::cout << "L'elemento " << cerca << " si trova alla posizione " << posizione << std::endl;
    }
    return 0;
}
