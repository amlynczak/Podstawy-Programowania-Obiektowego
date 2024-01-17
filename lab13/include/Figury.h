#ifndef FIGURY_H
#define FIGURY_H

#include"Figura.h"
#include<vector>
#include<iostream>

class Figury{
public:
    ~Figury();
    void Rysuj()const;
    void DodajFigure(Figura *fig);
private:
    std::vector<Figura*> _tab;
};

#endif