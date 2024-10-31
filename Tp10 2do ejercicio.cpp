#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int numeroAleatorio(int min, int max) {
return rand() % (max - min + 1) + min;
}
int main() {
    int min, max;
    cin >> min >> max;
    srand(time(0));
    cout << numeroAleatorio(min, max);
    return 0;
}
