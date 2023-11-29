#include"Queue_3.h"

Queue_3::Queue_3(int size){
    _size_max = size;
    _tab = new int[size];
    _size = 0;
}

Queue_3::~Queue_3(){
    delete[] _tab;
}

int Queue_3::Dequeue(){
    int tmp = 0;
    if(_size == 0){
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
    }else if((_size-1)==(_size_max/2)){
        tmp = _tab[0];
        int *_tab_tmp = new int[_size];
        for(int i=0; i<_size; i++){
            _tab_tmp[i] = _tab[i];
        }
        _size--;
        _tab = new int[_size];

        for(int i=0; i<_size; i++){
            _tab[i] = _tab_tmp[i+1];
        }
        delete[] _tab_tmp;
        _size_max = _size_max/2;
    }else{
        tmp = _tab[0];
        int *_tab_tmp = new int[_size];
        for(int i=0; i<_size; i++){
            _tab_tmp[i] = _tab[i];
        }
        _size--;
        _tab = new int[_size];

        for(int i=0; i<_size; i++){
            _tab[i] = _tab_tmp[i+1];
        }
        delete[] _tab_tmp;
    }
    return tmp;
}
int Queue_3::IsEmpty(){
    if(_size == 0){
        return 1;
    }else{
        return 0;
    }
}
int Queue_3::IsFull(){
    if(_size == _size_max){
        return 1;
    }else{
        return 0;
    }
}
void Queue_3::Enqueue(int x){
    if(_size==_size_max){
        int *_tab_tmp = new int[_size_max];
        for(int i=0; i<_size_max; i++){
            _tab_tmp[i] = _tab[i];
        }
        _size_max = 2 * _size_max;
        _tab = new int[_size_max];
        _size++;
        for(int i=0; i<_size-1; i++){
            _tab[i] = _tab_tmp[i];
        }
        _tab[_size-1] = x;
        delete[] _tab_tmp;
    }else{
        _size++;
        _tab[_size-1] = x;
    }
}

void Queue_3::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for(int i=0; i<_size; i++){
        std::cout << _tab[i] << ",";
    }
    std::cout << std::endl;
}

int Queue_3::Size(){
    return _size;
}

void Queue_3::Clear(){
    _tab = new int[0];
    _size = 0;
} 