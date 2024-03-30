#include <iostream>
#include <string>
#include <algorithm>

bool esPalindromo(std::string str) {
    int i = 0, j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void opcion4 () {
    std::string palabra;
    std::cout << "Ingrese una palabra o numero: ";
    std::cin >> palabra;

    // Convertir a minúsculas (si se trata de una palabra)
    std::transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower);

    if (esPalindromo(palabra)) {
        std::cout << "Es un palindromo." << std::endl;
    } else {
        std::cout << "No es un palindromo." << std::endl;
    }

    
}

