/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:33:14 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/11 11:33:14 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongAnimal 
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &copy);
        ~WrongAnimal();
        std::string getType() const;
        void makesound( void ) const;
        WrongAnimal & operator=(const WrongAnimal &assign);
};

#endif // WrongAnimal_HPP
