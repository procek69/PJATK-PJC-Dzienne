#pragma once

#include <vector>
#include "CzescPojazdu.h"

class Pojazd
{
protected:
	std::vector<CzescPojazdu*> czesci;
public:
	Pojazd();
	~Pojazd();

	void zamontuj(CzescPojazdu* czescPojazdu);
	void wymontuj(CzescPojazdu* czescPojazdu);
};

