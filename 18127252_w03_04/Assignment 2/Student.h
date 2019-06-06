
#include "Course_Semester.h"

class Student
{
private:
	string m_Name;
	string id;
	vector<Course*> m_Course;

	School* m_School;
	vector<Course*> m_enrollCourse;

public:
	//Constructor
	Student();
	Student(string name, string ID, vector<Course*> course, School* school);
	Student(string name, string ID, vector < Course*> course);
	Student(string name, string ID);
	Student(string name);
	Student(vector<Course*> course);
	//Destructor
	//~Student();
	//Function
	void print();
	void enrollCourse();
	void input();
	void update(vector < Course*> course, School* school);


};
