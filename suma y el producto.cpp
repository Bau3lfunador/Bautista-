#include <iostream>
using namespace std;
int main() {
float num1, num2, num3, num4, suma, producto;
cout << "Ingrese el primer numero: ";

cin >> num1;
cout << "Ingrese el segundo numero: ";
cin >> num2;
cout << "Ingrese el tercer numero: ";
cin >> num3;
cout << "Ingrese el cuarto numero: ";
cin >> num4;
suma = num1 + num2;
producto = num3 * num4;
cout << "La suma de los dos primeros numeros es: " << suma << endl;
cout << "El producto del tercer y cuarto numero es: " << producto;
return 0;
}
