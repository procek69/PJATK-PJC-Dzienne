#include "pch.h"
#include "Amfibia.h"


void Amfibia::poruszajSie(typ_terenu teren)
{
	switch (teren)
	{
	case lad:
		this->Samochod::jedz();
		break;
	case woda:
		this->Lodz::plyn();
		break;
	}
}

void Amfibia::zamontuj(CzescPojazdu* czesc)
{
	this->Samochod::zamontuj(czesc);
	this->Lodz::zamontuj(czesc);
}

Amfibia::Amfibia()
{
}


Amfibia::~Amfibia()
{
}
