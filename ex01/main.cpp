/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:30:44 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/29 19:58:46 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/*
If you want to kill them, add this ligne before takeDamage() call
	for (int i = 0; i < 5; i++)

If you want them to lose all their points, add thisline before attack() call
	for (int i = 0; i < 50; i++)

If you want to call attack from ClapTrap, add this line
	scavtrap[j].ClapTrap::attack(scavtrap[j + 1].getName());
*/

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
