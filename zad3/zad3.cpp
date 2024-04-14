#include <iostream>
#include <iomanip>
#include <string>

class Zivotinja {
public:
    std::string ime;
    int kolikoZivih;
    double prosjecnaTezina;

    Zivotinja(std::string ime, int kolikoZivih, double prosjecnaTezina)
        : ime(ime), kolikoZivih(kolikoZivih), prosjecnaTezina(prosjecnaTezina) {}
};

int main() {
    // Stvaranje èetiri objekta klase Zivotinja
    Zivotinja z1("Pas", 500000000, 25.5);
    Zivotinja z2("Maèka", 600000000, 10.2);
    Zivotinja z3("Slon", 500000, 5000.7);
    Zivotinja z4("Ptica", 1000000000, 0.2);

    // Ispis u tablici koristeæi iomanip
    std::cout << std::setw(15) << std::left << "Ime"
        << std::setw(15) << std::left << "Koliko Zivih"
        << std::setw(15) << std::left << "Prosjecna Tezina" << std::endl;

    // Ispis objekata
    std::cout << std::setw(15) << std::left << z1.ime
        << std::setw(15) << std::left << z1.kolikoZivih
        << std::setw(15) << std::left << z1.prosjecnaTezina << std::endl;

    std::cout << std::setw(15) << std::left << z2.ime
        << std::setw(15) << std::left << z2.kolikoZivih
        << std::setw(15) << std::left << z2.prosjecnaTezina << std::endl;

    std::cout << std::setw(15) << std::left << z3.ime
        << std::setw(15) << std::left << z3.kolikoZivih
        << std::setw(15) << std::left << z3.prosjecnaTezina << std::endl;

    std::cout << std::setw(15) << std::left << z4.ime
        << std::setw(15) << std::left << z4.kolikoZivih
        << std::setw(15) << std::left << z4.prosjecnaTezina << std::endl;

    return 0;
}
