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
			diamondtrap[j].whoAmI();
			diamondtrap[j].guardGate();
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
	return (0);
}
