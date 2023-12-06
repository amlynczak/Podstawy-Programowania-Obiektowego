#include"Soldier.h"
#include<iostream>

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