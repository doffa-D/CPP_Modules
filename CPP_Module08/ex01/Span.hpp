/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:34:44 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/28 10:40:14 by hdagdagu         ###   ########.fr       */
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
        void get_array();

};

#endif // Span_HPP
