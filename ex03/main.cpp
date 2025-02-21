/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:03:51 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/21 15:33:06 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    ClapTrap *clap = new ClapTrap("Clap");//construction via new
    ScavTrap *scav = new ScavTrap("Scav");//needs to be deleted manually
	FragTrap *frag = new FragTrap("Frag");
	DiamondTrap *Dave = new DiamondTrap("Dave");

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
	Dave->displayDiamondTrap();
	Dave->attack(*frag);
	Dave->attack(*frag);
	Dave->beRepaired(3);
	Dave->displayDiamondTrap();
	Dave->attack(*frag);
	Dave->whoAmI();



	delete Dave;

    return 0;

}
