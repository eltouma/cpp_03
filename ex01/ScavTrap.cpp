#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "COUCOU\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap has been destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::cout << this->_name << " has been created by copy" << std::endl;
	*this = obj;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->_name << " has been created" << std::endl;
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
