#include <iostream>

using namespace std;

string arabigoARomano(int numero) {
    string romano = "";
    
    while (numero >= 1000) {
        romano += "M";
        numero -= 1000;
    }
    
    if (numero >= 900) {
        romano += "CM";
        numero -= 900;
    }
    
    if (numero >= 500) {
        romano += "D";
        numero -= 500;
    }
    
    if (numero >= 400) {
        romano += "CD";
        numero -= 400;
    }
    
    while (numero >= 100) {
        romano += "C";
        numero -= 100;
    }
    
    if (numero >= 90) {
        romano += "XC";
        numero -= 90;
    }
    
    if (numero >= 50) {
        romano += "L";
        numero -= 50;
    }
    
    if (numero >= 40) {
        romano += "XL";
        numero -= 40;
    }
    
    while (numero >= 10) {
        romano += "X";
        numero -= 10;
    }
    
    if (numero >= 9) {
        romano += "IX";
        numero -= 9;
    }
    
    if (numero >= 5) {
        romano += "V";
        numero -= 5;
    }
    
    if (numero >= 4) {
        romano += "IV";
        numero -= 4;
    }
    
    while (numero >= 1) {
        romano += "I";
        numero -= 1;
    }
    
    return romano;
}

void opcion5() {
    int numero;
    
    cout << "Ingrese un numero arabe mayor o igual a 1000: ";
    cin >> numero;
    
    if (numero < 1000) {
        cout << "El numero ingresado debe ser mayor o igual a 1000." << endl;
        
    }
    
    string romano = arabigoARomano(numero);
    cout << "Numero en romano: " << romano << endl;
    
    
}
