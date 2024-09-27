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
		this->_name = rhs.getName();
	return (*this);
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}
