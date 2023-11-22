#include"Stack_2.h"

Stack_2::Stack_2(){
    _size = 0;
}

int Stack_2::Pop(){
    int tmp = 0;
    if(_size == 0){
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
    }else{
        tmp = _arr[_size];
        std::array<int, 4> _arr_tmp;
        for(int i=0; i<_size-1; i++){
            _arr_tmp[i] = _arr[i];
        }
        _arr = _arr_tmp;
        _size--;
    }
    return tmp;
}

int Stack_2::IsEmpty(){
    if(_size == 0){
        return 1;
    }else{
        return 0;
    }
}

int Stack_2::IsFull(){
    if(_arr.size() == _size){
        return 1;
    }else{
        return 0;
    }
}
void Stack_2::Push(int x){
    if(_size == _arr.max_size()){
        std::cout << "#BLAD: Obiekt zapelniony" << std::endl;
    }else{
        _size++;
        _arr[_size-1] = x;
    }
}
void Stack_2::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for(int i=0; i<Size(); i++){
        std::cout << _arr[i] << ",";
    }
    std::cout << std::endl;
}

int Stack_2::Size(){
    return _size;
}

void Stack_2::Clear(){
    for(int i=0; i<_size; i++){
        _arr[i] = 0;
    }
    _size = 0;
} 