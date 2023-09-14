/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector_PmergeMe.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:07:49 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/14 13:37:25 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector_PmergeMe.hpp"

void Vector_PmergeMe::LargeSort(int start, int end)
{
	if (start >= end)
		return;

	int maxIndex = start;
	for (int i = start + 1; i <= end; ++i)
	{
		if (pairs[i].second > pairs[maxIndex].second)
		{
			maxIndex = i;
		}
	}

	std::swap(pairs[maxIndex], pairs[end]);
	Vector_PmergeMe::LargeSort(start, end - 1);
}
void Vector_PmergeMe::SwapLargElement()
{
	for (size_t i = 0; i < pairs.size(); i++)
	{
		if (pairs[i].first > pairs[i].second)
			std::swap(pairs[i].first, pairs[i].second);
	}
}

void Vector_PmergeMe::FillStacks() 
{
	S.reserve(pairs.size() * 2);
    S.push_back(pairs[0].first);
    for (size_t i = 0; i < pairs.size(); i++) 
    {
        S.push_back(pairs[i].second);
        pend.push_back(pairs[i].first);
    }
    for (std::vector<int>::iterator it = S.begin() + 1; it != S.end(); it++)
    {
        iteratorsaver.push_back(it);
    }
}

int Vector_PmergeMe::JacobsthalForm(int n)
{
	return (std::pow(2, n) - std::pow(-1, n)) / 3;
}

void Vector_PmergeMe::JacoNumberGenerater()
{
	jacobsthal.push_back(JacobsthalForm(0));
	for(size_t i = 3; i < pairs.size();i++)
	{
		size_t j = JacobsthalForm(i);
		if(j >= pairs.size())
		{
			jacobsthal.push_back(pairs.size() - 1);
			break;
		}
		jacobsthal.push_back(j);
	}
}


void Vector_PmergeMe::V_mergeInsertionSort(int argc,char **argv)
{
	if(pend.size() > 3)
	{
		for(size_t i = 1;i < jacobsthal.size();i++)
		{
			for(int j = jacobsthal[i];j > jacobsthal[i - 1];j--)
			{				
				std::vector<int>::iterator Pos = std::upper_bound(S.begin(), iteratorsaver[j], pend[j]);
				for (size_t x = 0; x < iteratorsaver.size(); x++)
				{
					if (Pos <= iteratorsaver[x])
						iteratorsaver[x]++;
				}
				S.insert(Pos, pend[j]);
			}	
		}
	}
	else
	{
		for(size_t i = 1;i < pend.size();i++)
		{
			std::vector<int>::iterator Pos = std::upper_bound(S.begin(), iteratorsaver[i], pend[i]);
			for (size_t x = 0; x < iteratorsaver.size(); x++)
			{
				if (Pos <= iteratorsaver[x])
					iteratorsaver[x]++;
			}
			S.insert(Pos, pend[i]);
		}
	}
	if(argc % 2 == 0)
	{
		int last_number = std::strtod(argv[argc - 1], NULL);
        std::vector<int>::iterator Pos = std::upper_bound(S.begin(), S.end(),last_number );
        S.insert(Pos, last_number);
	}
}

void Vector_PmergeMe::Vector_FillParis(int argc,char **argv)
{
	for (int i = 1; i < argc; i += 2)
	{
		if (i + 1 < argc)
		{
			int value1 = std::strtod(argv[i], NULL);
			int value2 = std::strtod(argv[i + 1], NULL);
			pairs.push_back(std::make_pair(value1, value2));
		}
	}
}

void Vector_PmergeMe::Befor_Print_Stacks(int argc,char **argv)
{
	std::cout << "Before: " ;
	for(size_t i = 0;i < pairs.size();i++)
	{
		std::cout << pairs[i].first << " " << pairs[i].second << " ";
	}
	if(argc % 2 == 0)
		std::cout << argv[argc - 1];
	std::cout << std::endl;
}

void Vector_PmergeMe::After_Print_Stacks()
{
	std::cout << "After: " ;
	for(size_t i = 0;i < S.size();i++)
	{
		std::cout << S[i] << " ";
	}
	std::cout << std::endl;

}


void Vector_PmergeMe::PerformMergesortAndJacoGen(int argc,char **argv)
{
	this->Vector_FillParis(argc,argv);
	this->Befor_Print_Stacks(argc,argv);
	this->SwapLargElement();
	this->LargeSort(0,pairs.size() - 1);
	this->FillStacks();
	this->JacoNumberGenerater();
}
