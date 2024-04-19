/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:13:20 by besalort          #+#    #+#             */
/*   Updated: 2024/04/19 18:27:00 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	int	nb = 5;
	Zombie*	Horde;

	Horde = zombieHorde(nb, "WalkingDead");
	for (int i = 0; i < nb ; i++)
	{
		Horde[i].announce();
		// Horde->~Zombie();
	}
	delete Horde[i];
	return (0);
}