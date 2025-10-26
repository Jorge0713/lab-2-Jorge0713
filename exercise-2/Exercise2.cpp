#include <iostream>
using namespace std;
int main()
{
    int n1 = 0;
    int n2 = 0;
    cout << endl;
    cout << "Ingrese dos numeros enteros: ";
    cin >> n1 >> n2;
    if (n1 % n2 == 0)
    {
        cout << n1 << " es multiplo de " << n2 << endl;
    }
    else
    {
        cout << n1 << " no es multiplo de " << n2 << endl;
    }
    cout << endl;
    int n3;
    cout << "Ingrese un numero: ";
    cin >> n3;
    if (n3 % 2 == 0)
    {
        cout << "El numero es par" << endl;
    }
    else
    {
        cout << "El numero no es par " << endl;
    }


    return 0;
}
