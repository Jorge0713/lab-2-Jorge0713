#include <iostream>
using namespace std;
int main()
{

    int vector[3];
    int suma = 0;
    int producto = 1;
    float promedio = 0;
    cout << "Ingrese el primer numero: ";
    cin >> vector[0];
    cout << endl;
    cout << "Ingrese el segundo numero: ";
    cin >> vector[1];
    cout << endl;
    cout << "Ingrese el tercer numero: ";
    cin >> vector[2];
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        suma += vector[i];
        producto *= vector[i];
    }
    promedio = suma / 3.00;

    cout << " La suma es " << suma << endl;
    cout << " El promedio es " << promedio << endl;
    cout << " El producto es " << producto << endl;
    int menor = vector[0];
    int mayor = vector[0];
    for (int i = 0; i < 2; i++)
    {
        if (menor >= vector[i + 1])
        {
            menor = vector[i + 1];
        }
        if (mayor <= vector[i + 1])
        {
            mayor = vector[i + 1];
        }
    }

    cout << " El mas pequeño es " << menor << endl;
    cout << " El mas grande es " << mayor << endl;

    return 0;
}