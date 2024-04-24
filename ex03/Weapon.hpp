/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:10:52 by besalort          #+#    #+#             */
/*   Updated: 2024/04/24 18:10:53 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string.h>
#include <iostream>

class Weapon {
	private:
		std::string type;

	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

		void				setType(std::string type);
		const std::string	getType();
};

#endif
