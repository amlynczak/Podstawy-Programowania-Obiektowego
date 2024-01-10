#include"AndroidSoldier.h"

AndroidSoldier::AndroidSoldier(int typ, int ilosc){
    _type = typ;
    _amount = ilosc;
}

AndroidSoldier& AndroidSoldier::operator++(){
    ++_amount;
    return *this;
}   

AndroidSoldier AndroidSoldier::operator++(int){
    AndroidSoldier tmp = *this;
    _amount++;
    return tmp;
}

AndroidSoldier& AndroidSoldier::operator--(){
    if(_amount>0) --_amount;
    return *this;
} 

AndroidSoldier AndroidSoldier::operator--(int){
    AndroidSoldier tmp = *this;
    if(_amount>0) _amount--;
    return tmp;
}

AndroidSoldier AndroidSoldier::operator+(int value){
    return AndroidSoldier(_type, _amount+value);
}

AndroidSoldier AndroidSoldier::operator-(int value){
    if(value>=_amount){
        return AndroidSoldier(_type, 0);
    }
    return AndroidSoldier(_type, _amount-value);
}

AndroidSoldier AndroidSoldier::operator*(int value){
    return AndroidSoldier(_type, _amount*value);
}

std::ostream& operator<<(std::ostream& os, const AndroidSoldier& sol){
    os<< "typ: " << sol._type << ", ilosc sztuk: " << sol._amount << std::endl;
    return os;
}