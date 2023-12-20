#include"ArmyB.h"
#include<iostream>

ArmyB::ArmyB(){
    _quantity = 0;
    _soldiers = new AndroidSoldier[10];
}

ArmyB::ArmyB(const ArmyB& other){
    _quantity = other._quantity;
    if(_quantity <= 10){
        _soldiers = new AndroidSoldier[_quantity];
        for(int i=0; i<_quantity; i++){
            _soldiers[i] = other._soldiers[i];
        }
    }else{
        _soldiers = new AndroidSoldier[_quantity];
        for(int i=0; i<_quantity; i++){
            _soldiers[i] = other._soldiers[i];
        }
    }
}

ArmyB::~ArmyB(){

}

ArmyB& ArmyB::operator=(ArmyB& other){
    _quantity = other._quantity;
    if(_quantity <= 10){
        _soldiers = new AndroidSoldier[_quantity];
        for(int i=0; i<_quantity; i++){
            _soldiers[i] = other._soldiers[i];
        }
    }else{
        _soldiers = new AndroidSoldier[_quantity];
        for(int i=0; i<_quantity; i++){
            _soldiers[i] = other._soldiers[i];
        }
    }
    return *this;
}

void ArmyB::Print(){
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
    
void ArmyB::Add(AndroidSoldier soldier){
    if(_quantity >= 10){
        AndroidSoldier *tmp;
        tmp = new AndroidSoldier[_quantity];
        for(int i=0; i<_quantity; i++){
            tmp[i] = _soldiers[i];
        }
        _quantity++;
        _soldiers = new AndroidSoldier[_quantity];
        for(int i=0; i<_quantity-1; i++){
            _soldiers[i] = tmp[i];
        }
        _soldiers[_quantity] = soldier;
        delete[] tmp;
    }else{
        _soldiers[_quantity] = soldier;
        _quantity++;
    }
}

void ArmyB::Remove(){
    if(_quantity == 0){
        std::cout << "BLAD: Pusto !" << std::endl;
    }else{
        AndroidSoldier *tmp;
        tmp = new AndroidSoldier[_quantity];
        for(int i=0; i<_quantity; i++){
            tmp[i] = _soldiers[i];
        }
        _quantity--;
        _soldiers = new AndroidSoldier[_quantity];
        for(int i=0; i<_quantity; i++){
            _soldiers[i] = tmp[i];
        }
        delete[] tmp;
    }
    
}

void ArmyB::Clear(){
    delete[] _soldiers;
    _quantity = 0;
}