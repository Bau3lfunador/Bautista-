#include <iostream>

int main() {
    int impares = 0;
    int sumatoria = 0;

    for (int i = 1; i <= 300; ++i) {
        if (i % 2 != 0) {
            impares++;

            sumatoria += i;
        }
    }

    std::cout << "Cantidad de numeros impares: " << impares << std::endl;
    std::cout << "Sumatoria de los numeros impares: " << sumatoria << std::endl;

    return 0;
}
