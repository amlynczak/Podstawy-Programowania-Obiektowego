#ifndef ARMYC_H
#define ARMYC_H

#include"AndroidSoldier.h"

class ArmyC{
public:
    ArmyC();
    ArmyC(const ArmyC& other);
    ArmyC(ArmyC&& other);
    ~ArmyC();

    ArmyC& operator=(ArmyC& other);
    ArmyC& operator=(ArmyC&& other);

    void Print();
    void Add(AndroidSoldier soldier);
    void Remove();
    void Clear();
private:
    AndroidSoldier *_soldiers;
    int _quantity;
};

#endif