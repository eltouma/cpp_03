/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:30:44 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/29 20:56:04 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
If you want to kill them, add this line before takeDamage() call
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
