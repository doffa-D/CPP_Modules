/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deque_PmergeMe.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:07:49 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/14 13:37:25 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Deque_PmergeMe.hpp"

Deque_PmergeMe::Deque_PmergeMe()
{
}

Deque_PmergeMe::Deque_PmergeMe(const Deque_PmergeMe &copy)
{
	*this = copy;
}

Deque_PmergeMe::~Deque_PmergeMe()
{
}

Deque_PmergeMe & Deque_PmergeMe::operator=(const Deque_PmergeMe &assign)
{
	if(this != &assign)
	{
		this->pairs = assign.pairs;
		this->iteratorsaver = assign.iteratorsaver;
		this->S = assign.S;
		this->pend = assign.pend;
		this->jacobsthal = assign.jacobsthal;
	}
    return *this;
}


void Deque_PmergeMe::LargeSort(int start, int end)
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
	Deque_PmergeMe::LargeSort(start, end - 1);
}
void Deque_PmergeMe::SwapLargElement()
{
	for (size_t i = 0; i < pairs.size(); i++)
	{
		if (pairs[i].first > pairs[i].second)
			std::swap(pairs[i].first, pairs[i].second);
	}
}

void Deque_PmergeMe::FillStacks()
{
	S.push_back(pairs[0].first);
	for (size_t i = 0; i < pairs.size(); i++)
	{
		S.push_back(pairs[i].second);
		pend.push_back(pairs[i].first);
	}
	for (std::deque<int>::iterator it = S.begin() + 1; it != S.end(); it++)
	{
		iteratorsaver.push_back(it);
	}
}

int Deque_PmergeMe::JacobsthalForm(int n)
{
	return (std::pow(2, n) - std::pow(-1, n)) / 3;
}

void Deque_PmergeMe::JacoNumberGenerater()
{
	jacobsthal.push_back(JacobsthalForm(0));
	for (size_t i = 3; i < pairs.size(); i++)
	{
		size_t j = JacobsthalForm(i);
		if (j >= pairs.size())
		{
			jacobsthal.push_back(pairs.size() - 1);
			break;
		}
		jacobsthal.push_back(j);
	}
}

void Deque_PmergeMe::D_mergeInsertionSort()
{
	if (pend.size() > 3)
	{
		for (size_t i = 1; i < jacobsthal.size(); i++)
		{
			for (int j = jacobsthal[i]; j > jacobsthal[i - 1]; j--)
			{
				std::deque<int>::iterator Pos = S.begin();
				while (Pos != iteratorsaver[j] && *Pos < pend[j])
				{
					++Pos;
				}
				S.insert(Pos, pend[j]);
			}
		}
	}
	else
	{
		for (size_t i = 1; i < pend.size(); i++)
		{
			std::deque<int>::iterator Pos = S.begin();
			while (Pos != iteratorsaver[i] && *Pos < pend[i])
			{
				++Pos;
			}
			size_t index = std::distance(S.begin(), Pos);
			S.insert(Pos, pend[i]);
			for (size_t x = 0; x < iteratorsaver.size(); x++)
			{
				if (x >= index)
				{
					iteratorsaver[x]++;
				}
			}
		}
	}
	if(!last_Value.empty())
	{
		int last_number = std::strtod(last_Value.c_str(), NULL);
		std::deque<int>::iterator Pos = std::upper_bound(S.begin(), S.end(), last_number);
		S.insert(Pos, last_number);
	}
}

void Deque_PmergeMe::Deque_FillParis(char **argv)
{
	std::deque<std::string> Value;

	for(int i = 1;argv[i];i++)
	{
		std::string arg = argv[i];
		std::istringstream iss(arg);
		std::string v;
		while(iss >> v)
		{
			Value.push_back(v);
		}
	}
	for(size_t i = 0;i < Value.size();i+=2)
	{
		if(i + 1 < Value.size())
		{
			int value1 = std::strtod(Value[i].c_str(), NULL);
			int value2 = std::strtod(Value[i + 1].c_str(), NULL);
			pairs.push_back(std::make_pair(value1,value2));
		}
	}
	if(Value.size() % 2 == 1)
	{
		last_Value = Value[Value.size() - 1];
	}
}

void Deque_PmergeMe::PerformMergesortAndJacoGen(int argc,char **argv)
{
	if(argc == 2)
		return ;
	this->Deque_FillParis(argv);
	this->SwapLargElement();
	this->LargeSort(0, pairs.size() - 1);
	this->FillStacks();
	this->JacoNumberGenerater();
}
