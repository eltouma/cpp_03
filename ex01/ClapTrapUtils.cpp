#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("John"), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << this->_name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << this->_name << " has been created by copy" << std::endl;
	*this = obj;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
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
