#include "interface.h"


Interface::Interface()
{

}

std::string Interface::getNumber(){

    std::cout<<"Podaj liczbę :";
    std::getline(std::cin,number);
    return number;
}


void Interface::showNumber(std::string result){

}
