#pragma once

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	std::string _name;
public:
	DiamondTrap(void);
	//DiamondTrap(std::string name);
	DiamondTrap(std::string name, std::string suffix);
	DiamondTrap(const DiamondTrap& obj);
	DiamondTrap& operator=(const DiamondTrap& rhs);
	void	whoAmI(void);
	void attack(const std::string& target);
	virtual ~DiamondTrap(void);
};
