
#include <iostream>
#include <Datos.h>

using namespace std;
template <typename T>
class sumatemplate
{
private:
    T num1;
    T num2;

public:
    // Constructor con parámetros
    sumatemplate(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    // Metodo sumar
    void sumar() {
        cout << "La suma es: " << num1 + num2 << endl;
    }

    // Destructor
    ~sumatemplate() {
    }
};

int main() {
    // Suma de enteros
    sumatemplate<int> sumatemplate1(4, 20);
    sumatemplate1.sumar();

    // Suma de decimales
    sumatemplate<float> sumatemplate2(12.5f, 8.3f);
    sumatemplate2.sumar();

    return 0;
}
