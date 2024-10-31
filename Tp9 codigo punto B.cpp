#include <iostream>
#include <string>
using namespace std;
struct Alumno {
    string nombre;
    string apellido;
    string curso;
    string materia;
    int calificaciones[3];
};
void Inicializar(Alumno &alumno) {
    cout << "Ingrese nombre: ";
    cin >> alumno.nombre;
    cout << "Ingrese apellido: ";
    cin >> alumno.apellido;
    cout << "Ingrese curso: ";
    cin >> alumno.curso;
    cout << "Ingrese materia: ";
    cin >> alumno.materia;
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese calificacion trimestre " << i + 1 << ": ";
        cin >> alumno.calificaciones[i];
    }
}
float calcularPromedio(const Alumno &alumno) {
    int suma = 0;
    for (int i = 0; i < 3; i++) {
        suma += alumno.calificaciones[i];
    }
    return suma / 3.0;
}
string calcularCondicion(const Alumno &alumno) {
    bool promociona = true;
    bool recupera = false;   
    for (int i = 0; i < 3; i++) {
        if (alumno.calificaciones[i] < 5) return "Reprobado";
        else if (alumno.calificaciones[i] < 7) recupera = true;
    }
    if (recupera) return "Recupera";
    return "Promociona";
}
int main() {
    Alumno alumno;
    Inicializar(alumno);   
    float promedio = calcularPromedio(alumno);
    string condicion = calcularCondicion(alumno);
    cout << "\nAlumno: " << alumno.nombre << " " << alumno.apellido << endl;
    cout << "Promedio Final: " << promedio << endl;
    cout << "Condicion de la materia: " << condicion << endl;
    return 0;
}
