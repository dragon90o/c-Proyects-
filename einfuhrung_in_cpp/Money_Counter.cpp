#include <iostream>
#include <string>
using namespace std;

// Definir una estructura Moneda para almacenar el nombre y el valor de cada moneda
struct Moneda
{
    string nombre;
    double valor;
};

int main()
{
    // Arreglo de estructuras Moneda
    Moneda monedas[] = {
        {"200", 200.0},
        {"100", 100.0},
        {"50", 50.0},
        {"20", 20.0},
        {"10", 10.0},
        {"5", 5.0},
        {"2", 2.0},
        {"1", 1.0},
        {"50_cents", 0.50},
        {"20_cents", 0.20},
        {"10_cents", 0.10},
        {"5_cents", 0.05},
        {"2_cents", 0.02},
        {"1_cent", 0.01}};

    cout << "How many of each value did you count today?" << std::endl;

    // Pedir la cantidad de cada valor y realizar la sumatoria
    double total = 0;
    for (const Moneda &moneda : monedas)
    {
        int cantidad;
        cout << "Enter the quantity for " << moneda.nombre << " €: ";
        cin >> cantidad;

        total += moneda.valor * cantidad;
    }

    cout << "Total sum: " << total << " €" << std::endl;

    return 0;
}
