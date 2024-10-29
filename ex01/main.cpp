/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:30:44 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/29 01:38:13 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	const char *name[] = {"Jackson", "Jackson", "Jess", "Fabrice", "Elzu", "Mateo", "Mathieu", NULL};
	int	length = tab_size(name);

	ScavTrap claptrap[length];

	ScavTrap	copy;
	copy = ScavTrap(claptrap[0]);
	copy.ClapTrap::attack(claptrap[1].getName());
	for (int i = 0; name[i]; i++)
		claptrap[i] = ScavTrap(name[i]);
	for (int j = 0; name[j]; j++)
	{
		try {
			claptrap[j].guardGate();
			for (int i = 0; i < 2; i++)
				claptrap[j].beRepaired(12);
			for (int i = 0; i < 3; i++)
				claptrap[j].takeDamage(3);
			for (int i = 0; i < 2; i++)
				claptrap[j].attack(claptrap[j + 1].getName());
			for (int i = 0; i < 3; i++)
				claptrap[j].attack(claptrap[j + 1].getName());
			for (int i = 0; i < 3; i++)
				claptrap[j].attack(claptrap[j + 1].getName());
			for (int i = 0; i < 3; i++)
				claptrap[j].ClapTrap::attack(claptrap[j + 1].getName());
			for (int i = 0; i < 2; i++)
				claptrap[j].beRepaired(12);
		}
		catch (std::invalid_argument& e)
		{
			std::cerr << e.what();
		}
	}
	return (0);
}
