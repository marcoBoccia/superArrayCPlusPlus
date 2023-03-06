#include <iostream>
#include <string>
#include <array>
using namespace std;

int *aggiungiInFondo(int base[], int dim, int nuovo)
{
    base[dim] = nuovo;

}

int main(){
    int arr[5] = {1,2,3,4,5};
    int dim = 5;

    aggiungiInFondo(arr,dim,6);
    dim ++;
    for (int i = 0; i < dim; i++){
    cout << arr[i] << endl;
    }
    return 0;
}
