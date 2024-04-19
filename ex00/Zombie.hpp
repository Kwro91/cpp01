/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:13:34 by besalort          #+#    #+#             */
/*   Updated: 2024/04/19 16:03:23 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {
	private:
		std::string name;

	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		
		void	announce(void);
		void	setName(std::string name);
		void	hello(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif