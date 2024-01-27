/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:46:56 by pineau            #+#    #+#             */
/*   Updated: 2024/01/27 15:48:20 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(100), _energy_points(50), _attack_damage(20) {
	std::cout << "ClaptTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "ClapTrap assignation operator called"<< std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

void	ClapTrap::attack(std::string const & target) {
	if (this->_energy_points < 1)
		std::cout << "ClapTrap " << this->_name << "can't attack because he has no energy !" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " attack " << target << ", causinng " << this->_attack_damage << " points of damage !" << std::endl;
		this->_energy_points -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy_points < 1)
		std::cout << "ClapTrap " << this->_name << "can't be repaired because he has no energy !" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " be repaired of " << amount << " points of damage !" << std::endl;
		this->_energy_points -= 1;
	}
}