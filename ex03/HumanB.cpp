/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:41:15 by besalort          #+#    #+#             */
/*   Updated: 2024/04/24 18:32:35 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB() {
	// constructeur
	this->name = "Unknow";
	this->weapon = NULL;
	std::cout << "HumanB " << this->name << " has been created, no weapon equiped. " << std::endl;
}

HumanB::HumanB(std::string name) {
	// constructeur
	this->name = name;
	this->weapon = NULL;
	std::cout << "\033[1;32mHumanB " << this->name << " has been created, no weapon equiped.\033[0m" << std::endl;
}

HumanB::~HumanB() {
	// destructeur
	std::cout << "\033[1;31mHumanB " << this->name << " destroyed\033[0m" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon; //le pointeur sur weapon devient = a la reference du nouveau weapon.
	return ;
}

void	HumanB::attack() {
	if (this->weapon != NULL)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
