#include "pch.h"
#include "StudentGroup.h"
#include <iostream>

void StudentGroup::add(Student *student)
{
	std::cout << this->name << ": Dodawanie studenta" << std::endl;
	students.push_back(student);
	student->groups.push_back(this);
}

void StudentGroup::remove(Student *student)
{
	std::vector<Student*>::iterator position = std::find(students.begin(), students.end(), student);
	if (position != students.end()) {
		std::cout << this->name << ": Usuwanie dowiazania grupy u studenta" << std::endl;
		students.erase(position);

		if (!students.size()) {
			std::cout << this->name << ": Usuwanie grupy" << std::endl;
			delete this;
		}
		return;
	}
}

StudentGroup::StudentGroup(std::string name)
{
	this->name = name;
}

StudentGroup::~StudentGroup()
{
	std::cout << this->name << ": Grupa studencka zostala usunieta" << std::endl;
}
