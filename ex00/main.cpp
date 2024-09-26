#include "ClapTrap.hpp"

int	main(void)
{
	try {
		ClapTrap	a;
		ClapTrap	b("Jackson");

		for (int i = 0; i < 2; i++)
			a.beRepaired(12);
		for (int i = 0; i < 2; i++)
			a.attack(b.getName());
		for (int i = 0; i < 3; i++)
			a.takeDamage(3);
		for (int i = 0; i < 13; i++)
			a.takeDamage(3);
		for (int i = 0; i < 3; i++)
			a.attack(b.getName());
	}
	catch (std::invalid_argument& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
