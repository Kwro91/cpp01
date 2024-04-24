/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:41:06 by besalort          #+#    #+#             */
/*   Updated: 2024/04/24 18:27:29 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB {
	private:
		std::string	name;
		Weapon*		weapon;

	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		
		void	setWeapon(Weapon& weapon);
		void	attack();
};

#endif
