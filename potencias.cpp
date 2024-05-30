#include <iostream>
using namespace std;
int main() {
    int x;
    int resultado = 1;

    std::cout << "Ingrese un numero: ";
    std::cin >> x;

    for (int i = 1; i <= 5; ++i) {
        resultado *= x;
    }

    std::cout << x << " elevado a la quinta es igual a " << resultado << std::endl;

    return 0;
}
