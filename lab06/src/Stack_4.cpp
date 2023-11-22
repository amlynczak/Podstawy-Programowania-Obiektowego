#include"Stack_4.h"

int Stack_4::Pop(){
    int tmp = 0;
    if(_vec.empty()){
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
    }else{
        tmp = _vec.back();
        _vec.pop_back();
    }
    return tmp;
}

int Stack_4::IsEmpty(){
    return _vec.empty();
}

int Stack_4::IsFull(){
    if(_vec.size() == _vec.max_size()){
        return 1;
    }else{
        return 0;
    }
}

void Stack_4::Push(int x){
    _vec.push_back(x);
}

void Stack_4::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for(int i=0; i<_vec.size(); i++){
        std::cout << _vec[i] << ",";
    }
    std::cout << std::endl;
}
int Stack_4::Size(){
    return _vec.size();
}
void Stack_4::Clear(){
    _vec.clear();
} 