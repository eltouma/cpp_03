/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:30:44 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/29 03:08:41 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	const char *name[] = {"Jackson", "Jackson", "Jess", "Fabrice", "Elzu", "Mateo", "Mathieu", NULL};
	int	length = tab_size(name);

	FragTrap fragtrap[length];

	FragTrap	fragTrapCopy;
	fragTrapCopy = FragTrap(fragtrap[0]);
	fragTrapCopy.ClapTrap::attack(fragtrap[1].getName());

	ScavTrap	scavTrapCopy("ok");
	scavTrapCopy = ScavTrap(name[0]);
	for (int i = 0; name[i]; i++)
		fragtrap[i] = FragTrap(name[i]);
	for (int j = 0; name[j]; j++)
	{
		try {
			scavTrapCopy.guardGate();
			for (int i = 0; i < 12; i++)
				fragtrap[j].beRepaired(12);
			for (int i = 0; i < 22; i++)
				fragtrap[j].attack(fragtrap[j + 1].getName());
			for (int i = 0; i < 33; i++)
				fragtrap[j].attack(fragtrap[j + 1].getName());
			for (int i = 0; i < 3; i++)
				fragtrap[j].takeDamage(12);
			for (int i = 0; i < 3; i++)
				fragtrap[j].ClapTrap::attack(fragtrap[j + 1].getName());
			for (int i = 0; i < 32; i++)
				fragtrap[j].beRepaired(12);
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
