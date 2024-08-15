#include<iostream>
#include<string>
using namespace std;

int conteoLetras(const string& cadena) {
    int conteo = 0;
    for(size_t i = 0; i < cadena.length(); ++i) {
        if(isalpha(cadena[i])) {
            conteo++;
        }
    }
    return conteo;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Cantidad de letras: " << conteoLetras(cadena) << endl;
    return 0;
}
