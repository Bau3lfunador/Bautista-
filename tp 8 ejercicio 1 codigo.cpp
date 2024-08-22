#include <iostream>
using namespace std;

float suma(float a, float b) { return a + b; }
float resta(float a, float b) { return a - b; }
float multiplicacion(float a, float b) { return a * b; }
float division(float a, float b) { return b != 0 ? a / b : 0; }

int main() {
    int eleccion;
    float num1, num2;

    cout << "Selecciona una operacion:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Ingresa el numero de la operacion (1/2/3/4): ";
    cin >> eleccion;

    if (eleccion < 1 || eleccion > 4) {
        cout << "Operacion no valida" << endl;
        return 0;
    }

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    switch(eleccion) {
        case 1:
            cout << "La suma es: " << suma(num1, num2) << endl;
            break;
        case 2:
            cout << "La resta es: " << resta(num1, num2) << endl;
            break;
        case 3:
            cout << "La multiplicacion es: " << multiplicacion(num1, num2) << endl;
            break;
        case 4:
            cout << "La division es: " << division(num1, num2) << endl;
            break;
    }

    return 0;
}
