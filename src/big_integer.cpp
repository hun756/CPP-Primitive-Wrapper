#include "big_integer.hpp"

Pw::BigInteger::BigInteger(std::string str)
    :   data({})
{
    std::stringstream ss(str);

    char numChr;
    while (ss >> numChr)
        data.push_back(numChr - '0');
}



std::vector<int> Pw::BigInteger::value() const
{
    return data;
}
