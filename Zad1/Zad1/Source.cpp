#include <iostream>
#include <iomanip>

int main() {
    double broj1, broj2;

    // Unos prvog broja
    std::cout << "Unesite prvi broj: ";
    std::cin >> broj1;

    // Unos drugog broja
    std::cout << "Unesite drugi broj: ";
    std::cin >> broj2;

    // Izra�un aritmeti�ke sredine
    double aritmeticka_sredina = (broj1 + broj2) / 2.0;

    // Postavljanje preciznosti na 5 decimala i �irine ispisa na 10 mjesta
    std::cout << "Aritmeticka sredina: " << std::fixed << std::setw(10) << std::setprecision(5) << aritmeticka_sredina << std::endl;

    return 0;
}
