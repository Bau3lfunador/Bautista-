#include <iostream>
using namespace std;
bool esPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (esPrimo(numero)) {
        cout << numero << " es primo." << endl;
    } else {
        cout << numero << " no es primo." << endl;
    }
    return 0;
}
