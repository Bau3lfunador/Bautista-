#include <iostream>
using namespace std;

int main() {

    int aprobados = 0, reprobados = 0;
    

    for(int f = 1; f <= 10; f++) {
        int nota;
        

        cout << "Ingrese la nota del estudiante " << f << ": ";
        cin >> nota;
        

        if(nota >= 7) {

            aprobados++;
        } else {
 
            reprobados++;
        }
    }
    

    cout << "Total de estudiantes aprobados: " << aprobados << endl;
    cout << "Total de estudiantes reprobados: " << reprobados << endl;

    return 0;
    } 
