/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:48:57 by besalort          #+#    #+#             */
/*   Updated: 2024/04/22 20:25:02 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main() {
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "STR ADR = " << &str << std::endl;
	std::cout << "PTR ADR = " << stringPTR << std::endl;
	std::cout << "REF ADR = " << &stringREF << std::endl;
	std::cout << "/////////////////////////////////" << std::endl;
	std::cout << "STR VAL = " << str << std::endl;
	std::cout << "PTR VAL = " << *stringPTR << std::endl;
	std::cout << "REF VAL = " << stringREF << std::endl;
	return (0);
}