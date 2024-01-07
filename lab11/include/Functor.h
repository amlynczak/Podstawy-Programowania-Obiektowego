#ifndef FUNCTOR_H
#define FUNCTOR_H

#include <iostream>

class Functor {
public:
    Functor() : comparisonsLess(0), comparisonsEqual(0), comparisonsGreater(0) {}

    bool operator()(int a, int b);

    void wypiszStatystyki() const;

private:
    int comparisonsLess;
    int comparisonsEqual;
    int comparisonsGreater;
};

#endif
