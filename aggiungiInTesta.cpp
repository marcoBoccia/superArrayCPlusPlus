#include <iostream>
#include <string>
#include <array>
using namespace std;

int *aggiungiInTesta(int base[], int dim, int nuovo){
    for (int i = dim -1;i>= 0 ;i--)
    {
        base[i+1] = base[i];
    }
    base[0] = nuovo;
    
}

int main () {
    int arr[5] = {1,2,3,4,5};
    int newDim = 6;
    int nuovo = 0;
    
    aggiungiInTesta(arr, newDim, nuovo);

    for (int i = 0; i < newDim; i++)
    {
        cout << arr[i] << " " <<endl;
    }
    
    return 0;
}