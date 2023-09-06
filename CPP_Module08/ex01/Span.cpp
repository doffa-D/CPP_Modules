/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:34:41 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/09/06 19:46:19 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(100)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span::~Span()
{
}

Span & Span::operator=(const Span &assign)
{
    if(this != &assign)
    {
        _N = assign._N;
        _array = assign._array;
    }
    return *this;
}
void Span::addNumber(unsigned int num)
{
    if(_array.size() >= _N)
        throw std::out_of_range("Span is already full");
    else
        _array.push_back(num);
}
int Span::shortestSpan() 
{
    if(_array.size() < 2)
        throw std::out_of_range("shortestSpan list:: is empty");
    _array.sort();
    int _short = INT_MAX;
    std::list<int>::iterator prev = _array.begin();
    for (std::list<int>::iterator next = std::next(_array.begin()); next != _array.end(); ++next)
    {
        int diff = *next - *prev;
        if(_short > diff)
            _short = diff;
        prev = next;
    }
    return _short;
}
int Span::longestSpan()
{
    if(_array.size() < 2)
        throw std::out_of_range("longestSpan list:: is empty");
    std::list<int>::iterator max = std::max_element(_array.begin(), _array.end());
    std::list<int>::iterator min = std::min_element(_array.begin(), _array.end());
    return (*max - *min);
}

void Span::addNumber(std::list<int>::iterator begin,std::list<int>::iterator end)
{
    if(_array.size() + *end >= _N)
        throw std::out_of_range("Span is already full");
    _array.insert(_array.end(),begin,end);
}