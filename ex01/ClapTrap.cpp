/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:03:59 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/21 14:19:13 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "ClapTrap " << Name << " has been constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : Name(copy.Name), HitPoints(copy.HitPoints), EnergyPoints(copy.EnergyPoints), AttackDamage(copy.AttackDamage) {
	std::cout << "ClapTrap " << Name << " has been copied." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << Name << " has been destroyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
    if (this != &copy) {
        this->HitPoints = copy.HitPoints;
        this->EnergyPoints = copy.EnergyPoints;
        this->AttackDamage = copy.AttackDamage;
    }
    return *this;
}

std::string ClapTrap::getName() const {
	return Name;
}

int ClapTrap::getHitPoints() const {
	return HitPoints;
}

int ClapTrap::getEnergyPoints() const {
	return EnergyPoints;
}

int ClapTrap::getAttackDamage() const {
	return AttackDamage;
}

void ClapTrap::setHitPoints(int hitPoints) {
	HitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints) {
	EnergyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage) {
	AttackDamage = attackDamage;
}

void ClapTrap::attack(ClapTrap &target) {
	if (EnergyPoints < 1) {
		std::cout << "ClapTrap " << Name << " has no energy points left!" << std::endl;
		return;
	}
	EnergyPoints--;
	std::cout << "ClapTrap " << Name << " attacks " << target.Name << " causing " << AttackDamage << " points of damage!" << std::endl;
	target.takeDamage(AttackDamage);

}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << Name << " has taken " << amount << " points of damage!" << std::endl;
	this->HitPoints -= amount;
	if (HitPoints < 1) {
		std::cout << "ClapTrap " << Name << " has been killed!" << std::endl;
		std::cout << "  _______" << std::endl;
		std::cout << " /       \\" << std::endl;
		std::cout << "|  x   x  |" << std::endl;
		std::cout << "|    ^    |" << std::endl;
		std::cout << "|    ___  |" << std::endl;
		std::cout << " \\_______/" << std::endl;
		delete this;
		return;
	}
	std::cout << "ClapTrap " << Name << " has " << HitPoints << " hit points left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << Name << " has been repaired for " << amount << " points!" << std::endl;
	this->HitPoints += amount;
	this->EnergyPoints -= 1;
	std::cout << "ClapTrap " << Name << " has " << HitPoints << " hit points left!" << std::endl;
}

void ClapTrap::displayClapTrap() const {
    std::cout << "ClapTrap: " << Name << std::endl;
    std::cout << "HP: " << HitPoints << " | EP: " << EnergyPoints << std::endl;
    std::cout << "  _______" << std::endl;
    std::cout << " /       \\" << std::endl;
    std::cout << "|  O   O  |" << std::endl;
    std::cout << "|    ^    |" << std::endl;
    std::cout << "|  \\___/  |" << std::endl;
    std::cout << " \\_______/" << std::endl;
}
