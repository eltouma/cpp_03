/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:30:44 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/29 21:58:23 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/*
   If you want them to lose all their points, add this line before attack() call
	   for (int i = 0; i < 50; i++)

   If you want to kill them, add this line before takeDamage() call
	   for (int i = 0; i < 5; i++)

   If you want to call attack() from ClapTrap, add this line into try()
	   scavtrap[j].ClapTrap::attack(scavtrap[j + 1].getName());

   If you want to create a ScavTrap copy, add this code outside loop
	   ScavTrap	copy;
	   copy = ScavTrap("Un lapin adulte");
	   copy.ClapTrap::attack("Seigneur Bohort");
 */

int	main(void)
{
	const char *name[] = {"Jackson", "Jess", NULL};
	int	length = tab_size(name);

	ScavTrap scavtrap[length];
	for (int i = 0; name[i]; i++)
		scavtrap[i] = ScavTrap(name[i]);
	for (int j = 0; name[j]; j++)
	{
		try {
			scavtrap[j].guardGate();
			scavtrap[j].beRepaired(2);
			scavtrap[j].attack(scavtrap[j + 1].getName());
			scavtrap[j].takeDamage(50);
		}
		catch (std::invalid_argument& e)
		{
			std::cerr << e.what();
		}
	}
	return (0);
}
