/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:24:17 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/30 01:19:54 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "\033[1;36mScavTrap\033[0m " << this->_name << " has been created" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[1;36mScavTrap\033[0m " << this->_name << " has been destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::cout << "\033[1;33mCopy ScavTrap\033[0m " << this->_name << " has been created" << std::endl;
	*this = obj;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->_name << " has been created" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints)
		this->_energyPoints -= 1;
	else
		this->_energyPoints = 0;
	if (!this->_energyPoints || !this->_hitPoints)
	{
		std::cout << this->_name << " has no longer enough energy or hit points to attack (energy: "
		<< this->_energyPoints << ", hit: " << this->_hitPoints << ")" << std::endl;
		throw std::invalid_argument("");
	}
		std::cout << "💣 ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " point(s) of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << std::endl << this->_name << " is now in Gate keeper mode" << std::endl;
}
