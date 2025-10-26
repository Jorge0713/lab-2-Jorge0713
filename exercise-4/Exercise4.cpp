
#include <iostream>
using namespace std;
int main(){
    int array[3];
    for (int  i = 0; i < 3; i++)
    {
        cout << "Digite el numero " << i+1 << " : ";
        cin >>array[i];
    }
    int med=array[0];
    int menor=array[0];
    int mayor=array[0];
    for (int i = 0; i < 2; i++)
    {
         if (menor > array[i + 1])
        {
            menor = array[i + 1];
        }
        if (mayor <= array[i + 1])
        {
            mayor = array[i + 1];

        }
    }
    for (int i = 0; i < 3; i++)
    {
        if ((array[i] < mayor)&&(array[i]>menor))
        {
            cout << "El numero del medio es: " << array[i];
        }
    }
       return 0;
}