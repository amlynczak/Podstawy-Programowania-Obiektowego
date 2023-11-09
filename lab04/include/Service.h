#ifndef SERVICE_H
#define SERVICE_H

#include"IceMachine.h"

/**
 * @brief klasa Service, przez ktora przeprowadzamy serwis maszyny
 * 
 */
class Service{
public:
    /**
     * @brief funkcja testuje maszyne - poprzez referencje
     * 
     * @param machine maszyna, ktora chemy stestowac
     * @param count ilosc lodow, ktore maszyna ma w tescie zrobic
     * @return funkcja nic nie zwraca
     */
    void Test(IceMachine* machine, double count);
    
    /**
     * @brief funkcja testuje kopie maszyny
     * 
     * @param machine testowana maszyna
     * @param count ilosc lodow, ktore maszyna ma w tescie zrobic
     * @return funkcja nic nie zwraca
     */
    void TestCopy(const IceMachine machine, double count);
private:
};

#endif