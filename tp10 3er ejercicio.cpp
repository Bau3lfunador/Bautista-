#include <iostream>
using namespace std;
int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}
int main() {
    int base, exponente;
    cin >> base >> exponente;
    cout << potencia(base, exponente);
    return 0;
}
