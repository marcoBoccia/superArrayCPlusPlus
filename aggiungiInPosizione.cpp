#include <iostream>
#include <string>
#include <array>
using namespace std;

int *aggiungiInPosizione(int base[], int dim, int posizione, int nuovo)
{
    for (int i = dim; i > dim; i--)
    {
        base[i] = nuovo;
    }
    base[posizione] = nuovo;

    dim++;
    
}

int main(){
    int arr[10] = {0,1,2,3,4,5};
    int dim = 5;

    aggiungiInPosizione(arr, dim, 2, 6);

    for (int i = 0; i <=dim; i++){
        cout << arr[i] << " "<< endl;
    }
    return 0;
}