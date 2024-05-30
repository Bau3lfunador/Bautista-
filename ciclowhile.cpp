#include <iostream>

int main() {
    int numero;
    int contador = 0;
    int suma = 0;

    while (contador < 5) {
        std::cout << "Ingrese el numero " << contador + 1 << ": ";
        std::cin >> numero;
        suma += numero;
        contador++;
    }

    double promedio =(suma) / 5;

    std::cout << "El promedio de los numeros ingresados es: " << promedio << std::endl;

    return 0;
}

