#include <iostream>

class EUredaj {
public:
    virtual void ispis() = 0;
};

class Tipkovnica : public EUredaj {
public:
    void ispis() override {
        std::cout << "Tipkovnica" << std::endl;
    }
};

class Monitor : public EUredaj {
public:
    void ispis() override {
        std::cout << "Monitor" << std::endl;
    }
};

int main() {
    Tipkovnica tipkovnica;
    Monitor monitor;

    // Demonstracija korištenja funkcija ispis()
    tipkovnica.ispis();
    monitor.ispis();

    return 0;
}
