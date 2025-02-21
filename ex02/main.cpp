/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:03:51 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/21 14:46:58 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap *clap = new ClapTrap("Clap");//construction via new
    ScavTrap *scav = new ScavTrap("Scav");//needs to be deleted manually
	FragTrap *frag = new FragTrap("Frag");

	clap->displayClapTrap();
	scav->displayScavTrap();
	frag->displayFragTrap();

    clap->attack(*scav);
	clap->displayClapTrap();
	scav->displayScavTrap();
	scav->attack(*clap);
	scav->displayScavTrap();
    scav->takeDamage(5);
	scav->displayScavTrap();
	scav->beRepaired(3);
	scav->displayScavTrap();
    frag->attack(*scav);
	scav->displayScavTrap();
	scav->guardGate();
	frag->attack(*scav);
	scav->displayScavTrap();
	scav->attack(*frag);
	frag->displayFragTrap();
	frag->attack(*scav);
	frag->attack(*scav);
	frag->highFivesGuys();

	delete frag;

    return 0;

}
