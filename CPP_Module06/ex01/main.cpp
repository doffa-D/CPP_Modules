/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:44:33 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/22 19:05:19 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    int number = 42;
    double pi = 3.14159;

    // Convert int pointer to double pointer using reinterpret_cast
    int* intPtr = &number;
    double* doublePtr = reinterpret_cast<double*>(intPtr);

    // Convert double pointer back to int pointer
    int* recoveredIntPtr = reinterpret_cast<int*>(doublePtr);

    // Convert a pointer to uintptr_t (integer type)
    uintptr_t uintptr = reinterpret_cast<uintptr_t>(recoveredIntPtr);

    // Convert uintptr_t back to int pointer
    int* finalIntPtr = reinterpret_cast<int*>(uintptr);

    std::cout << "Original number: " << *intPtr << std::endl;
    std::cout << "Converted to double: " << *doublePtr << std::endl;
    std::cout << "Converted back to int: " << *recoveredIntPtr << std::endl;
    std::cout << "Converted uintptr_t: " << uintptr << std::endl;
    std::cout << "Converted back to int: " << *finalIntPtr << std::endl;

    return 0;
}
