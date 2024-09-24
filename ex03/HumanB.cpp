/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:41:15 by besalort          #+#    #+#             */
/*   Updated: 2024/09/24 17:48:07 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB() {
	// constructeur
	this->name = "Unknow";
	this->weapon = NULL;
	std::cout << GREEN << "HumanB " << this->name << " has been created, no weapon equiped." << WHITE << std::endl;
}

HumanB::HumanB(std::string name) {
	// constructeur
	this->name = name;
	this->weapon = NULL;
	std::cout << GREEN << "HumanB " << this->name << " has been created, no weapon equiped." << WHITE << std::endl;
}

HumanB::~HumanB() {
	// destructeur
	std::cout << RED << "HumanB " << this->name << " destroyed" << WHITE << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon; //le pointeur sur weapon devient = a la reference du nouveau weapon.
	std::cout << "HumanB " << this->name << " equip " << BLUE << weapon.getType() << WHITE << std::endl;
	return ;
}

void	HumanB::attack() const{
	if (this->weapon != NULL)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
