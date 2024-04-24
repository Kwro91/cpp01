/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:30:17 by besalort          #+#    #+#             */
/*   Updated: 2024/04/24 18:34:34 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon) {
	// constructeur avec un weapon en parametre. on set la var weapon sur le weapon passe en parametre directement dans l'entete.
	this->name = name;
	std::cout << "\033[1;32mHumanA " << this->name << " has been created, weapon equiped: " << this->weapon.getType() << "\033[0m" << std::endl;
}

HumanA::~HumanA() {
	// destructeur
	std::cout << "\033[1;31mHumanA " << this->name << " destroyed\033[0m" << std::endl;
}

void	HumanA::attack() {
		std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}