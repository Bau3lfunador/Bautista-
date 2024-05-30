#include <iostream>
using namespace std;
int main() {
    int sumatoria = 0;

    std::cout << "Numeros pares entre 1 y 100:" << std::endl;

    for (int i = 2; i <= 100; i += 2) {
        std::cout << i;
        
        sumatoria += i;

        if (i < 100) {
            std::cout << " + ";
        } else {
            std::cout << std::endl;
        }
    }

    std::cout << "La sumatoria es: " << sumatoria << std::endl;

    return 0;
}
