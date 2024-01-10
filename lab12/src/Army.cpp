#include "Army.h"

void Army::Remove(){
    if(_soldiers.empty()){
        std::cout << "BLAD: Pusto !" << std::endl;
    }else{
        _soldiers.pop_back();
    }
}

void Army::Add(const AndroidSoldier& soldier){
    _soldiers.push_back(soldier);
}

void Army::Clear(){
    _soldiers.clear();
}

Army& Army::operator+(int value){
    for(AndroidSoldier& soldier : _soldiers){
        soldier = soldier + value;
    }
    return *this;
}

Army& Army::operator-(int value){
    for(AndroidSoldier& soldier : _soldiers){
        soldier = soldier - value;
    }
    return *this;
}

Army& Army::operator*(int value){
    for(AndroidSoldier& soldier : _soldiers){
        soldier = soldier * value;
    }
    return *this;
}

AndroidSoldier& Army::operator[](int index){
    return _soldiers[index];
}

Army& Army::operator=(const Army& other){
    if (this != &other) {
        _soldiers = other._soldiers;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Army& a){
    os << "---" << std::endl;
    os << "# Zawartosc/sklad:" << std::endl;
    for(int i=0; i<a._soldiers.size(); i++){
        os << a._soldiers[i];
    }
    os << "---" << std::endl;
    return os;
}