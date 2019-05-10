#include "pch.h"
#include "Pojazd.h"
#include <algorithm>

Pojazd::Pojazd()
{
}


Pojazd::~Pojazd()
{
}

void Pojazd::zamontuj(CzescPojazdu * czescPojazdu)
{
	std::vector<CzescPojazdu*>::iterator position = std::find(czesci.begin(), czesci.end(), czescPojazdu);
	if (position == czesci.end()) // Taka część nie została dodana do pojazdu.
		czesci.push_back(czescPojazdu);
}

void Pojazd::wymontuj(CzescPojazdu * czescPojazdu)
{
	std::vector<CzescPojazdu*>::iterator position = std::find(czesci.begin(), czesci.end(), czescPojazdu);
	if (position != czesci.end()) // Cześć została znaleziona
		czesci.erase(position);
}
