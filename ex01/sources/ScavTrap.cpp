/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:09:34 by pineau            #+#    #+#             */
/*   Updated: 2024/01/28 16:07:19 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(){
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src){
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & rhs) {
	std::cout << "ScavTrap assignation operator called"<< std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->_name << " is keeping the gate" << std::endl;
}

void	ScavTrap::attack(std::string const & target) {
	if (this->_energy_points < 1)
		std::cout << "ScavTrap " << this->_name << " can't attack because he has no energy !" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " attack " << target << ", causinng " << this->_attack_damage << " points of damage !" << std::endl;
		this->_energy_points -= 1;//passer a 10 pour la correction
	}
}