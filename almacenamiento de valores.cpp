#include <iostream>
using namespace std;

int main() {
    // Declaramos la variable para almacenar el número
    int numero;
    
    // Pedimos al usuario que ingrese un número entero
    cout << "Por favor, ingresa un número entero: ";
    cin >> numero;
    
    // Comprobamos si el número es positivo, negativo o nulo y mostramos el mensaje correspondiente
    if (numero > 0) {
        cout << "¡El número es positivo!" << endl;
    } else if (numero < 0) {
        cout << "¡El número es negativo!" << endl;
    } if (numero ==0) {
        cout << "¡El número es nulo!" << endl;
    }
    
	return 0;
}
