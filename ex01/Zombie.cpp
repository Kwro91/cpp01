/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:13:43 by besalort          #+#    #+#             */
/*   Updated: 2024/04/19 16:12:10 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	// Constructeur defaut;
	this->name = "Undead";
	return ;
}

Zombie::Zombie(std::string name) {
	// Constructeur name;
	this->name = name;
	return ;
}

Zombie::~Zombie(void) {
	// destructeur
	std::cout << "\033[1;31m" << this->name << " destroyed\033[0m" << std::endl;
	return ;
}

void	Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name) {
	this->name = name;
	return ;
}

void	Zombie::hello(void) {
	std::cout << "grrrr... My name is " << this->name << " and i am a grrrr... Zombie..." << std::endl;
	return ;
}