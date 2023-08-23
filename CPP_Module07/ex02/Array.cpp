
#include "Array.hpp"

Array::Array()
{
    std::cout << "Default Constructor called of Array" << std::endl;
}

Array::Array(const Array &copy)
{
    (void) copy;
    std::cout << "Copy Constructor called of Array" << std::endl;
}

Array::~Array()
{
    std::cout << "Destructor called of Array" << std::endl;
}

Array & Array::operator=(const Array &assign)
{
    (void) assign;
    return *this;
}
