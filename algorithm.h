#ifndef ALGORITHM_H
#define ALGORITHM_H
#include <iostream>
#include <string.h>
#include <qlist.h>

class Algorithm
{
    public:
    QList <std::string> bigNumbers;
    bool swap;

    Algorithm();
    Algorithm(std::string);
    Algorithm(std::string firstBigNumber, std::string secondBigNumber);
    char addSingleNumber(char , char );

    std::string addBigNumbers(std::string firstBigNumber, std::string secondBigNumber);
    std::string substractBigNumbers(std::string firstBigNumber, std::string secondBigNumber);
    std::string multiplicationBigNumbers(std::string firstBigNumber, std::string secondBigNumber);
    std::string showValue();


    //seba
     char substractSingleNumber(char , char );
};

#endif // ALGORITHM_H
