/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:30:44 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/28 23:44:04 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	const char *name[] = {"Jackson", "Jess", "Fabrice", "Elzu", "Mateo", NULL};
	int	length = tab_size(name);

	ScavTrap claptrap[length];
	for (int i = 0; i < length - 1; i++)
		claptrap[i] = ScavTrap(name[i]);
	for (int j = 0; j < length - 1; j++)
	{
		try {
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
				claptrap[j].attack(claptrap[j + 1].getName());
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
