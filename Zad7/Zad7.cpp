#include <iostream>
#include <string>

class Vozilo {
private:
    std::string ime;
    int brojKotaca;

public:
    // Konstruktor
    Vozilo(std::string ime = "", int brojKotaca = 0) : ime(ime), brojKotaca(brojKotaca) {}

    // Operator ulaza
    friend std::istream& operator>>(std::istream& is, Vozilo& vozilo) {
        is >> vozilo.ime >> vozilo.brojKotaca;
        return is;
    }

    // Operator izlaza
    friend std::ostream& operator<<(std::ostream& os, const Vozilo& vozilo) {
        os << "Ime: " << vozilo.ime << ", Broj kotaca: " << vozilo.brojKotaca;
        return os;
    }
};

int main() {
    Vozilo vozilo1, vozilo2;

    // Unos prvog vozila
    std::cout << "Unesite ime prvog vozila i broj kotaca: ";
    std::cin >> vozilo1;

    // Unos drugog vozila
    std::cout << "Unesite ime drugog vozila i broj kotaca: ";
    std::cin >> vozilo2;

    // Ispis vozila
    std::cout << "Prvo vozilo: " << vozilo1 << std::endl;
    std::cout << "Drugo vozilo: " << vozilo2 << std::endl;

    return 0;
}
