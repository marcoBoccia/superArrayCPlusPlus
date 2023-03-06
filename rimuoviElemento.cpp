#include <iostream>
#include <string>
#include <array>
using namespace std;

int *rimuoviElemento(int base[],int dim,int posizione){
    if(posizione < 0 || posizione >= dim){
        return 0;
    }
    for(int i=posizione;i< dim - 1 ;i++){
        base[i] = base[i+1];
    }
    base[dim - 1] = 0;
    dim --;
    return base;
}


int main(){
    int arr[] = {0,1,2,3,4,5};
    int dim = 5;
    int posizione = 3;

    rimuoviElemento(arr,dim,posizione);
    for(int i = 0 ; i < dim ; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}