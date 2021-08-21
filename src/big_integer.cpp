#include "big_integer.hpp"
#include <iterator>

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


std::string Pw::BigInteger::toString()
{
    std::stringstream res;
    std::copy(
        data.begin(), 
        data.end(), 
        std::ostream_iterator<int>(res, "")
    );
            
    return res.str();
}
