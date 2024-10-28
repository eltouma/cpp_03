#include "ClapTrap.hpp"

int	main(void)
{
	const char *name[] = {"Jackson", "Jess", "Fabrice", NULL};
	int length = sizeof(name) / sizeof(name[0]);

	ClapTrap claptrap[length];
	for (int i = 0; i < length -1 ; i++)
		claptrap[i] = ClapTrap(name[i]);
	for (int j = 0; j < length - 1; j++)
	{
		try {
			for (int i = 0; i < 2; i++)
				claptrap[j].beRepaired(12);
			for (int i = 0; i < 3; i++)
				claptrap[j].takeDamage(3);
			for (int i = 0; i < 2; i++)
				claptrap[j].attack(claptrap[j + 1].getName());
			for (int i = 0; i < 3; i++)
				claptrap[j].attack(claptrap[j + 1].getName());
			for (int i = 0; i < 3; i++)
				claptrap[j].attack(claptrap[j + 1].getName());
			for (int i = 0; i < 3; i++)
				claptrap[j].attack(claptrap[j + 1].getName());
			for (int i = 0; i < 2; i++)
				claptrap[j].beRepaired(12);
		}
		catch (std::invalid_argument& e)
		{
			std::cerr << e.what();
		}
	}
	return (0);
}
