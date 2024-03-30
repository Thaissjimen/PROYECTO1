#include <iostream>

using namespace std;

void opcion1 () {
    float num1, num2;
    
    cout << "Introduce el primer numero: ";
    cin >> num1;
    
    cout << "Introduce el segundo numero: ";
    cin >> num2;
    
    // Suma
    cout << "La suma de los numeros es: " << num1 + num2 << endl;
    
    // Resta
    cout << "La resta de los numeros es: " << num1 - num2 << endl;
    
    // Multiplicacion
    cout << "La multiplicacion de los numeros es: " << num1 * num2 << endl;
    
    // Division
    if (num2 != 0) {
        cout << "La division de los numeros es: " << num1 / num2 << endl;
    } else {
        cout << "No es posible dividir entre 0." << endl;
    }
    
    
}


