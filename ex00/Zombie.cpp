/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:13:43 by besalort          #+#    #+#             */
/*   Updated: 2024/09/24 17:21:10 by besalort         ###   ########.fr       */
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
	std::cout << RED << this->name << " destroyed" << WHITE << std::endl;
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
