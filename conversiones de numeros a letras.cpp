#include <iostream>
#include <string>

using namespace std;

string convertirNumeroALetra(int numero) {
    string letras[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};

    if (numero >= 0 && numero <= 9) {
        return letras[numero];
    } else {
        return "Numero fuera de rango";
    }
}

void opcion6() {
    int numero;

    cout << "Ingrese un numero del 0 al 9: ";
    cin >> numero;

    cout << "El numero en letras es: " << convertirNumeroALetra(numero) << endl;

    
}
