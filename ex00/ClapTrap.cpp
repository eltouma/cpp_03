#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target)
{
	this->_attackDamage += 1;
	if (this->_energyPoints)
		this->_energyPoints -= 1;
	else
		this->_energyPoints = 0;
	if (!this->_energyPoints || !this->_hitPoints)
		throw std::invalid_argument("Has no longer enough energy or hit points to attack");
	if (this->_attackDamage == 1)
		std::cout << "💣  ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " point of damage!" << std::endl;
	else
		std::cout << "💣  ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_energyPoints)
		this->_energyPoints -= 1;
	else
		this->_energyPoints = 0;
	if (!this->_energyPoints || !this->_hitPoints)
		throw std::invalid_argument("Has no longer enough energy or hit points to attack");
	std::cout << "✅  ClapTrap " << this->_name << "\n\thitPoints: \t" << this->_hitPoints << "\n\tenergyPoints: \t" << this->_energyPoints << "\n\tattackDamage: \t" << this->_attackDamage << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_energyPoints -= 1;
	if (!this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	if (!this->_energyPoints || !this->_hitPoints)
		throw std::invalid_argument("Has no longer enough energy or hit points to attack");

	std::cout << "💥 ClapTrap " << this->_name << " was attacked" << "\n\thitPoints: \t" << this->_hitPoints << "\n\tenergyPoints: \t" << this->_energyPoints << "\n\tattackDamage: \t" << this->_attackDamage << std::endl;
}
