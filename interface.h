#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <string.h>

class Interface
{
public:
    Interface();

    std::string getNumber();
    void showNumber(std::string);

    std::string number;


};

#endif // INTERFACE_H
