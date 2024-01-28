/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:19:28 by pineau            #+#    #+#             */
/*   Updated: 2024/01/28 16:06:10 by pineau           ###   ########.fr       */
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
	for (int i = 0; i < 6; i++)
		clav.attack("target");
    clav.guardGate();
	std::cout << std::endl;
	return (0);
}
