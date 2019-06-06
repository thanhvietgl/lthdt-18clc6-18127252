#include "Course_Semester.h"


Semester::Semester()
{
	m_School = NULL;
	name_Semester = " ";
	int_Year = 0;

}
Semester::Semester(School* school, string semester, int year)
{
	m_School = school;
	name_Semester = semester;
	int_Year = year;
	
}
Semester::Semester(School* school, string semester)
{
	m_School = school;
	name_Semester = semester;
	int_Year = 0;

}
Semester::Semester(School* school)
{
	m_School = school;
	name_Semester = " ";
	int_Year = 0;
	
}

void Semester::print()
{
	cout << "\nThe Name of School: ";
	m_School->print_Name();
	cout << "\nName Semester: " << name_Semester;
	cout << "\nThe Year: " << int_Year;
}

void Semester::updateCourse(vector<Course*> course)
{
	m_Course = course;
}
void Semester::update(School* school, string semester, int year)
{
	m_School = school;
	name_Semester = semester;
	int_Year = year;
}