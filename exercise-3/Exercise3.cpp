/*
Escriba un programa que ingrese un número de cinco dígitos, divida el número en sus dígitos individuales e imprima los dígitos separados entre sí por tres espacios cada uno. [Sugerencia: use la división entera y el operador de módulo.] Por ejemplo, si el usuario ingresa 42339, el programa debe imprimir lo que se muestra en la salida de ejemplo.
*/
#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << endl;

    cout << "Digite un numero: ";
    cin >> numero;
    cout << endl;
    int vector[5];
    int i = 0;
    while (numero > 0)
    {
        vector[i] = numero % 10;
        numero /= 10;
        i++;
    }

    for (int i = 4; i >= 0; i--)
    {
        cout << vector[i] << " ";
    }
    cout << endl;
    cout << endl;
    int vector2[3];
    cout << "Digite 3 numeros: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> vector2[i];

        cout << vector2[i];
    }
    cout << endl;
    return 0;
}