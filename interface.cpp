#include "interface.h"


Interface::Interface()
{

}

Algorithm Interface::getNumber(){

    std::cout<<"Podaj liczbę :";

    std::string temp;
    std::getline(std::cin,temp);

    return  Algorithm(temp);
}


void Interface::showNumber(Algorithm obj){
    std::cout<<obj.showValue()<<std::endl;
}
