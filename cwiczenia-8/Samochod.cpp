#include "pch.h"
#include "Samochod.h"
#include "CzescPojazdu.h"
#include <iostream>

void Samochod::jedz()
{
	for (std::vector<CzescPojazdu*>::iterator it = czesci.begin(); it != czesci.end(); ++it)
	{
		if ((*it)->nazwa == "silnik")
		{
			std::cout << "Samochod jedzie" << std::endl;
			return;
		}
	}
	std::cout << "Samochod nie jedzie, brak silnika" << std::endl;
}

Samochod::Samochod()
{
}


Samochod::~Samochod()
{
}
