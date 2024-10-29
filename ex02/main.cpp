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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:30:44 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/29 18:02:27 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
If you want to kill them, add this ligne before takeDamage() call
	for (int i = 0; i < 5; i++)

If you want them to lose all their points, add thisline before attack() call
	for (int i = 0; i < 15; i++)
*/

int	main(void)
{
	const char *name[] = {"Jackson", "Jess", NULL};
	int	length = tab_size(name);

	ClapTrap claptrap[length];
	for (int i = 0; name[i]; i++)
		claptrap[i] = ClapTrap(name[i]);
	for (int j = 0; name[j]; j++)
	{
		try {
			claptrap[j].beRepaired(2);
			claptrap[j].attack(claptrap[j + 1].getName());
			claptrap[j].takeDamage(15);
		}
		catch (std::invalid_argument& e)
		{
			std::cerr << e.what();
		}
	}
	return (0);
}
