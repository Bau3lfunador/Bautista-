#include <iostream>
using namespace std;
int main() {
    int termino = 11;

    std::cout << "Los primeros 25 terminos de la serie son:" << std::endl;
    for (int i = 0; i < 25; ++i) {
        std::cout << termino << " ";
        termino += 11;
    }

    return 0;
}
