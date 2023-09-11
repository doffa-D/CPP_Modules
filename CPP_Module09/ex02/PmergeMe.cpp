
#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    std::cout << "Default Constructor called of PmergeMe" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
    (void) copy;
    std::cout << "Copy Constructor called of PmergeMe" << std::endl;
}

PmergeMe::~PmergeMe()
{
    std::cout << "Destructor called of PmergeMe" << std::endl;
}

PmergeMe & PmergeMe::operator=(const PmergeMe &assign)
{
    (void) assign;
    return *this;
}
