#include "interface.h"


Interface::Interface()
{

}

void Interface::getNumber(){

    std::cout<<"Podaj liczbę :";
    std::getline(std::cin,number);

}


void Interface::runProg(){

    this->getNumber();
}
