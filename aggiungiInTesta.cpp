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
    int dim = 5;
    
    aggiungiInTesta(arr, dim, 0);

    for (int i = 0; i <= dim; i++)
    {
        cout << arr[i] << " " <<endl;
    }
    
    return 0;
}