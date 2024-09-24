/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:13:20 by besalort          #+#    #+#             */
/*   Updated: 2024/09/24 17:16:10 by besalort         ###   ########.fr       */
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
	delete Heap; //Necessaire a cause du mot cle new
	return (0);
}