/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:32:15 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/21 15:45:11 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : 
	ClapTrap(name + "_clap_name"), 
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

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : 
	ClapTrap(copy), 
	ScavTrap(copy), 
	FragTrap(copy), 
	Name(copy.Name) 
{
	std::cout << "DiamondTrap " << Name 
	<< " has been copied." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy) {
	if (this != &copy) {
		ClapTrap::operator=(copy);
		ScavTrap::operator=(copy);
		FragTrap::operator=(copy);
	}
	return *this;
}

void DiamondTrap::displayDiamondTrap() const {
	std::cout << "DiamondTrap: " << Name << std::endl;
	std::cout << "HP: " << HitPoints << " | EP: " << EnergyPoints << std::endl;
	std::cout << "      /\\   " << std::endl;
	std::cout << "     /  \\  " << std::endl;
	std::cout << "    /    \\" << std::endl;
	std::cout << "   /      \\" << std::endl;
	std::cout << "  /   ^ ^  \\" << std::endl;
	std::cout << " /          \\" << std::endl;
	std::cout << " \\          /" << std::endl;
	std::cout << "  \\  ~~~~  /" << std::endl;
	std::cout << "   \\______/" << std::endl;
}


void DiamondTrap::whoAmI(void) {
	std::cout << " ____________________________________________  " << std::endl;
	std::cout << "|I am kown as Diamond Trap " << "\033[36m" << this->Name << "\033[0m" << "            |" << std::endl;
	std::cout << "|formerly known as ClapTrap " << ClapTrap::Name << " |" << std::endl;
	std::cout << " ____________________________________________  " << std::endl;
	std::cout << "\033[36m"; // Cyan text for the top lines
    std::cout << "      /\\   " << std::endl;
    std::cout << "     /  \\  " << std::endl;
    std::cout << "    /    \\" << std::endl;
    std::cout << "   /      \\" << std::endl;
    std::cout << "\033[33m"; // Yellow text for the bottom lines
    std::cout << "  /   ^ ^  \\" << std::endl;
    std::cout << " /          \\" << std::endl;
    std::cout << " \\          /" << std::endl;
    std::cout << "  \\   \\_/  /" << std::endl;
    std::cout << "   \\______/" << std::endl;
    std::cout << "\033[0m"; // Reset text formatting
}
