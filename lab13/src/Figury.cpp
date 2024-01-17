#include"Figury.h"

void Figury::Rysuj()const{
    for(int i=0; i<_tab.size(); i++){
        _tab[i]->Rysuj();
    }
}

void Figury::DodajFigure(Figura *fig){
    _tab.push_back(fig);
}

Figury::~Figury(){
    
}