/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:30:17 by besalort          #+#    #+#             */
/*   Updated: 2024/09/24 17:45:31 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon) {
	// constructeur avec un weapon en parametre. on set la var weapon sur le weapon passe en parametre directement dans l'entete.
	this->name = name;
	std::cout << GREEN << "HumanA " << this->name << " has been created, weapon equiped: " << this->weapon.getType() << WHITE << std::endl;
}

HumanA::~HumanA() {
	// destructeur
	std::cout << RED << "HumanA " << this->name << " destroyed" << WHITE << std::endl;
}

void	HumanA::attack() const{
		std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}