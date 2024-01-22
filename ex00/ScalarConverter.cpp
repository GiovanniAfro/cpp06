/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:13:21 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/23 00:17:05 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    (void)other;
    return ;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Default constructor called of Sca" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return (*this);
}
