#include "ClapTrap.hpp"

int	main(void)
{
	const char *name[] = {"Jackson", "Jess", "Fabrice", "Mathieu", NULL};
	ClapTrap claptrap[5];
	for (int j = 0; j < 4; j++)
	{
		claptrap[j] = ClapTrap(name[j]);
	}
	for (int k = 0; k < 4; k++)
	{
		try {
			for (int i = 0; i < 2; i++)
				claptrap[k].beRepaired(12);
			for (int i = 0; i < 3; i++)
				claptrap[k].takeDamage(3);
			for (int i = 0; i < 2; i++)
				claptrap[k].attack(claptrap[k+1].getName());
			for (int i = 0; i < 3; i++)
				claptrap[k].attack(claptrap[k+1].getName());
			for (int i = 0; i < 3; i++)
				claptrap[k].attack(claptrap[k+1].getName());
			for (int i = 0; i < 3; i++)
				claptrap[k].attack(claptrap[k+1].getName());
			for (int i = 0; i < 2; i++)
				claptrap[k].beRepaired(12);
		}
		catch (std::invalid_argument& e)
		{
			std::cerr << e.what();
		}

	}
	return (0);
}
