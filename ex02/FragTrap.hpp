#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap& obj);
	FragTrap& operator=(const FragTrap& rhs);
	virtual ~FragTrap(void);
	void	highFivesGuys(void);	
};
