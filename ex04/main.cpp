/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:15:27 by besalort          #+#    #+#             */
/*   Updated: 2024/04/25 20:04:03 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <fstream>

void	replaceS1toS2(std::string filename, std::string s1, std::string s2) {
	std::ifstream	file(filename);
	std::string		line;
	std::string		str;
	size_t			pos;

	if (file.is_open())
	{
		std::ofstream rfile(filename + ".replace");
		while (getline(file, line))
		{
			str += line;
			if (!file.eof())
				str += '\n';
		}
		pos = str.find(s1);
		while (pos < str.length())
		{
			str.erase(pos, s1.length());
			str.insert(pos, s2);
			pos = str.find(s1);
		}
		rfile << str;
		file.close();
		rfile.close();
	}
	else
		std::cout << "Error: file does not exist" << std::endl;
}

int	main(int ac, char **av) {
	if (ac != 4)
	{
		std::cout << "Error: wrong nb of arg." << std::endl;
		return (1);
	}
	else
		replaceS1toS2(av[1], av[2], av[3]);
		
}