#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x[] = {0, 1, 2, 3, 4, 5};
    cout << endl;
    cout << "*************" << endl;
    cout << "|  x  | f(x)|" << endl;
    cout << "*************" << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << "  " << x[i] << "     " << (((pow(x[i],3 )) - (pow(x[i],2))) + 5) << endl;
    }
    cout << "*************" << endl;
    return 0;
}