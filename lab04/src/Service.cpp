#include"Service.h"

void Service::Test(IceMachine* machine, double count){
    if(machine){
        machine->serviceStop();

        std::cout << "#############################################################" << std::endl;
        std::cout << "### Test serwisowy ###" << std::endl << std::endl;
        std::cout << "1. Wsyp proszek do pelna:" << std::endl;

        machine->ReloadMax();

        std::cout << "2. Przebieg testowy: " << count << " porcji:" << std::endl;

        machine->Start();
        machine->Make(count);
        machine->Stop();

        std::cout << "### Koniec testu serwisowego ###" << std::endl;
        std::cout << "#############################################################" << std::endl << std::endl;
    }
}

void Service::TestCopy(const IceMachine machine, double count){
    IceMachine copyMachine = machine;

    copyMachine.serviceStop();

    std::cout << "#############################################################" << std::endl;
    std::cout << "### Test serwisowy ###" << std::endl << std::endl;
    std::cout << "1. Wsyp proszek do pelna:" << std::endl;

    copyMachine.ReloadMax();

    std::cout << "2. Przebieg testowy: " << count << " porcji:" << std::endl;

    copyMachine.Start();
    copyMachine.Make(count);
    copyMachine.Stop();

    std::cout << "### Koniec testu serwisowego ###" << std::endl;
    std::cout << "#############################################################" << std::endl << std::endl;
}