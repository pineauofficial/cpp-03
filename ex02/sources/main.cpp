/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:47:04 by pineau            #+#    #+#             */
/*   Updated: 2024/01/28 16:22:40 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap clap("ClapTest");
	FragTrap Frag("FragTest");
	std::cout << std::endl;
	FragTrap Frag2(Frag);
	FragTrap Frag3;

	Frag3 = Frag2;
	
	std::cout << "---------------------" << std::endl;
	
	
    Frag.highFivesGuys();
	Frag.takeDamage(10);
	Frag.beRepaired(10);
	std::cout << std::endl;
	return (0);
}