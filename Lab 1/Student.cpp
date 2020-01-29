#include "Student.h"

Student::Student()
{

}

Student::~Student()
{

}

void Student::SetName(string Name_)
{
	Name = Name_;
}

string Student::GetName()
{
	return Name;
}

void Student::SetID(int ID_)
{
	ID = ID_;
}

int Student::GetID()
{
	return ID;
}

void Student::Setstudentinfo(string coursename_, char grade_, string semester_, int num_)
{
		courseinfo[num_].coursename = coursename_;
		courseinfo[num_].grade = grade_;
		courseinfo[num_].semester = semester_;
}

bool Student::searchgrade(char inputtedGrade, int num)
{
	if (courseinfo[num].grade == inputtedGrade)
		return true;
	else
		return false;
}

string Student::Getcourse(int num)
{
	return courseinfo[num].coursename;
}

char Student::GetGrade(int num)
{
	return courseinfo[num].grade;
}

string Student::GetSemester(int num)
{
	return courseinfo[num].semester;
}

void Student::CalculateGPA()
{
	int courses = 0;
	GPA = 0.0;
	for (int i = 0; i <= 99; i++)
	{		
		if (courseinfo[i].grade == 'A')
			GPA += 4;
		else if (courseinfo[i].grade == 'B')
			GPA += 3;
		else if (courseinfo[i].grade == 'C')
			GPA = +2;
		else if (courseinfo[i].grade == 'D')
			GPA += 1;
		else
			break;
		courses++;
	}
	GPA /= courses;
}

float Student::GetGPA()
{
	return GPA;
}