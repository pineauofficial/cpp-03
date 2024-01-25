/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:19:41 by pineau            #+#    #+#             */
/*   Updated: 2024/01/25 14:01:59 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) _hit_points(10), _energy_points(10), _attack_damage(0){
	std::cout << "ClaptTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap & operator=(ClapTrap const & rhs) {
	std::cout << "ClapTrap assignation operator called"<< std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->attack_damage = rhs._attack_damage;
	}
	return (*this);
}

void	ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causinng " << this->_attack_damage << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " be repaired of " << amount << " points of damage !" << std::endl;
}

ClapTrap::std:string	getName(void) const {
	return (this->_name);
}

int	ClapTrap::getHitPoints(void)const {
	return (this->_hit_points);
}

int	ClapTrap::getEnergyPoints(void)const {
	return (this->_energy_points);
}

int	ClapTrap::getAttackDamage(void)const {
	return (this->_attack_damage);
}

void	ClapTrap::setName(std::string name) {
	this->_name = name;
}

void	ClapTrap::setHitPoints(int hit_points) {
	this->_hit_points = hit_points;
}

void	ClapTrap::setEnergyPoints(int energy_points) {
	this->_energy_points = energy_points;
}

void	ClapTrap::setAttackDamage(int attack_damage) {
	this->_attack_damage = attack_damage;
}
