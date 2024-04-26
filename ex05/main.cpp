/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:47:38 by besalort          #+#    #+#             */
/*   Updated: 2024/04/26 17:27:40 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	Harl test;
	test.complain("debug");
	test.complain("info");
	test.complain("warning");
	test.complain("error");
	test.complain("dontwork");
}