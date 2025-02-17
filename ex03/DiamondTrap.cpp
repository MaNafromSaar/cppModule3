/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:32:15 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/17 10:01:43 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : 
	ClapTrap(name + "_clap_name"), 
	ScavTrap(name), 
	FragTrap(name) {
	this->Name = name;
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap " << this->Name 
	<< " has been constructed." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->Name << " has been destroyed." << std::endl;
}

void DiamondTrap::attack(std::string const & target) {
	FragTrap::attack(target);
	std::cout << "DiamondTrap " << this->Name << " devastatingly attacks "
	<< target << " causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "I am kown as Diamond Trap " << this->Name 
	<< "\n formerly known as ClapTrap " << ClapTrap::Name << std::endl;
}