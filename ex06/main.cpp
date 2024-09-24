/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:47:38 by besalort          #+#    #+#             */
/*   Updated: 2024/09/24 18:13:57 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	harlFilter(std::string input) {
	Harl test;
	std::string tab[] = {"debug", "info", "warning", "error"};
	int level = -1;

	for (int i = 0; i < 4; i++)
	{
		if (tab[i] == input)	
			level = i;
	}
	switch (level) {
		case 0:
			test.complain("debug");
		case 1:
			test.complain("info");
		case 2:
			test.complain("warning");
		case 3:
			test.complain("error");
	}
}

int main(int ac, char **av) {
	if (ac != 2)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return 1;
	}
	harlFilter(av[1]);
	
	// test.complain("debug");
	// test.complain("info");
	// test.complain("warning");
	// test.complain("error");
	// test.complain("dontwork");
}