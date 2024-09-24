/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:10:52 by besalort          #+#    #+#             */
/*   Updated: 2024/09/24 17:43:25 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string.h>
#include <iostream>

#define WHITE "\033[0m"
#define RED "\033[1;31m"
#define BLUE "\033[1;34m"
#define GREEN "\033[1;32m"

class Weapon {
	private:
		std::string type;

	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

		void				setType(std::string type);
		const std::string	getType() const;
};

#endif
