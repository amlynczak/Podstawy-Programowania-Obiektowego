#include"Queue_2.h"

Queue_2::Queue_2(){
    _size = 0;
}

int Queue_2::Dequeue(){
    int tmp = 0;
    if(_size == 0){
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
    }else{
        tmp = _arr[0];
        std::array<int, 4> _arr_tmp;
        for(int i=0; i<_size-1; i++){
            _arr_tmp[i] = _arr[i+1];
        }
        _arr = _arr_tmp;
        _size--;
    }
    return tmp;
}

int Queue_2::IsEmpty(){
    if(_size == 0){
        return 1;
    }else{
        return 0;
    }
}

int Queue_2::IsFull(){
    if(_arr.size() == _size){
        return 1;
    }else{
        return 0;
    }
}
void Queue_2::Enqueue(int x){
    if(_size == _arr.max_size()){
        std::cout << "#BLAD: Obiekt zapelniony" << std::endl;
    }else{
        _size++;
        _arr[_size-1] = x;
    }
}
void Queue_2::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for(int i=0; i<Size(); i++){
        std::cout << _arr[i] << ",";
    }
    std::cout << std::endl;
}

int Queue_2::Size(){
    return _size;
}

void Queue_2::Clear(){
    for(int i=0; i<_size; i++){
        _arr[i] = 0;
    }
    _size = 0;
} 