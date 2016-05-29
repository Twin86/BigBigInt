#include "algorithm.h"
Algorithm::Algorithm()
{
    swap = false;
}
Algorithm::Algorithm(std::string firstBigNumber, std::string secondBigNumber)
{
    Algorithm::bigNumbers.append(firstBigNumber);
    Algorithm::bigNumbers.append(secondBigNumber);
    swap = false;
}
std::string Algorithm::addBigNumbers(std::string firstBigNumber, std::string secondBigNumber){
    QList <std::string> result;

    //result.append(firstBigNumber[0] + secondBigNumber[0]);
}
char Algorithm::addSingleNumber(char a, char b){
    if (a == '0' && b =='0'){
        if(swap)
        {
            swap = false;
            return '1';
        }
        return '0';
    }
    if (a == '0' && b =='1' || a == '1' && b =='0' ){
        if(swap)
        {
            swap = true;
            return '0';
        }
        return '1';
    }
    if (a == '1' && b =='1'){
        swap = true;
        if (swap) return 1;
        return 0;
    }
}

Algorithm::Algorithm(std::string bigNumber)
{
    bigNumbers.append(bigNumber);
}

std::string Algorithm::showValue(){
    return bigNumbers[0];
}
