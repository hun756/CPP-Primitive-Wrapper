#include "integer.hpp"

Pw::Integer::Integer(int val) 
{

}


Pw::Integer::operator int() 
{
    return data;
}


std::string Pw::Integer::toString() const
{
    return std::to_string(data);
}


int Pw::Integer::value() const
{
    return data;
}


std::string Pw::Integer::toHexString() 
{
    std::stringstream ss;

    ss << std::hex << data;

    return ss.str();
}


std::unique_ptr<std::byte[]> Pw::Integer::toByteArray() 
{
    std::unique_ptr<std::byte[]> byteArray(new std::byte[4]);

     for (int i = 0; i < 4; i++)
         byteArray[3 - i] = std::byte(data >> (i * 8));
     return byteArray;

    return byteArray;
}