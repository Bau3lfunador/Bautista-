#include <iostream>
#include <algorithm> 
#include <string>
using namespace std;

bool esAnagrama(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2;
}

int main() {
    string cadena1 = "pata";
    string cadena2 = "tapa";

    if (esAnagrama(cadena1, cadena2)) {
        cout << "la palabra son anagramas" << endl;
    } else {
        cout << "la palabra en el codigo no son anagramas" << endl;
    }

    return 0;
}
