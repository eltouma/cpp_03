/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:24:17 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/30 01:13:40 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "\033[1;35mFragTrap\033[0m " << this->_name << " has been created" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\033[1;35mFragTrap\033[0m " << this->_name << " has been destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	std::cout << "\033[1;35mCopy FragTrap\033[0m " << this->_name << " has been created" << std::endl;
	*this = obj;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->_name << " has been created" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
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

void	FragTrap::highFivesGuys(void)
{
	if (!this->_energyPoints)
	{
		std::cout << "❌ Sorry " << this->_name << " no high five for the weaks!" << std::endl;
		throw std::invalid_argument("");
	}
	if (!this->_hitPoints)
	{
		std::cout << "❌ Sorry " << this->_name << " no high five for dead people!" << std::endl;
		throw std::invalid_argument("");
	}
	std::cout << std::endl << this->_name << " requests a high five!" << std::endl;
}
