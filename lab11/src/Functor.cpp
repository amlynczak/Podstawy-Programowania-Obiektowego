#include"Functor.h"

bool Functor::operator()(int a, int b) {
    if (a < b) {
        comparisonsLess++;
        return true;
    } else if (a == b) {
        comparisonsEqual++;
        return false;
    } else {
        comparisonsGreater++;
        return false;
    }
}

void Functor::wypiszStatystyki() const {
    std::cout << "Liczba porownan:\n";
    std::cout << "'a' mniejsze 'b': " << comparisonsLess << "\n";
    std::cout << "'a' rowne 'b': " << comparisonsEqual << "\n";
    std::cout << "'a' wieksze 'b': " << comparisonsGreater << "\n";
}