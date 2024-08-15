#include<iostream>
#include<string>
using namespace std;

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Longitud: " << cadena.length() << endl;
    return 0;
}
