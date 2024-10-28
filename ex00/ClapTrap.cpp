/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:32:05 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/28 23:57:48 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("John"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << this->_name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << this->_name << " has been created by copy" << std::endl;
	*this = obj;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << this->_name << " has been created" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}
