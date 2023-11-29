#include"Queue_1.h"

Queue_1::Queue_1(){
    _size = 0;
}

int Queue_1::Dequeue(){
    int tmp = 0;
    if(_size == 0){
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
    }else{
        _size = _size - 1;
        tmp = _tab[0];
        int tmp_tab[4];
        for(int i=0; i<_size; i++){
            tmp_tab[i] = _tab[i+1];
        }
        for(int i=0; i<_size; i++){
            _tab[i] = tmp_tab[i];
        }
    }
    return tmp;
}
int Queue_1::IsEmpty(){
    if(_size == 0){
        return 1;
    }else{
        return 0;
    }
}
int Queue_1::IsFull(){
    if(_size == 4){
        return 1;
    }else{
        return 0;
    }
}
void Queue_1::Enqueue(int x){
    if(_size==4){
        std::cout << "#BLAD: Obiekt zapelniony" << std::endl;
    }else{
        _tab[_size] = x;
        _size++;
    }
}
void Queue_1::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for(int i=0; i<_size; i++){
        std::cout << _tab[i] << ",";
    }
    std::cout << std::endl;
}
int Queue_1::Size(){
    return _size;
}
void Queue_1::Clear(){
    for(int i=0; i<_size; i++){
        _tab[i] = 0;
    }
    _size = 0;
} 