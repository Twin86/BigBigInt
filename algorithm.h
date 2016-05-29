#ifndef ALGORITHM_H
#define ALGORITHM_H
#include <iostream>
#include <string.h>
#include <qlist.h>

class Algorithm
{
public:
    QList <std::string> bigNumbers;

public:
    Algorithm();
    Algorithm(std::string);
    Algorithm(std::string firstBigNumber, std::string secondBigNumber);
    std::string addBigNumbers(std::string firstBigNumber, std::string secondBigNumber);
    std::string substractBigNumbers(std::string firstBigNumber, std::string secondBigNumber);
    std::string multiplicationBigNumbers(std::string firstBigNumber, std::string secondBigNumber);
    std::string showValue();
};

#endif // ALGORITHM_H
