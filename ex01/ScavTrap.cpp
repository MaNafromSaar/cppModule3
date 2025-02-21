/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:34:11 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/21 13:49:14 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "ScavTrap " << this->Name << " has been constructed." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << Name << " has been destroyed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
    std::cout << "ScavTrap " << Name << " has been copied." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {
    if (this != &copy) {
        ClapTrap::operator=(copy);
    }
    return *this;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << Name << " is now in Gate Keeper mode." << std::endl;
    std::cout << "HP: " << HitPoints << " | EP: " << EnergyPoints << std::endl;
    std::cout << "\033[1m";  // Start bold text
    std::cout << "\033[36m"; // turquoise text
    std::cout << "  ___^^__" << std::endl;
    std::cout << " /       \\" << std::endl;
    std::cout << "| <>  <>  |" << std::endl;
    std::cout << "|    ^    |" << std::endl;
    std::cout << "|  \\___/  |" << std::endl;
    std::cout << " \\___v___/" << std::endl;
    std::cout << "\033[0m";  // reset bold text
}

void ScavTrap::displayScavTrap() const {
    std::cout << "ScavTrap: " << Name << std::endl;
    std::cout << "HP: " << HitPoints << " | EP: " << EnergyPoints << std::endl;
    std::cout << "  ___^^__" << std::endl;
    std::cout << " /       \\" << std::endl;
    std::cout << "| <>  <>  |" << std::endl;
    std::cout << "|    ^    |" << std::endl;
    std::cout << "|  \\___/  |" << std::endl;
    std::cout << " \\___v___/" << std::endl;
}
