#include <iostream>
using namespace std;

int main() {
    // Declaramos la variable para almacenar el n�mero
    int numero;
    
    // Pedimos al usuario que ingrese un n�mero entero
    cout << "Por favor, ingresa un n�mero entero: ";
    cin >> numero;
    
    // Comprobamos si el n�mero es positivo, negativo o nulo y mostramos el mensaje correspondiente
    if (numero > 0) {
        cout << "�El n�mero es positivo!" << endl;
    } else if (numero < 0) {
        cout << "�El n�mero es negativo!" << endl;
    } if (numero ==0) {
        cout << "�El n�mero es nulo!" << endl;
    }
    
	return 0;
}
