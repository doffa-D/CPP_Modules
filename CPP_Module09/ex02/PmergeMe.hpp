
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>

class PmergeMe 
{
    private:
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        ~PmergeMe();
        PmergeMe & operator=(const PmergeMe &assign);
};

#endif // PmergeMe_HPP
