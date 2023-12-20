#include"AndroidSoldier.h"
#include<iostream>

AndroidSoldier::AndroidSoldier(){
    
}

AndroidSoldier::AndroidSoldier(int typ, int karta){
    _type = typ;
    _card = karta;
}

void AndroidSoldier::Print(){
    std::cout << "typ: " << _type << ", ilosc sztuk: " << _card << std::endl;
}

void AndroidSoldier::SetCard(int card){
    _card = card;
}

AndroidSoldier::~AndroidSoldier(){

}

int Compare(const AndroidSoldier& p1, const AndroidSoldier& p2) {
    if (p1.getCard() < p2.getCard()) return -1;
    if (p1.getCard() > p2.getCard()) return 1;
    return 0;
}

std::string AndroidSoldier::ToString()const{
    return "<typ="+std::to_string(_type)+", ilosc="+std::to_string(_card)+">";
}

AndroidSoldier::operator int()const{
    return _type;
}

AndroidSoldier::operator std::string()const{
    return ToString();
}

int AndroidSoldier::getCard()const{
    return _card;
}