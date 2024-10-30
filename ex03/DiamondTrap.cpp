/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:32:04 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/30 01:31:58 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp" 

DiamondTrap::DiamondTrap(void) : _name(ClapTrap::_name)
{
	std::cout << "\033[1;33mDiamondTrap\033[0m " << this->_name << " has been created" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energy;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\033[1;33mDiamondTrap\033[0m " << this->_name << " has been destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name, std::string suffix) : ScavTrap(), FragTrap()
{
	suffix = "_clap_name";
	this->_name = name + suffix;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energy;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "\033[1;33mDiamondTrap\033[0m " << this->_name << " has been created with:";
	std::cout << " hitPoints " << this->_hitPoints;
	std::cout << ", energyPoints " << this->_energyPoints;
	std::cout << ", attackDamage " << this->_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(), ScavTrap(), FragTrap()
{
	*this = obj;
	std::cout << "\033[1;33mCopy DiamondTrap\033[0m " << this->_name << " has been created" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
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

void	DiamondTrap::attack(const std::string& target)
{
	(void)target;
	this->ScavTrap::attack(this->_name);
}

void	DiamondTrap::whoAmI(void)
{

	std::cout << "My name is: " << this->_name << ", my ClapTrap name is: "  << ClapTrap::_name << std::endl;
}
