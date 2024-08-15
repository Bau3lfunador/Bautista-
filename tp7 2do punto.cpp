#include<iostream>
#include<string>
using namespace std;

int main() {
    string cadena1, cadena2;
    cout << "Ingrese la primera cadena: ";
    getline(cin, cadena1);
    cout << "Ingrese la segunda cadena: ";
    getline(cin, cadena2);
    string concatenacion = cadena1 + " " + cadena2;
    cout << "Concatenacion: " << concatenacion << endl;
    return 0;
}
