#pragma once
#include <vector>

class StudentGroup;

class Student
{
	int s; // np. s00000
public:
	std::vector<StudentGroup*> groups;
	void detach(StudentGroup*);
	Student();
	Student(int);
	~Student();
};

