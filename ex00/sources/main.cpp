/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:19:28 by pineau            #+#    #+#             */
/*   Updated: 2024/01/28 16:38:23 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("ClapTest");
	ClapTrap clap2(clap);
	ClapTrap clap3;
	
	clap3 = clap2;
	std::cout << "---------------------" << std::endl;
	for (int i = 0; i < 5; i++)
		clap.attack("target");
	clap.beRepaired(10);
	clap.takeDamage(10);
	clap.takeDamage(10);
	clap.beRepaired(10);
	std::cout << std::endl;
	
	return (0);
}