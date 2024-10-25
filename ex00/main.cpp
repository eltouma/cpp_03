#include "ClapTrap.hpp"

int	main(void)
{
		ClapTrap	a;
		ClapTrap	b("Jackson");
		ClapTrap	c("test1");
		ClapTrap	d("test2");
	try {
		for (int i = 0; i < 2; i++)
			a.beRepaired(12);
		for (int i = 0; i < 2; i++)
			a.attack(b.getName());
		for (int i = 0; i < 3; i++)
			a.takeDamage(3);
		for (int i = 0; i < 13; i++)
			a.takeDamage(3);
		for (int i = 0; i < 13; i++)
			a.takeDamage(3);
	}
	catch (std::invalid_argument& e)
	{
		std::cerr << e.what();
	}
	try {
		for (int i = 0; i < 2; i++)
			c.beRepaired(12);
		for (int i = 0; i < 2; i++)
			c.attack(b.getName());
		for (int i = 0; i < 3; i++)
			c.attack(b.getName());
		for (int i = 0; i < 3; i++)
			c.attack(b.getName());
	}
	catch (std::invalid_argument& e)
	{
		std::cerr << e.what();
		return (1);
	}
	return (0);
}
