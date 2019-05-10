#pragma once

#include "Lodz.h"
#include "Samochod.h"

enum typ_terenu { lad, woda };

/**
  * protected: Nasza klasa może this->Klasa::metoda();
  * public:    Każdy może na tej klasie this->Klasa::metoda();
 */
class Amfibia: protected Lodz, protected Samochod
{
public:
	void poruszajSie(typ_terenu teren);
	void zamontuj(CzescPojazdu* czesc);
	Amfibia();
	~Amfibia();
};

