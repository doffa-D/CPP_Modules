/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector_PmergeMe.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:09:01 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/14 13:34:44 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string.h>
#include <vector>
#include <deque>
#include <cmath>

class Vector_PmergeMe 
{

    private:
        std::vector<std::pair<int, int> > pairs;
        std::vector<std::vector<int>::iterator> iteratorsaver;
        std::vector<int> S;
        std::vector<int> pend;
        std::vector<int> jacobsthal;
    public:
        void Vector_FillParis(int argc,char **argv);
        void SwapLargElement();
        void FillStacks();
        void JacoNumberGenerater();
        void LargeSort(int start, int end);
        int JacobsthalForm(int n);
        void PerformMergesortAndJacoGen(int argc,char **argv);
        void V_mergeInsertionSort(int argc,char **argv);
        void Befor_Print_Stacks(int argc,char **argv);
        void After_Print_Stacks();
};

#endif // PmergeMe_HPP
