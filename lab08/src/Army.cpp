#include"Army.h"
#include<iostream>

Army::Army(){

}

Army::Army(AndroidSoldier sol){
    _armia.push_back(sol);
}

Army::Army(AndroidSoldier sol1, AndroidSoldier sol2){
    _armia.push_back(sol1);
    _armia.push_back(sol2);
}

Army::Army(int size, AndroidSoldier* tab[]){
    for(int i=0; i<size; i++){
        _armia.push_back(*tab[i]);
    }
}

Army::Army(std::vector<AndroidSoldier>& vec){
    _armia = vec;
}

Army::Army(const Army& other){
    _armia = other._armia;
}

Army::Army(Army&& other){
    _armia = std::move(other._armia);
}

Army::~Army(){

}

void Army::Print(){
    std::cout << "---" << std::endl;
    std::cout << "# Zawartosc/sklad:" << std::endl;
    if(_armia.empty()){
        
    }else{
        for(int i=0; i<_armia.size(); i++){
            _armia[i].Print();
        }
    }
    std::cout << "---" << std::endl;
}

void Army::Remove(){
    if(_armia.empty()){
        std::cout << "BLAD: Pusto !" << std::endl;
    }else{
        _armia.pop_back();
    }
}

void Army::Add(AndroidSoldier sol){
    _armia.push_back(sol);
}

void Army::Clear(){
    _armia.clear();
}