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
    Algorithm(std::string bigNumber);
    Algorithm(std::string firstBigNumber, std::string secondBigNumber);
    char addSingleNumber(char firstNumber, char secondNumber);
    std::string addBigNumbers(std::string firstBigNumber, std::string secondBigNumber);
    std::string substractBigNumbers(std::string firstBigNumber, std::string secondBigNumber);
    std::string multiplicationBigNumbers(std::string firstBigNumber, std::string secondBigNumber);
};

#endif // ALGORITHM_H
