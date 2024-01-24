/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:51:04 by gcavanna          #+#    #+#             */
/*   Updated: 2024/01/24 20:06:15 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
    public: 
        virtual ~Base();
};

class A : public Base{};

class B : public Base{};

class C : public Base{};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

#endif