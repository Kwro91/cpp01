/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:13:34 by besalort          #+#    #+#             */
/*   Updated: 2024/09/24 17:24:22 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#define RED "\033[1;31m"
#define WHITE "\033[0m"

#include <string>
#include <iostream>

class Zombie {
	private:
		std::string name;

	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		
		void	announce(void);
		void	setName(std::string name);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif