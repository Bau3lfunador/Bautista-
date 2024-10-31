#include <iostream>
#include <string>
using namespace std;
float convertirMoneda(float valor, float tasa) {
    return valor * tasa;
}
int main() {
    float valor, tasaCompra = 0.85, tasaVenta = 0.90;
    string monedaOrigen, monedaDestino, tipoCambio;
    cout << "Ingrese la cantidad a convertir: ";
    cin >> valor;
    cout << "Ingrese la moneda de origen (por ejemplo., USD): ";
    cin >> monedaOrigen;
    cout << "Ingrese la moneda de destino (por ejemplo EUR): ";
    cin >> monedaDestino;
    cout << "Ingrese el tipo de cambio (compra o venta): ";
    cin >> tipoCambio;
    if (tipoCambio == "compra") {
        cout << "El valor convertido es: " << convertirMoneda(valor, tasaCompra) << " " << monedaDestino << endl;
    } else if (tipoCambio == "venta") {
        cout << "El valor convertido es: " << convertirMoneda(valor, tasaVenta) << " " << monedaDestino << endl;
    } else {
        cout << "Tipo de cambio no valido." << endl;
    }
    return 0;
}
