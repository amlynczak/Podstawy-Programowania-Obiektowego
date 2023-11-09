#include"Array.h"

int* InitArray(int size){
    int* tmp;
    if(size>0){
        tmp = new int[size];
    }else{
        tmp = nullptr;
    }
    return tmp;
}

void CreateSequence(int* arr, int size){
    if(size>0){
        arr[0] = 0;
        for(int i=1; i<size; i++){
            arr[i] = arr[i-1] + i;
        }
    }
}

int* ChangeArraySize(int *arr, int size, int newSize){
    int* tmp; 
    if(newSize>0){
        tmp = new int[newSize];
        for(int i=0; i<size; i++){
            tmp[i] = arr[i];
        }
    }else{
        tmp = nullptr;
    }
    delete[] arr;
    return tmp;
}

void DeleteArray(int *arr){
    delete[] arr;
}