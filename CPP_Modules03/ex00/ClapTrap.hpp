/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:09:21 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/28 10:09:21 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap 
{
    private:
    public:
        // Constructors
        ClapTrap();
        ClapTrap(const ClapTrap &copy);

        // Destructor
        ~ClapTrap();

        // Operators
        ClapTrap & operator=(const ClapTrap &assign);


};

#endif // ClapTrap_HPP
