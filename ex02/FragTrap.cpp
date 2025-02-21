/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:05:04 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/21 14:41:31 by mnaumann         ###   ########.fr       */
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

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
    std::cout << "FragTrap " << Name << " has been copied." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy) {
    if (this != &copy) {
        FragTrap::operator=(copy);
    }
    return *this;
}

void FragTrap::displayFragTrap() const {
    std::cout << "FragTrap: " << Name << std::endl;
    std::cout << "HP: " << HitPoints << " | EP: " << EnergyPoints << std::endl;
    std::cout << "  _ccccc_" << std::endl;
    std::cout << " /   --  \\" << std::endl;
    std::cout << "|  ö   ö  |" << std::endl;
    std::cout << "|    ^    |" << std::endl;
    std::cout << "|  \\___/  |" << std::endl;
    std::cout << " \\_______/" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << Name << " wants to high five!" << std::endl;
	std::cout << "HP: " << HitPoints << " | EP: " << EnergyPoints << std::endl;
	std::cout << "\033[1m";  // Start bold text
	std::cout << "\033[33m"; // yellow text
	std::cout << "  _ccccc_         _______________" << std::endl;
	std::cout << " /   --  \\ -----| GIMME FIVE!!! |" << std::endl;
	std::cout << "|  ö   ö  |       _______________" << std::endl;
	std::cout << "|    ^    |" << std::endl;
	std::cout << "|  \\___/  |" << std::endl;
	std::cout << " \\_______/" << std::endl;
	std::cout << "\033[0m";  // reset bold text
}
