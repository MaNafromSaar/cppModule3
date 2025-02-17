/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:03:51 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/16 17:52:50 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ClapTrap claptrap("ClapTrap");
	ScavTrap scavtrap("ScavTrap");

	claptrap.attack("Dummy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);

	scavtrap.attack("Dummy");
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(3);
	scavtrap.guardGate();
	
	return 0;
}
