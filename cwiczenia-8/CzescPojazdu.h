#pragma once
#include <string>

class CzescPojazdu
{
public:
	std::string nazwa;
	CzescPojazdu();
	CzescPojazdu(std::string n) : nazwa(n) {};
	~CzescPojazdu();
};

