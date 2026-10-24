#include <iostream>
#include <cfloat>

using namespace std;

template <typename T>
T sumar(T a, T b) {
    return a + b;
}


int main() {
    cout << "Enteros: " << sumar(4, 6) << endl;
    cout << "\nDecimales float: " << sumar(2.5f, 3.5f) << endl;
    cout << "\nDecimales double: " << sumar(4.25, 5.75) << endl;

    return 0;
}