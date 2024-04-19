/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:13:20 by besalort          #+#    #+#             */
/*   Updated: 2024/04/19 16:10:58 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie	Roger("Roger"); //constructeur avec une string
	Zombie	nameless; //constructeur par defaut
	Zombie*	Heap = newZombie("Heap");

	Roger.announce();
	nameless.announce();
	nameless.setName("Guillaume");
	nameless.announce();
	Heap->announce();
	randomChump("Stack");
	Heap->~Zombie();
	return (0);
}