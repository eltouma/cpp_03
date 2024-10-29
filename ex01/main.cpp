/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:30:44 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/29 14:53:24 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	const char *name[] = {"Jackson", "Jackson", "Jess", "Birdner", NULL};
	int	length = tab_size(name);

	ScavTrap scavtrap[length];

	ScavTrap	copy;
	copy = ScavTrap(scavtrap[0]);
	copy.ClapTrap::attack(scavtrap[1].getName());
	for (int i = 0; name[i]; i++)
		scavtrap[i] = ScavTrap(name[i]);
	for (int j = 0; name[j]; j++)
	{
		try {
			scavtrap[j].guardGate();
			for (int i = 0; i < 2; i++)
				scavtrap[j].beRepaired(12);
			for (int i = 0; i < 3; i++)
				scavtrap[j].takeDamage(3);
			for (int i = 0; i < 3; i++)
				scavtrap[j].ClapTrap::attack(scavtrap[j + 1].getName());
			for (int i = 0; i < 20; i++)
				scavtrap[j].attack(scavtrap[j + 1].getName());
			for (int i = 0; i < 25; i++)
				scavtrap[j].beRepaired(2);
		}
		catch (std::invalid_argument& e)
		{
			std::cerr << e.what();
		}
	}
	return (0);
}
