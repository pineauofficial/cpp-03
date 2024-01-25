/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:19:28 by pineau            #+#    #+#             */
/*   Updated: 2024/01/25 15:00:48 by pineau           ###   ########.fr       */
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
	for (int i = 0; i < 9; i++)
		clap.attack("target");
	clap.takeDamage(10);
	clap.beRepaired(10);
	clap.attack("target");
	clap.beRepaired(10);
	
	return (0);
}