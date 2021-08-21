#ifndef INTEGER_HPP
#define INTEGER_HPP

#include <string>
#include <sstream>
#include <limits>
#include <memory>

namespace Pw 
{
    class Integer
    {
    public:
        /* Life Time Management */

        /**
         *  @brief Construct a new Integer object
         * 
        **/
        Integer() = default;


        /**
         * @brief Construct a new Integer object
         * 
        **/
        Integer(int);


        /**
         * @brief 
         * 
         * @return int 
         */
        operator int();


        /**
         * @brief 
         * 
         * @tparam T 
         * @param pVal 
        **/
        template<typename T>
        void parse(T pVal)
        {
            std::stringstream ss;
            ss << pVal;

            ss >> data;
        }


        /**
         * @brief 
         * 
         * @return std::string 
        **/
        std::string toString() const;


        /**
         * @brief 
         * 
         * @return int 
         */
        int value() const;


        /**
         * @brief 
         * 
         * @return std::string 
        **/
        std::string toHexString();


        /**
         * @brief 
         * 
         * @return std::unique_ptr<std::byte> 
         */
        std::unique_ptr<std::byte[]> toByteArray();

    public:
        /* Constants */
        const static int Min = std::numeric_limits<int>::min();
        const static int Max = std::numeric_limits<int>::max();

    private:
        int data;
    };
}

#endif /* end of include guard :  INTEGER_HPP */