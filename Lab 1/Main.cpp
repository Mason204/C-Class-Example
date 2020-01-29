/*
Mason Henry
Data Structures
Due: Janurary 28th
Create a student class that will store important information about a student. As a part of this lab, a client file needs
to be created to test the class by displaying to the screen all the attributes and display all classes that match a user 
requested grade.
*/
#include <iostream>
#include "Student.h"

using namespace std;

int array[100];

int main()
{
	
	Student n1;
	string InputName;
	int InputID;
	char InputGrade;
	string InputCourse;
	string InputSemester;
	bool anothercourse = true;
	int num = 0;
	cout << "Please input the Student's name.\n";
	cin >> InputName;
	n1.SetName(InputName);

	cout << "Please input the Student's ID.\n";
	cin >> InputID;
	n1.SetID(InputID);
	
	do
	{
		cout << "Please input the student's class, grade as a capital letter, and semester taken.\n";
		cin >> InputCourse >> InputGrade >> InputSemester;
		n1.Setstudentinfo(InputCourse, InputGrade, InputSemester, num);
		num++;
		cout << "If you would like to input another class type 1 and press enter, if you wish to continue type 2 and press enter.\n";
		cin >> InputID;
		switch (InputID)
		{
		case 1: anothercourse = true;
			break;
		case 2: anothercourse = false;
			break;
		}
	} while (anothercourse == true);
	n1.CalculateGPA();
	bool GradeSearch = false;
	do
	{
		system("CLS");
		cout << "Name: " << n1.GetName() << endl << "ID: " << n1.GetID() << endl << "GPA: " << n1.GetGPA() << endl;

		cout << "Please enter what grade letter (capitalized) you would like to search for.\n";
		cin >> InputGrade;
		for (int i = 0; i <= 99; i++)
		{
			if (n1.searchgrade(InputGrade, i) == true)
			{
				cout << "Course name: " << n1.Getcourse(i) << "   Grade: " << n1.GetGrade(i) << "   Semester taken: "
					<< n1.GetSemester(i) << endl;
				GradeSearch = true;
			}
		}
		if (GradeSearch == false)
			cout << "There were no classes corresponding to that letter grade.\n";
		cout << "If you would like to search for another letter Grade type 1 and hit enter, other type 2 and hit enter.\n";
		cin >> InputID;
		switch (InputID)
		{
		case 1: GradeSearch = true;
			break;
		case 2: GradeSearch = false;
			break;
		}
	} while (GradeSearch == true);

	return 0;
}