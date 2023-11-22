#include"Stack_1.h"

Stack_1::Stack_1(){
    _size = 0;
}

int Stack_1::Pop(){
    int tmp = 0;
    if(_size == 0){
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
    }else{
        _size = _size - 1;
        tmp = _tab[_size];
        _tab[_size] = 0;
    }
    return tmp;
}
int Stack_1::IsEmpty(){
    if(_size == 0){
        return 1;
    }else{
        return 0;
    }
}
int Stack_1::IsFull(){
    if(_size == 4){
        return 1;
    }else{
        return 0;
    }
}
void Stack_1::Push(int x){
    if(_size==4){
        std::cout << "#BLAD: Obiekt zapelniony" << std::endl;
    }else{
        _tab[_size] = x;
        _size++;
    }
}
void Stack_1::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for(int i=0; i<_size; i++){
        std::cout << _tab[i] << ",";
    }
    std::cout << std::endl;
}
int Stack_1::Size(){
    return _size;
}
void Stack_1::Clear(){
    for(int i=0; i<_size; i++){
        _tab[i] = 0;
    }
    _size = 0;
} 