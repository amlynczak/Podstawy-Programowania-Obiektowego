#ifndef ARMYA_H
#define ARMYA_H

#include"AndroidSoldier.h"

class ArmyA{
public:
    ArmyA();
    ArmyA(const ArmyA& other);
    ~ArmyA();

    ArmyA& operator=(ArmyA& other);

    void Print();
    void Remove();
    void Add(AndroidSoldier soldier);
    void Clear();
private:
    AndroidSoldier _soldiers[10];
    int _quantity;
};

#endif