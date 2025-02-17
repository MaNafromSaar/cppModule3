/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:32:15 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/17 11:40:53 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : 
	ClapTrap("Rihanna"), 
	ScavTrap(name), 
	FragTrap(name),
	Name(name) 
{
	this->HitPoints = FragTrap::defaultHitPoints;
	this->EnergyPoints = ScavTrap::defaultEnergyPoints;
	this->AttackDamage = FragTrap::defaultAttackDamage;
	std::cout << "DiamondTrap " << this->Name 
	<< " has been constructed." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->Name
	<< " has been destroyed." << std::endl;
}

void DiamondTrap::attack(std::string const & target) {
	if (this->EnergyPoints < 1) {
		std::cout << "Trap " << Name << " is out of energy!" << std::endl;
		return;
	}
	else
		this->EnergyPoints--;
	std::cout << "DiamondTrap " << this->Name 
	<< " deavstatingly (actually moderately) attacks " << target
	<< ", causing " << this->AttackDamage
	<< " points of damage!" << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount) {
	std::cout << "DiamondTrap " << this->Name 
	<< " has taken " << amount 
	<< " points of damage!" << std::endl;
	this->HitPoints -= amount;
}

void DiamondTrap::beRepaired(unsigned int amount) {
	if (this->EnergyPoints < 1) {
		std::cout << "Trap " << Name << " is out of energy!" << std::endl;
		return;
	}
	else
		this->EnergyPoints--;
	std::cout << "DiamondTrap " << this->Name 
	<< " has been repaired for " << amount 
	<< " points!" << std::endl;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "I am kown as Diamond Trap " << this->Name 
	<< "\nformerly known as ClapTrap " << ClapTrap::Name << std::endl;
}