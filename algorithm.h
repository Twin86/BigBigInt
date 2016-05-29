#ifndef ALGORITHM_H
#define ALGORITHM_H
#include <iostream>
#include <string.h>
#include <qlist.h>

class Algorithm
{
<<<<<<< HEAD
    public:
    QList <std::string> bigNumbers;
    bool swap;

=======
public:
    QList <std::string> bigNumbers;

public:
>>>>>>> refs/remotes/Twin86/master
    Algorithm();
    Algorithm(std::string);
    Algorithm(std::string firstBigNumber, std::string secondBigNumber);
    char addSingleNumber(char firstNumber, char secondNumber);
    std::string addBigNumbers(std::string firstBigNumber, std::string secondBigNumber);
    std::string substractBigNumbers(std::string firstBigNumber, std::string secondBigNumber);
    std::string multiplicationBigNumbers(std::string firstBigNumber, std::string secondBigNumber);
    std::string showValue();
};

#endif // ALGORITHM_H
