#include <iostream>
using namespace std;
int main() {    
double numero;

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    while (numero >= 0.01) {
        numero /= 2;
        std::cout << "Dividido por 2: " << numero << std::endl;
    }

    std::cout << "El resultado es menor que 0.01." << std::endl;

    return 0;
}
