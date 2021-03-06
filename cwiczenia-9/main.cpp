#include "pch.h"
#include <iostream>
#include "Country.h"
#include "Student.h"
#include "StudentGroup.h"

std::ostream& operator<<(std::ostream &strm, Country &c) {
	return strm << "Country(" << c.get_population() << ")" << std::endl;
}

int main()
{
	// I
	Country kraj(1000000);
	kraj++;
	std::cout << "Populacja wzrosla o 1. Wynosi: " << kraj.get_population() << std::endl;
	++kraj;
	std::cout << "Populacja wzrosla o 1. Wynosi: " << kraj.get_population() << std::endl;
	std::cout << kraj;

	// II
	Student* s0 = new Student(0);
	StudentGroup* sg0 = new StudentGroup("Grupa A");
	StudentGroup* sg1 = new StudentGroup("Grupa B");
	sg0->add(s0);
	sg1->add(s0);
	delete s0;
}