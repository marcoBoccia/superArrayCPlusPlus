#include <iostream>
#include <string>
#include <array>
using namespace std;

int removeAll(int base[], int dim, int num)
{
    int count = 0;
    for (int i = 0; i < dim; i++)
    {
        if (base[i] != num)
        {
            base[count++] = base[i];
        }
    }
    while (count < dim)
    {
        base[count++] = 0;
    }
    cout << "arr dopo la rimozione: " << endl;
    for (int i = 0; i < dim; i++)
    {
        cout << base[i] << endl;
    }
    return 0;
}

int main()
{
    int arr[5] = {1, 9, 19, 32, 27};
    int dim = 5;
    int num = 32;

    cout << "arr prima della rimozione: " << endl;
    for (int i = 0; i < dim; i++)
    {
        cout << arr[i] << endl;
    }
    removeAll(arr, dim, num);
}