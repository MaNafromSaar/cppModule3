/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:03:59 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/17 11:09:36 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name(name), 
	HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "ClapTrap " << Name << " has been constructed." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << Name << " has been destroyed." << std::endl;
}

void ClapTrap::attack(std::string const &target) {
	if (this->EnergyPoints < 1) {
		std::cout << "Trap " << Name << " is out of energy!" << std::endl;
		return;
	}
	else
		this->EnergyPoints--;
	std::cout << "Trap " << Name << " feebly attacks "
	<< target << " causing " << AttackDamage 
	<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "Trap " << Name << " has taken " 
	<< amount << " points of damage!" << std::endl;
	this->HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->EnergyPoints < 1) {
		std::cout << "Trap " << Name << " is out of energy!" << std::endl;
		return;
	}
	else
		this->EnergyPoints--;
	std::cout << "Trap " << Name 
	<< " has been repaired for " << amount 
	<< " points!" << std::endl;
}
