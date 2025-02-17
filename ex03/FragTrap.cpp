/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:05:04 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/17 11:42:02 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->HitPoints = defaultHitPoints;
	this->EnergyPoints = defaultEnergyPoints;
	this->AttackDamage = defaultAttackDamage;
	std::cout << "FragTrap " << this->Name << " has been constructed." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->Name << " has been destroyed." << std::endl;
}

void FragTrap::attack(std::string const & target) {
	if (this->EnergyPoints < 1) {
		std::cout << "Trap " << Name << " is out of energy!" << std::endl;
		return;
	}
	else
		this->EnergyPoints--;
	std::cout << "Trap " << this->Name << " powerfully attacks "
	<< target << " causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Trap " << this->Name 
	<< " yells: \"Gimme five!\"" << std::endl;
}
