#include"IceMachine.h"

void IceMachine::SetID(int id){
    _id = id;
}

void IceMachine::SetState(bool state){
    _state = state;
}

void IceMachine::SetCapacity(double capacity){
    _capacity = capacity;
}

void IceMachine::SetConsumption(double consumption){
    _consumption = consumption;
}

void IceMachine::SetPowder(double powder){
    _powder = powder;
}

void IceMachine::Presentation(){
    std::cout << "### Prezentacja ###" << std::endl;
    std::cout << "Identyfikator maszyny do lodow wloskich: " << _id << std::endl;
    std::cout << "Maszyna do lodow wloskich jest " << (_state ? "wlaczona" : "wylaczona") << std::endl;
    std::cout << "Pojemnosc maszyny do lodow wloskich wynosi " << _capacity << " kilogramy/kilogramow" << std::endl;
    std::cout << "Srednia wydajnosc wynosi " << _consumption << " kilogramow na 1 porcje" << std::endl;
    std::cout << "W maszynie do lodow wloskich jest " << _powder << " kilogramow proszku" << std::endl << std::endl;
}

void IceMachine::Make(double count){
    std::cout << "### Robienie lodow ###" << std::endl;
    if(count >= 0){
        if(_state){
            if(count > 0){
                double powderNeeded = count * _consumption;
                if(_powder >= powderNeeded){
                    _powder = _powder - powderNeeded;
                    std::cout << "Zrobiles " << count << " porcji lodow" << std::endl << std::endl;
                }else{
                    std::cout << "BLAD: Za duza liczba lodow" << std::endl << std::endl;
                }
            }
        }else{
            std::cout << "BLAD: Wlacz maszyne do lodow wloskich" << std::endl << std::endl;
        }
    }else{
        std::cout << "BLAD: Niepoprawna ilosc porcji" << std::endl << std::endl;
    }

}

void IceMachine::Start(){
    std::cout << "### Uruchomienie maszyny do lodow wloskich ###" << std::endl;
    if(_powder>0){
        _state = true;
        std::cout << "Maszyna do lodow wloskich zostala wlaczona" << std::endl << std::endl;
    }else{
        std::cout << "BLAD: Brak proszku, wsyp" << std::endl << std::endl;
    }
}

void IceMachine::Reload(double quantity){
    std::cout << "### Wsypywanie proszku ###" << std::endl;
    if(_state){
        std::cout << "BLAD: Wylacz maszyne do lodow wloskich przed wsypaniem proszku" << std::endl << std::endl;
    }else{
        if(quantity < 0){
            std::cout << "BLAD: Niepoprawna ilosc proszku do wsypania" << std::endl << std::endl;
        }else if(quantity > (_capacity - _powder)){
            std::cout << "Wsypales " << _capacity - _powder << " kilogram/kilogramow proszku" << std::endl << std::endl;
            _powder = _capacity;
        }else{
            _powder = _powder + quantity;
            std::cout << "Wsypales " << quantity << " kilogram/kilogramow proszku" << std::endl << std::endl;
        }
    }
}

void IceMachine::Stop(){
    std::cout << "### Zatrzymanie maszyny do lodow wloskich ###" << std::endl;
    _state = false;
    std::cout << "Maszyna do lodow wloskich zostala wylaczona" << std::endl << std::endl;
}

void IceMachine::ReloadMax(){
    std::cout << "### Wsypywanie proszku ###" << std::endl;
    if(_state){
        std::cout << "BLAD: Wylacz maszyne do lodow wloskich przed wsypaniem proszku" << std::endl << std::endl;
    }else{
        std::cout << "Wsypales " << _capacity - _powder << " kilogram/kilogramow proszku" << std::endl;
        _powder = _capacity;
    }
}

void IceMachine::serviceStop(){
    _state = false;
}