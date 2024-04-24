/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:13:48 by besalort          #+#    #+#             */
/*   Updated: 2024/04/24 18:37:35 by besalort         ###   ########.fr       */
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
	std::cout << "[Weapon] \033[1;34m" << this->type << "\033[0m became \033[1;34m" << type << "\033[0m" << std::endl;
	this->type = type;
	return ;
}

const std::string	Weapon::getType() {
	const std::string& type = this->type;
	return (type);
}
