#include "pch.h"
#include "Lodz.h"
#include <iostream>

void Lodz::plyn()
{
	for (std::vector<CzescPojazdu*>::iterator it = czesci.begin(); it != czesci.end(); ++it)
	{
		if ((*it)->nazwa == "harpun")
		{
			std::cout << "Lodz plynie" << std::endl;
			return;
		}
	}
	std::cout << "Lodz nie plynie, daj mi harpun!" << std::endl;
}

Lodz::Lodz()
{
}

Lodz::~Lodz()
{
}
