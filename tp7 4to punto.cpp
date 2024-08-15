#include<iostream>
#include<string>
using namespace std;

int conteoCaracter(const string& cadena, char caracter) {
    int conteo = 0;
    for(size_t i = 0; i < cadena.length(); ++i) {
        if(cadena[i] == caracter) {
            conteo++;
        }
    }
    return conteo;
}

int main() {
    string cadena;
    char caracter;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese el caracter a buscar: ";
    cin >> caracter;
    cout << "El caracter '" << caracter << "' aparece " << conteoCaracter(cadena, caracter) << " veces." << endl;
    return 0;
}
