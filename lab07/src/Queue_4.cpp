#include"Queue_4.h"

int Queue_4::Dequeue(){
    int tmp = 0;
    if(_vec.empty()){
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
    }else{
        tmp = _vec.front();
        std::vector<int> vec_tmp;
        for(int i=1; i<_vec.size(); i++){
            vec_tmp.push_back(_vec[i]);
        }
        _vec.clear();
        _vec = vec_tmp;
        vec_tmp.clear();
    }
    return tmp;
}

int Queue_4::IsEmpty(){
    return _vec.empty();
}

int Queue_4::IsFull(){
    if(_vec.size() == _vec.max_size()){
        return 1;
    }else{
        return 0;
    }
}

void Queue_4::Enqueue(int x){
    _vec.push_back(x);
}

void Queue_4::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for(int i=0; i<_vec.size(); i++){
        std::cout << _vec[i] << ",";
    }
    std::cout << std::endl;
}
int Queue_4::Size(){
    return _vec.size();
}
void Queue_4::Clear(){
    _vec.clear();
} 