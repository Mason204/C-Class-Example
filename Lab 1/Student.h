#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

struct studentinfo
{
	string coursename;
	float grade;
	string semester;
};

class Student
{
public:
	Student();

	~Student();

	void SetName(string Name_);
	string GetName();

	void SetID(int ID_);
	int GetID();

	void Setstudentinfo(string coursename_, char grade_, string semester_, int num);

	void CalculateGPA();
	float GetGPA();

	bool searchgrade(char inputtedGrade, int num);

	string Getcourse(int num);
	char GetGrade(int num);
	string GetSemester(int num);

private:

	string Name;
	int ID;
	float GPA;
	studentinfo courseinfo[100];
	int loop = 0;

};

#endif