/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector_PmergeMe.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:09:01 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/16 20:05:03 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef VECTOR_PMERGEME_HPP
#define VECTOR_PMERGEME_HPP

#include <iostream>
#include <string.h>
#include <vector>
#include <deque>
#include <cmath>
#include <sstream>

class Vector_PmergeMe 
{

    private:
        std::vector<std::pair<int, int> > pairs;
        std::vector<std::vector<int>::iterator> iteratorsaver;
        std::vector<int> S;
        std::vector<int> pend;
        std::vector<int> jacobsthal;
        std::string last_Value;
    public:
        Vector_PmergeMe();
        Vector_PmergeMe(const Vector_PmergeMe &copy);
        ~Vector_PmergeMe();
        Vector_PmergeMe & operator=(const Vector_PmergeMe &assign);
        void Vector_FillParis(char **argv);
        void SwapLargElement();
        void FillStacks();
        void JacoNumberGenerater();
        void LargeSort(int start, int end);
        int JacobsthalForm(int n);
        void PerformMergesortAndJacoGen(int argc,char **argv);
        void V_mergeInsertionSort();
        void After_Print_Stacks();
};

#endif // PmergeMe_HPP
