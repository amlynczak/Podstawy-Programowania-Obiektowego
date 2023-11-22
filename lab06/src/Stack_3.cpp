#include"Stack_3.h"

Stack_3::Stack_3(int size){
    _size_max = size;
    _tab = new int[size];
    _size = 0;
}

Stack_3::~Stack_3(){
    delete[] _tab;
}

int Stack_3::Pop(){
    int tmp = 0;
    if(_size == 0){
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
    }else{
        tmp = _tab[_size-1];
        int *_tab_tmp = new int[_size];
        for(int i=0; i<_size; i++){
            _tab_tmp[i] = _tab[i];
        }
        _tab = new int[_size-1];
        _size--;
        for(int i=0; i<_size; i++){
            _tab[i] = _tab_tmp[i];
        }
    }
    return tmp;
}
int Stack_3::IsEmpty(){
    if(_size == 0){
        return 1;
    }else{
        return 0;
    }
}
int Stack_3::IsFull(){
    if(_size == 4){
        return 1;
    }else{
        return 0;
    }
}
void Stack_3::Push(int x){
    if(_size==_size_max){
        int *_tab_tmp = new int[_size];
        for(int i=0; i<_size; i++){
            _tab_tmp[i] = _tab[i];
        }
        _tab = new int[2 * _size_max];
        _size_max = 2 * _size_max;
        _size++;
        for(int i=0; i<_size; i++){
            _tab[i] = _tab_tmp[i];
        }
        _tab[_size] = x;
    }else{
        _tab[_size] = x;
        _size++;
    }
}
void Stack_3::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for(int i=0; i<_size; i++){
        std::cout << _tab[i] << ",";
    }
    std::cout << std::endl;
}
int Stack_3::Size(){
    return _size;
}
void Stack_3::Clear(){
    _tab = new int[0];
    _size = 0;
} 