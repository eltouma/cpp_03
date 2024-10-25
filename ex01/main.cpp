#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
		ClapTrap	a;
		ScavTrap	e;
		ClapTrap	b("Jackson");

//		ClapTrap	c("test1");
//		ClapTrap	d("test2");
//		for (int i = 0; i < 2; i++)
			a.beRepaired(12);
//		for (int i = 0; i < 2; i++)
			e.beRepaired(12);
//		for (int i = 0; i < 2; i++)
			a.attack(b.getName());
//		for (int i = 0; i < 2; i++)
			e.attack(b.getName());
//		for (int i = 0; i < 3; i++)
			a.takeDamage(3);
//		for (int i = 0; i < 13; i++)
			a.takeDamage(3);
//		for (int i = 0; i < 13; i++)
			a.takeDamage(3);
//		for (int i = 0; i < 3; i++)
			e.attack(b.getName());
		std::cout << "\n";
	return (0);
}
