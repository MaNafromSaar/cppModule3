/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:03:51 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/17 10:03:26 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
	ClapTrap claptrap("Adam");
	ScavTrap scavtrap("Bob");
	FragTrap fragtrap("Carl");
	DiamondTrap diamondtrap("Dave");

	claptrap.attack("Dummy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);

	scavtrap.attack("Dummy");
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(3);
	scavtrap.guardGate();

	fragtrap.attack("Dummy");
	fragtrap.takeDamage(5);
	fragtrap.beRepaired(3);
	fragtrap.highFivesGuys();
	
	return 0;
}
