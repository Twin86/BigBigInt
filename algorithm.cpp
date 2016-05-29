#include "algorithm.h"

Algorithm::Algorithm()
{

}

Algorithm::Algorithm(std::string bigNumber)
{
    bigNumbers.append(bigNumber);
}

std::string Algorithm::showValue(){
    return bigNumbers[0];
}
