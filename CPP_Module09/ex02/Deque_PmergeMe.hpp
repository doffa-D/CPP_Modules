/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deque_PmergeMe.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:09:01 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/14 13:34:44 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DEQUE_PMERGEME_HPP
#define DEQUE_PMERGEME_HPP

#include <iostream>
#include <string.h>
#include <deque>
#include <vector>
#include <cmath>
#include <sstream>

class Deque_PmergeMe 
{

    private:
        std::deque<std::pair<int, int> > pairs;
        std::deque<std::deque<int>::iterator> iteratorsaver;
        std::deque<int> S;
        std::deque<int> pend;
        std::deque<int> jacobsthal;
        std::string last_Value;
    public:
        Deque_PmergeMe();
        Deque_PmergeMe(const Deque_PmergeMe &copy);
        ~Deque_PmergeMe();
        Deque_PmergeMe & operator=(const Deque_PmergeMe &assign);
        void Deque_FillParis(char **argv);
        void SwapLargElement();
        void FillStacks();
        void JacoNumberGenerater();
        void LargeSort(int start, int end);
        int JacobsthalForm(int n);
        void PerformMergesortAndJacoGen(int argc,char **argv);
        void D_mergeInsertionSort();

};

#endif // PmergeMe_HPP
