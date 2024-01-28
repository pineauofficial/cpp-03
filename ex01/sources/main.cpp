/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:19:28 by pineau            #+#    #+#             */
/*   Updated: 2024/01/28 16:42:23 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap("ClapTest");
	ScavTrap clav("ClavTest");
	std::cout << std::endl;
	ScavTrap clav2(clav);
	ScavTrap clav3;

	clav3 = clav2;
	
	std::cout << "---------------------" << std::endl;
	
	clap.attack("target");
	for (int i = 0; i < 4; i++)
		clav.attack("target");
    clav.guardGate();
	clav.beRepaired(10);
	clav.takeDamage(10);
	clav.attack("target");
	clav.attack("target");

	std::cout << std::endl;
	return (0);
}
