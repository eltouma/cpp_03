#pragma once

#include <iostream>

class	ClapTrap
{
protected:
	std::string _name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
public:
	ClapTrap(void);
	ClapTrap(const ClapTrap& obj);
	ClapTrap& operator=(const ClapTrap& rhs);
	~ClapTrap(void);
	ClapTrap(std::string name);

	std::string	getName(void) const;
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

int	tab_size(const char *name[]);
