#include "pch.h"
#include <iostream>
#include "Amfibia.h"

int main()
{
	Amfibia amfibia;
	CzescPojazdu harpun;
	harpun.nazwa = "harpun";
	amfibia.zamontuj(&harpun);
	
	// I. Mam już harpun, ale nie silnik
	amfibia.poruszajSie(woda);
	amfibia.poruszajSie(lad);

	// II. Dokładam silnik
	amfibia.zamontuj(new CzescPojazdu("silnik"));
	amfibia.poruszajSie(lad);


}