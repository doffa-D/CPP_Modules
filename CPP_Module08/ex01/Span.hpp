/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:34:44 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/06 19:41:15 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <list>
#include <algorithm>

class Span 
{
    private:
        std::list<int> _array;
        unsigned int _N;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &copy);
        ~Span();
        Span & operator=(const Span &assign);
        void addNumber(unsigned int num);
        int shortestSpan();
        int longestSpan();
        void addNumber(std::list<int>::iterator begin,std::list<int>::iterator end);
};

#endif // Span_HPP
