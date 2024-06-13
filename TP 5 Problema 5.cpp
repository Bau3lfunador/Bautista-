#include <iostream>
using namespace std;

 
int main() {
    float saldo = 1000;
    int opcion;
    float monto;

    while (true) {
        cout << "Bienvenido al cajero automatico" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Retirar dinero" << endl;
        cout << "4. Salir" << endl;

        cout << "Ingrese la opcion deseada: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Su saldo actual es: $" << saldo << endl;
                break;
            case 2:
                cout << "Ingrese el monto a depositar: ";
                cin >> monto;
                if (monto > 0) {
                    saldo += monto;
                    cout << "Se ha depositado $" << monto << ". Su saldo actual es: $" << saldo << endl;
                } else {
                    cout << "Monto invalido. Por favor, reingrese el monto." << endl;
                }
                break;
            case 3:
                cout << "Ingrese el monto a retirar: ";
                cin >> monto;
                if (monto <= saldo && monto > 0) {
                    saldo -= monto;
                    cout << "Se ha retirado $" << monto << ". Su saldo actual es: $" << saldo << endl;
                } else if (monto <= 0) {
                    cout << "Monto inválido. Por favor, ingrese un monto positivo." << endl;
                } else {
                    cout << "Saldo insuficiente. No se puede realizar el retiro." << endl;
                }
                break;
            case 4:
                cout << "Gracias por utilizar el cajero automático. Hasta luego." << endl;
                return 0;
            default:
                cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
        }
    }
    return 0;
}
