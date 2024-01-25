/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:19:28 by pineau            #+#    #+#             */
/*   Updated: 2024/01/25 18:00:08 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap clav("ClavTest");
	ScavTrap clav2(clav);
	ScavTrap clav3;

	clav3 = clav2;
	
	std::cout << "---------------------" << std::endl;
	
	for (int i = 0; i < 9; i++)
		clav.attack("target");
	clav.takeDamage(10);
	clav.beRepaired(10);
	clav.attack("target");
	clav.beRepaired(10);
	return (0);
}
