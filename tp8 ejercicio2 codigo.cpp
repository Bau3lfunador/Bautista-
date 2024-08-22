#include <iostream>
using namespace std;

int contarPalabras(string cadena) {
    int contador = 0;
    bool enPalabra = false;

    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] == ' ') {
            if (enPalabra) {
                contador++;
                enPalabra = false;
            }
        } else {
            enPalabra = true;
        }
    }

    if (enPalabra) {
        contador++;
    }

    return contador;
}

int main() {
    string cadena = "pollo";
    int totalPalabras = contarPalabras(cadena);
    cout << "Numero de palabras: " << totalPalabras << endl;
    return 0;
}
