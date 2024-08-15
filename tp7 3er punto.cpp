#include<iostream>
#include<string>
using namespace std;

string reverso(const string& cadena) {
    string reversa = "";
    for(int i = cadena.length() - 1; i >= 0; i--) {
        reversa += cadena[i];
    }
    return reversa;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Reverso: " << reverso(cadena) << endl;
    return 0;
}
