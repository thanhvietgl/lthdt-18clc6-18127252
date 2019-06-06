#include "Student.h"


Student::Student()
{
	m_Name = " ";
	id = " ";
	
	m_School=NULL;
	

}
Student::Student(string name, string ID, vector < Course*> course, School* school)
{
	m_Name = name;
	id = ID;
	m_Course = course;
	m_School = school;

}

Student::Student(string name, string ID, vector < Course*> course)
{
	m_Name = name;
	id = ID;
	m_Course= course;
	m_School = NULL;



}
Student::Student(string name, string ID)
{
	m_Name = name;
	id = ID;

	m_School = NULL;


	

}
Student::Student(string name)
{
	m_Name = name;
	id = " ";

	m_School = NULL;



}
Student::Student(vector < Course*> course)
{
	m_Name = " ";
	id = " ";
	m_Course = course;
	m_School = NULL;



}

void Student::print()
{
	cout << "\nName of Student: " << m_Name;
	cout << "\nID: " << id;
	cout << "\nThe Course enrroll: ";

	for (int i = 0; i < m_enrollCourse.size(); i++)
	{
		m_enrollCourse[i]->print_Name();
	}
	cout << "\nName of School: ";
	m_School->print_Name();

}
void Student::enrollCourse()
{
	string ID;
	cout << "\nInput ID Course, need enroll: "; cin >> ID;
	for (int i = 0; i < m_Course.size(); i++)
	{
		if (m_Course[i]->id_course() == ID)
		{
			int d = 0;
			for (int j = 0; j < m_enrollCourse.size(); j++)
			{
				if (m_Course[i]->id_course() == m_enrollCourse[j]->id_course())
				{
					d = 1;
				}
				
			}
			if (d == 1)
			{
				if (m_Course[i]->int_student() == m_Course[i]->max_student())
				{
					cout << "\nThis Course is full !";
				}
				else
				{
					m_enrollCourse.push_back(m_Course[i]);
					cout << "\nSucessfully !";
				}
				
				
			}
		}
		else
		{
			cout << "\nThis Course is not exist !";
		}
	}

}

void Student::input()
{
	
	cout << "\nInput the name of Student: ";
	cin.ignore();
	getline(cin,m_Name);
	cin.ignore();
	
	cout << "\nInput ID of Student: "; cin >> id;
}
void Student::update(vector<Course*> course, School* school)
{
	m_Course = course;
	m_School = school;
}