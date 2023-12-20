#ifndef ARMYB_H
#define ARMYB_H

#include"AndroidSoldier.h"

class ArmyB{
public:
    ArmyB();
    ArmyB(const ArmyB& other);
    ~ArmyB();

    ArmyB& operator=(ArmyB& other);

    void Print();
    void Add(AndroidSoldier soldier);
    void Remove();
    void Clear();
private:
    AndroidSoldier *_soldiers;
    int _quantity;
};

#endif