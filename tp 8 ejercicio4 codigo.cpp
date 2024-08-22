#include <iostream>
using namespace std;

bool buscarPalabra(string cadena, string palabra) {
    cadena.erase(0, cadena.find_first_not_of(' '));
    cadena.erase(cadena.find_last_not_of(' ') + 1);
    palabra.erase(0, palabra.find_first_not_of(' '));
    palabra.erase(palabra.find_last_not_of(' ') + 1);

    return cadena.find(palabra) != string::npos;
}

int main() {
    string cadena = "Pajaro negro pollo en arbol";
    string palabra = "pollo";

    if (buscarPalabra(cadena, palabra)) {
        cout << "La palabra se encuentra en la cadena" << endl;
    } else {
        cout << "La palabra no se encuentra en la cadena" << endl;
    }

    return 0;
}
