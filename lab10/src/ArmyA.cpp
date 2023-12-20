#include"ArmyA.h"
#include<iostream>

ArmyA::ArmyA(){
    _quantity = 0;
}

ArmyA::ArmyA(const ArmyA& other){
    _quantity = other._quantity;
    for(int i=0; i<_quantity; i++){
        _soldiers[i] = other._soldiers[i];
    }
}

ArmyA::~ArmyA(){

}

ArmyA& ArmyA::operator=(ArmyA& other){
    _quantity = other._quantity;
    for(int i=0; i<_quantity; i++){
        _soldiers[i] = other._soldiers[i];
    }
    return *this;
}

void ArmyA::Print(){
    std::cout << "---" << std::endl;
    std::cout << "#Zawartosc/sklad:" << std::endl;
    if(_quantity == 0){

    }else{
        for(int i=0; i<_quantity; i++){
            _soldiers[i].Print();
        }
    }
    std::cout << "---" << std::endl;
}

void ArmyA::Remove(){
    if(_quantity == 0){
        std::cout << "BLAD: Pusto !" << std::endl;
    }else{
        _quantity--;
    }
}

void ArmyA::Add(AndroidSoldier soldier){
    _soldiers[_quantity] = soldier;
    _quantity++;
}

void ArmyA::Clear(){
    _quantity = 0;
}