#include <iostream>

using namespace std;

// Función para convertir de kilómetros a millas
double km_to_miles(double km) {
    return km * 0.621371;
}

// Función para convertir de metros a pulgadas
double m_to_inches(double m) {
    return m * 39.3701;
}

// Función para convertir de libras a kilos
double lb_to_kg(double lb) {
    return lb * 0.453592;
}

// Función para convertir de kilos a libras
double kg_to_lb(double kg) {
    return kg * 2.20462;
}

void opcion3() {
    double km, m, lb, kg;

    cout << "Ingrese la cantidad en kilómetros: ";
    cin >> km;
    cout << km << " kilómetros equivalen a " << km_to_miles(km) << " millas." << endl;

    cout << "Ingrese la cantidad en metros: ";
    cin >> m;
    cout << m << " metros equivalen a " << m_to_inches(m) << " pulgadas." << endl;

    cout << "Ingrese la cantidad en libras: ";
    cin >> lb;
    cout << lb << " libras equivalen a " << lb_to_kg(lb) << " kilogramos." << endl;

    cout << "Ingrese la cantidad en kilogramos: ";
    cin >> kg;
    cout << kg << " kilogramos equivalen a " << kg_to_lb(kg) << " libras." << endl;

    
}

