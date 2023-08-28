/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:08:00 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/08/25 14:30:48 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array 
{
    private:
        T *array;
        unsigned int _size;
    public:
        Array( void )
        {
            try
            {
                array = new T();
                _size = 0;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << std::endl;
            }
        }
        Array( unsigned int n )
        {
            try
            {
                array = new T[n];
                _size = n;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << std::endl;
            }

        }
        unsigned int  size() const
        {
            return _size;
        }
        Array(const Array &copy)
        {
            try
            {
                array = new T();
                *this = copy;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << std::endl;
            }
            
        }
        Array & operator=(const Array &assign)
        {
            if(this != &assign)
            {
                try
                {
                    delete [] array;
                    array = new T[assign.size()];
                    _size = assign._size;
                    for(unsigned int i = 0; i < _size;i++)
                    {
                        array[i] = assign.array[i];
                    }
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << std::endl;
                }
            }
            return *this;
        }
        ~Array()
        {
            if(_size > 0)
                delete [] array;
        }
        class  OutOfBounds : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Out of bounds");
                }
        };
        T& operator[](unsigned int index)
        {
            if(index >= _size)
                throw OutOfBounds();
            return array[index];
        }
};

template <typename T>
std::ostream& operator<<(std::ostream &out,Array<T> &array)
{
    for(int i = 0;i < array.size();i++)
    {
        std::cout << array.array[i] << " ";
    }
    std::cout << std::endl;
    return out;
}
#endif // Array_HPP
