/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapUtils.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:31:35 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/29 03:04:43 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints)
		this->_energyPoints -= 1;
	else
		this->_energyPoints = 0;
	if (!this->_energyPoints || !this->_hitPoints)
	{
		std::cout << this->_name << " has no longer enough energy or hit points to attack (energy: "
		<< this->_energyPoints << ", hit: " << this->_hitPoints << ")\n" << std::endl;
		throw std::invalid_argument("");
	}
		std::cout << "💣 ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " point(s) of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_energyPoints)
		this->_energyPoints -= 1;
	else
		this->_energyPoints = 0;
	if (!this->_energyPoints || !this->_hitPoints)
	{
		std::cout << this->_name << " has no longer enough energy or hit points to attack (energy: "
		<< this->_energyPoints << ", hit: " << this->_hitPoints << ")\n" << std::endl;
		throw std::invalid_argument("");
	}
	std::cout << "✅ ClapTrap " << this->_name << "\n\thitPoints: \t" << this->_hitPoints << "\n\tenergyPoints: \t" << this->_energyPoints << "\n\tattackDamage: \t" << this->_attackDamage << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 1)
		this->_hitPoints -= 1;
	else if (this->_hitPoints <= 0)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	if (!this->_energyPoints || !this->_hitPoints)
	{
		std::cout << this->_name << " has no longer enough energy or hit points to attack (energy: "
		<< this->_energyPoints << ", hit: " << this->_hitPoints << ")\n" << std::endl;
		throw std::invalid_argument("");
	}
	std::cout << "💥 ClapTrap " << this->_name << " was attacked" << "\n\thitPoints: \t" << this->_hitPoints << "\n\tenergyPoints: \t" << this->_energyPoints << "\n\tattackDamage: \t" << this->_attackDamage << std::endl;
}

int	tab_size(const char *name[])
{
	int	i;

	i = 0;
	while (name[i])
		i += 1;
	return (i + 1);
}
