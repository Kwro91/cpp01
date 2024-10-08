/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:30:22 by besalort          #+#    #+#             */
/*   Updated: 2024/09/24 17:45:24 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA {
	private:
		std::string	name;
		Weapon&		weapon;

	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		
		void	attack() const;
};

#endif
