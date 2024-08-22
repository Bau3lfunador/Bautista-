#include <iostream>
using namespace std;

float byteAKilobyte(float bytes) { return bytes / 1024; }
float terabyteAMegabyte(float terabytes) { return terabytes * 1024 * 1024; }
float gigabyteAPetabyte(float gigabytes) { return gigabytes / 1024 / 1024; }

int main() {
    int eleccion;
    float cantidad;

    cout << "Selecciona la conversion:" << endl;
    cout << "1. Byte a Kilobyte" << endl;
    cout << "2. Terabyte a Megabyte" << endl;
    cout << "3. Gigabyte a Petabyte" << endl;
    cout << "Ingresa el numero de la conversion (1/2/3): ";
    cin >> eleccion;

    if (eleccion < 1 || eleccion > 3) {
        cout << "Conversion no valida" << endl;
        return 0;
    }

    cout << "Ingresa la cantidad: ";
    cin >> cantidad;

    switch(eleccion) {
        case 1:
            cout << "Resultado: " << byteAKilobyte(cantidad) << " KB" << endl;
            break;
        case 2:
            cout << "Resultado: " << terabyteAMegabyte(cantidad) << " MB" << endl;
            break;
        case 3:
            cout << "Resultado: " << gigabyteAPetabyte(cantidad) << " PB" << endl;
            break;
    }

    return 0;
}
