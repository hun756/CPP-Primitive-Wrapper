#ifndef BIG_INTEGER_HPP
#define BIG_INTEGER_HPP

#include <string>
#include <sstream>
#include <vector>

namespace Pw
{
    class BigInteger
    {
    public:
        /**
         * @brief Construct a new Big Integer object
         * 
         * @param str 
         */
        BigInteger(std::string str);


        std::vector<int> value() const;

    private:
        std::vector<int> data; 
    };
} // namespace Pw


#endif /* end of include guard :  BIG_INTEGER_HPP */
