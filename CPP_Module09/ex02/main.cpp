/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:34:28 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/14 13:39:04 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector_PmergeMe.hpp"

int main(int argc, char **argv)
{
	Vector_PmergeMe Vector;
	Vector.PerformMergesortAndJacoGen(argc,argv);
	clock_t start_Vector = clock();
	Vector.V_mergeInsertionSort(argc,argv);
	clock_t end_Vector = clock();
	Vector.After_Print_Stacks();

	double Vector_time = static_cast<double>(end_Vector - start_Vector) / CLOCKS_PER_SEC * 1000;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << std::fixed << Vector_time << " us" << std::endl; 


}

