#include "Course_Semester.h"


Course::Course()
{
	m_Name = " ";
	id = " ";
	lectureHour = " ";
	practiceHour = " ";
	m_Semester = NULL;
	numberStudent = 0;
	maxStudent = 0;
}
Course::Course(string name, string ID, string lecture_hour, string practice_hour, Semester* semester, int student, int maxstudent)
{
	m_Name = name;
	id = ID;
	lectureHour = lecture_hour;
	practiceHour = practice_hour;
	m_Semester = semester;
	numberStudent = student;
	maxStudent = maxstudent;
}
Course::Course(string name, string ID, string lecture_hour, string practice_hour, Semester* semester)
{
	m_Name = name;
	id = ID;
	lectureHour = lecture_hour;
	practiceHour = practice_hour;
	m_Semester = semester;
	numberStudent = 0;
	maxStudent = 0;
}
Course::Course(string name, string ID, string lecture_hour, string practice_hour)
{
	m_Name = name;
	id = ID;
	lectureHour = lecture_hour;
	practiceHour = practice_hour;
	m_Semester = NULL;
	numberStudent = 0;
	maxStudent = 0;
}
Course::Course(string name, string ID, string lecture_hour)
{
	m_Name = name;
	id = ID;
	lectureHour = lecture_hour;
	practiceHour = " ";
	m_Semester = NULL;
	numberStudent = 0;
	maxStudent = 0;
}
Course::Course(string name, string ID)
{
	m_Name = name;
	id = ID;
	lectureHour = " ";
	practiceHour = " ";
	m_Semester = NULL;
	numberStudent = 0;
	maxStudent = 0;
}
Course::Course(string name)
{
	m_Name = name;
	id = " ";
	lectureHour = " ";
	practiceHour = " ";
	m_Semester = NULL;
	numberStudent = 0;
	maxStudent = 0;
}
string Course::id_course()
{
	return id;
}
void Course::print_Name()
{
	cout << m_Name << "		";
}
void Course::print()
{
	cout << "\nThe Name of Course: " << m_Name;
	cout << "\nID: " << id;
	cout << "\nThe total Lecture Hour: " << lectureHour;
	cout << "\nThe total Practice Hour: " << practiceHour;
	cout << "\nThe number of Student: " << numberStudent;
	cout << "\nThe Max number of Student: " << maxStudent;
}

int Course::int_student()
{
	return numberStudent;
}
int Course::max_student()
{
	return maxStudent;
}
void Course::update_student()
{
	numberStudent++;
}
void Course::input()
{
	cout << "\nInput name of Course: "; cin >> m_Name;
	cin.ignore();
	cout << "\nInput ID of Course: "; cin >> id;

	cout << "\nInput total lecture hour: "; cin >> lectureHour;
	cout << "\nInput total practice hour: "; cin >> practiceHour;
	cout << "\nInput the number of student: "; cin >> numberStudent;
	cout << "\nInput the max Student in Course: "; cin >> maxStudent;
}
void Course::updateSemester(Semester* semester)
{
	m_Semester = semester;
}