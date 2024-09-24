/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:13:48 by besalort          #+#    #+#             */
/*   Updated: 2024/09/24 17:49:07 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
	this->type = "martial art";
	std::cout << "Martial art created." << std::endl;
}

Weapon::Weapon(std::string type) {
	this->type = type;
	std::cout << "[Weapon] " << this->type << " created." << std::endl;
}

Weapon::~Weapon(void) {
	std::cout << "[Weapon] " << this->type << " destroyed." << std::endl;
}

void	Weapon::setType(std::string type) {
	std::cout << "[Weapon]" << BLUE << this->type << WHITE << " evolve to " << BLUE << type << WHITE << std::endl;
	this->type = type;
	return ;
}

const std::string	Weapon::getType() const{
	const std::string& type = this->type;
	return (type);
}
