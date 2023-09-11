/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:34:28 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/11 19:12:15 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <vector>
#include <cmath>

void largeSort(std::vector<std::pair<int, int> > &pairs, int start, int end)
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
	largeSort(pairs, start, end - 1);
}
void swapLargElement(std::vector<std::pair<int, int> > &pairs)
{
	for (size_t i = 0; i < pairs.size(); i++)
	{
		if (pairs[i].first > pairs[i].second)
			std::swap(pairs[i].first, pairs[i].second);
	}
}
void print(std::vector<std::pair<int, int> > &pairs, std::string name)
{
	for (size_t i = 0; i < pairs.size(); i++)
	{
		std::cout << pairs[i].first << " " << pairs[i].second << std::endl;
	}
	std::cout << "===== " << name << " ======" << std::endl;
}


void FillStack(std::vector<std::pair<int, int> >& pairs, std::vector<int>& S, std::vector<int>& pend, std::vector<std::vector<int>::iterator>& iteratorsaver) 
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



void Sequence(std::vector<int>& S, std::vector<int>& pend, std::vector<std::vector<int>::iterator>& iteratorsaver, const std::vector<std::pair<int, int> >& pairs) 
{
    (void)pairs;
    (void)S;

    for (size_t i = 1; i < pend.size() ; i++)
    {		
        std::vector<int>::iterator Pos = std::upper_bound(S.begin(), iteratorsaver[i], pend[i]);

        for (size_t j = 0; j < iteratorsaver.size(); j++)
        {
            if (Pos <= iteratorsaver[j])
                iteratorsaver[j]++;
        }
        // std::cout << " pend " << pend[i] << " it " << *iteratorsaver[i] << " Pos " << *Pos << std::endl;
        S.insert(Pos, pend[i]);
    }
}


int main(int argc, char **argv)
{
	std::vector<std::pair<int, int> > pairs;
	std::vector<std::vector<int>::iterator> iteratorsaver;
	std::vector<int> S;
	std::vector<int> pend;
	for (int i = 1; i < argc; i += 2)
	{
		if (i + 1 < argc)
		{
			int value1 = std::strtod(argv[i], NULL);
			int value2 = std::strtod(argv[i + 1], NULL);
			pairs.push_back(std::make_pair(value1, value2));
		}
	}
	swapLargElement(pairs);
	largeSort(pairs, 0, pairs.size() - 1);
	// print(pairs,"s");
	FillStack(pairs,S,pend,iteratorsaver);

	// exit(0);
	clock_t start = clock();
	Sequence(S,pend,iteratorsaver,pairs);
	if(argc % 2 == 0)
	{
        std::vector<int>::iterator Pos = std::upper_bound(S.begin(), S.end(), std::strtod(argv[argc - 1], NULL));
        S.insert(Pos, std::strtod(argv[argc - 1], NULL));
	}


	clock_t end = clock();
	double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;
	for(size_t i = 0;i < S.size();i++ )
	{
		std::cout << S[i] << " ";

		
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << std::fixed << time << " us" << std::endl; 
}
