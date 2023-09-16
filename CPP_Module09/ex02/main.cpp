/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:34:28 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/16 19:45:52 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector_PmergeMe.hpp"
#include "Deque_PmergeMe.hpp"

int main(int argc, char **argv)
{
		
	Vector_PmergeMe Vector;
	clock_t start_Vector = clock();
	Vector.PerformMergesortAndJacoGen(argc,argv);
	Vector.V_mergeInsertionSort();
	clock_t end_Vector = clock();
	Vector.After_Print_Stacks();


	Deque_PmergeMe Deque;
	clock_t start_Deque = clock();
	Deque.PerformMergesortAndJacoGen(argc,argv);
	Deque.D_mergeInsertionSort();
	clock_t end_Deque = clock();

	
	double Vector_time = static_cast<double>(end_Vector - start_Vector) / CLOCKS_PER_SEC * 1000;
	double Deque_time = static_cast<double>(end_Deque - start_Deque) / CLOCKS_PER_SEC * 1000;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << std::fixed << Vector_time << " us" << std::endl; 
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::Deque : " << std::fixed << Deque_time << " us" << std::endl; 
	return EXIT_SUCCESS;
}

