#include <iostream>
#include <string>
#include <array>
using namespace std;

int *aggiornaInPosizione(int base[], int dim, int valore, int posizione)
{
    if (posizione >= 0 && posizione < dim)
    {
        {
            base[posizione] = valore;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4};
    int dim = sizeof(arr) / sizeof(arr[0]);
    int posizione = 2;
    int valore = 10;
    aggiornaInPosizione(arr, dim, valore, posizione);
    for (int i = 0; i < dim; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}