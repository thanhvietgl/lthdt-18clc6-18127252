
#include "Student.h"


void main()
{
	int n;
	School* m_School = new School;
	m_School->updateName("VNU_HCMUS");
	Semester* m_Semester = new Semester;
	m_Semester->update(m_School, "Summer", 2019);
	vector<Course*> m_course;
	do
	{
		cout << "\nInput the number of Course:(1-6) "; cin >> n;
		for (int i = 0; i < n; i++)
		{
			Course* temp1=new Course;
			temp1->input();
			temp1->updateSemester(m_Semester);
			m_course.push_back(temp1);
			delete temp1;
		}

	} while (n < 1 || n > 6);
	vector<Student*> m_student;
	int m;
	do
	{
		cout << "\nInput the number of Student: "; cin >> m;
		for (int i = 0; i < m; i++)
		{
			Student* temp2=new Student;
			temp2->input();
			temp2->update(m_course, m_School);
			m_student.push_back(temp2);
			delete temp2;
		}

	} while (n < 1);

	for (int i = 0; i < m_student.size(); i++)
	{
		m_student[i]->enrollCourse();
	}
	_getch();

}
