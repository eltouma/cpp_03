/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:30:44 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/28 23:53:37 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	const char *name[] = {"Jackson", "Jess", "Fabrice", "Elzu", "Mateo", "Mathieu", NULL};
	int	length = tab_size(name);

	ClapTrap claptrap[length];
	for (int i = 0; name[i]; i++)
		claptrap[i] = ClapTrap(name[i]);
	for (int j = 0; name[j]; j++)
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
