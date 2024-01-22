/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:04:51 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/23 00:16:06 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include <stdexcept>
#include <cctype>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ~ScalarConverter();

        ScalarConverter &operator=(const ScalarConverter &other);
    public:
        static void convert(const std::string &literal);
};  

#endif