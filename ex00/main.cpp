/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:03:51 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/21 11:33:26 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap *clap1 = new ClapTrap("Clap1");//construction via new
    ClapTrap *clap2 = new ClapTrap("Clap2");//needs to be deleted manually

	clap1->displayClapTrap();
	clap2->displayClapTrap();

    clap1->attack(*clap2);
	clap1->displayClapTrap();
	clap2->displayClapTrap();
    clap2->takeDamage(5);
	clap2->displayClapTrap();
	clap2->beRepaired(3);
	clap2->displayClapTrap();
    clap2->takeDamage(9);  // This should trigger the destruction of clap2

    delete clap1;  // Manually delete clap1

    return 0;
}
