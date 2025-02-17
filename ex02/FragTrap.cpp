/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:05:04 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/17 09:28:09 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << "FragTrap " << this->Name << " has been constructed." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->Name << " has been destroyed." << std::endl;
}

void FragTrap::attack(std::string const & target) {
	std::cout << "Trap " << this->Name << " powerfully attacks "
	<< target << " causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Trap " << this->Name << " yells: \"Gimme five!\"" << std::endl;
}
