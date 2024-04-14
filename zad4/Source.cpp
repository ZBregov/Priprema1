#include <iostream>
#include <string>

void spoji(const std::string& prvi, const std::string& drugi, std::string& rezultat) {
    rezultat = prvi + drugi;
}

int main() {
    std::string prvi = "Ovo ";
    std::string drugi = "je spojeno";
    std::string rezultat;

    spoji(prvi, drugi, rezultat);

    std::cout << "Konkatenacija: " << rezultat << std::endl;

    return 0;
}
