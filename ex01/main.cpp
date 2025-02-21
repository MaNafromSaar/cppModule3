/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:03:51 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/21 13:40:52 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap *clap = new ClapTrap("Clap");//construction via new
    ScavTrap *scav = new ScavTrap("Scav");//needs to be deleted manually

	clap->displayClapTrap();
	scav->displayScavTrap();

    clap->attack(*scav);
	clap->displayClapTrap();
	scav->displayScavTrap();
	scav->attack(*clap);
	scav->displayScavTrap();
    scav->takeDamage(5);
	scav->displayScavTrap();
	scav->beRepaired(3);
	scav->displayScavTrap();
    scav->takeDamage(9);
	
	scav->guardGate();

	delete scav;

    return 0;
}
