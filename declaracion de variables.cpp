#include <iostream>

int main(){
 
int cantidadNumeros, numero, pares = 0, impares = 0;

    std::cout << "Ingrese la cantidad de numeros a cargar: ";
    std::cin >> cantidadNumeros;

    std::cout << "Ingrese los " << cantidadNumeros << " numeros:" << std::endl;
    for (int i = 0; i < cantidadNumeros; ++i) {
        std::cin >> numero;

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    std::cout << "Cantidad de numeros pares: " << pares << std::endl;
    std::cout << "Cantidad de numeros impares: " << impares << std::endl;

    return 0;
}
