/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Read.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdagdagu <hdagdagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:28:39 by hdagdagu          #+#    #+#             */
/*   Updated: 2023/07/24 10:00:39 by hdagdagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_HPP
#define READ_HPP
#include <iostream>
#include <fstream>

class Read
{
    private:
        std::string input_file;
        std::string output_file;
    public:
        Read(std::string file_name);
        ~Read();
        void Reaplace(std::string finde,std::string reaplace);
};

#endif // !READ_HPP