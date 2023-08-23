/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:44:33 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/23 11:20:57 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
int main()
{
    A a;
    B b;
    Base base;
    base.generate();
    base.identify(&b);
    base.identify(b);
}