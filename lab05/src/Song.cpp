#include"Song.h"

Song::Song(){
    std::cout << "Wywolanie konstruktora Song..." << std::endl << std::endl;
    _x = 0;
    _y = 0;
}

Song::Song(std::string name){
    std::cout << "Wywolanie konstruktora Song..." << std::endl << std::endl;
    _x = 0;
    _y = 0;
    _name = name;
}

Song::Song(std::string name, double x, double y){
    std::cout << "Wywolanie konstruktora Song..." << std::endl << std::endl;
    _name = name;
    _x = x;
    _y = y;
}

Song::~Song(){
    std::cout << "Wywolanie destruktora Song..." << std::endl << std::endl;
}

void Song::Presentation(){
    std::cout << "### Prezentacja piosenki ###" << std::endl;
    std::cout << "Nazwa: " << _name << std::endl;
    std::cout << "Czas trwania: " << _x << std::endl;
    std::cout << "Zyski z odtwarzania (w mln $): " << _y << std::endl << std::endl;
}
void Song::SetName(std::string name){
    _name = name;
}
void Song::SetX(double x){
    _x = x;
}
void Song::SetY(double y){
    _y = y;
}

std::string Song::getName(){
    return _name;
}

double Song::getX(){
    return _x;
}

double Song::getY(){
    return _y;
}