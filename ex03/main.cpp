/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:30:44 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/30 01:23:13 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

/*
   If you want them to lose all their points, add this line before attack() call
  	 for (int i = 0; i < 50; i++)


   If you want to kill them, add this line before takeDamage() call
  	 for (int i = 0; i < 5; i++)

 */

/* 	A MODIFIER
   If you want to create a FragTrap by copy, add this code outside the loop
	   FragTrap	fragTrapCopy;
	   fragTrapCopy = FragTrap("Seigneur Bohort");
	   fragTrapCopy.ClapTrap::attack(name[0]);


   If you want to create a ScavTrap copy, and attack it with FragTrap copy, add this code outside the loop
	   FragTrap	fragTrapCopy;
	   fragTrapCopy = FragTrap("Seigneur Bohort");
	   fragTrapCopy.ClapTrap::attack(name[0]);
	   ScavTrap	scavTrapCopy;
	   scavTrapCopy = ScavTrap("Un lapin adulte");
	   scavTrapCopy.attack(fragTrapCopy.getName());

  	 // If you want to see Un lapin adulte as a guard keeper, add this line into the try()	
	   scavTrapCopy.guardGate();
 */

int	main(void)
{

	const char *name[] = {"Jackson", "Jess", NULL}; 
	int	length = tab_size(name);

	DiamondTrap diamondtrap[length];
	for (int i = 0; name[i]; i++)
		diamondtrap[i] = DiamondTrap(name[i], "");
	for (int j = 0; name[j]; j++)
	{
		try {
			diamondtrap[j].beRepaired(12);
			diamondtrap[j].attack(diamondtrap[j + 1].getName());
			diamondtrap[j].takeDamage(50);
		}
		catch (std::invalid_argument& e)
		{
			std::cerr << e.what();
		}
		try {
			diamondtrap[j].highFivesGuys();
		}
		catch (std::invalid_argument& e)
		{
			std::cerr << e.what();
		}
	}

/*
	try {
		DiamondTrap test;
		ClapTrap test2("Jackson baby");
		DiamondTrap test1("Oui", "ok");
		test.whoAmI();
		test1.attack(test2.getName());
		test1.beRepaired(12);
		test1.takeDamage(50);
		test1.whoAmI();
	}
	catch (std::invalid_argument& e)
	{
		std::cerr << e.what();
	}
*/

	return (0);
}
