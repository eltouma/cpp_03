/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:30:44 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/29 21:42:02 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/*
   If you want them to lose all their points, add this line before attack() call
  	 for (int i = 0; i < 100; i++)


   If you want to kill them, add this line before takeDamage() call
  	 for (int i = 0; i < 5; i++)


   If you want to create a FragTrap by copy, add this code outside the loop
	   FragTrap	fragTrapCopy;
	   fragTrapCopy = FragTrap("Seigneur Leodagan");
	   fragTrapCopy.ClapTrap::attack("Un ours d'une toise et demie");


   If you want to create a ScavTrap copy, and attack it with FragTrap copy, add this code outside the loop
	   FragTrap	fragTrapCopy;
	   fragTrapCopy = FragTrap("Seigneur Bohort");
	   fragTrapCopy.ClapTrap::attack("Un ours d'une toise et demie");
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

	FragTrap fragtrap[length];
	for (int i = 0; name[i]; i++)
		fragtrap[i] = FragTrap(name[i]);
	for (int j = 0; name[j]; j++)
	{
		try {
			fragtrap[j].beRepaired(12);
			fragtrap[j].attack(fragtrap[j + 1].getName());
			fragtrap[j].takeDamage(50);
		}
		catch (std::invalid_argument& e)
		{
			std::cerr << e.what();
		}
		try {
			fragtrap[j].highFivesGuys();
		}
		catch (std::invalid_argument& e)
		{
			std::cerr << e.what();
		}
	}
	return (0);
}
