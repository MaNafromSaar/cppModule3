/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:34:11 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/17 11:41:41 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->HitPoints = defaultHitPoints;
	this->EnergyPoints = defaultEnergyPoints;
	this->AttackDamage = defaultAttackDamage;
	std::cout << "ScavTrap " << this->Name << " has been constructed." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->Name << " has been destroyed." << std::endl;
}

void ScavTrap::attack(std::string const & target) {
	if (this->EnergyPoints < 1) {
		std::cout << "Trap " << Name << " is out of energy!" << std::endl;
		return;
	}
	else
		this->EnergyPoints--;
	std::cout << "Trap " << this->Name << " moderately attacks "
	<< target << " causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void) {
	std::cout << "Trap " << this->Name << " has entered Gate keeper mode." << std::endl;
}