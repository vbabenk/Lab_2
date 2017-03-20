#include "University.h"
#include <iostream>
#include "Student.h"

University::University(int size):size(size),count(0)
{
	this->arr = new Student * [size];
	for (int i = 0; i < size; i++)
		this->arr[i] = NULL;
}

University::~University()
{
	for (int i = 0; i < size; i++)
		delete arr[i];
	delete[]this->arr;
}

void University::show()
{
	cout << "List of students: " << endl;
	for (int i = 0; i < this->size; i++)
		if (this->arr[i] != NULL)
			this->arr[i]->show();
}

void University::add(string cur_s, string cur_n, string cur_pat, int cur_bd, int cur_bm, int cur_by,string cur_a, string cur_ph,string cur_f,int cur_c)
{
	for (int i = 0; i<size; i++)
		if (arr[i] == NULL)
		{
			this->arr[i] = new Student(cur_s, cur_n, cur_pat, cur_bd, cur_bm, cur_by, cur_a, cur_ph, cur_f, cur_c);
			count++;
			break;
		}
}

void University::remove()
{
	int index;
	cout << "Enter index of object, which you wanna remove: ";
	cin >> index;
	for (int i = index; i < this->size; i++)
	{
		this->arr[i] = this->arr[i + 1];
	}
	this->size--;
	cout << endl;
}

void University::check_by_faculty(string faculty) 
{
	cout << "Students sorted by faculty " << faculty << ": " << endl;
	for (int i = 0; i < this->size; i++)
	{
		if (this->arr[i] == NULL)
			continue;
		if (this->arr[i]->get_faculty() == faculty)
			this->arr[i]->show();
	}
}

void University::list_of_students() 
{
	int course;
	cout << "List of all students sorted by course and faculty: " << endl;
	for (int i = 0; i < this->size; i++)
	{
		if (this->arr[i] == NULL)
			continue;
		course = arr[i]->get_course();
		cout << "Course " << course << ", ";
		if (course == arr[i]->get_course())
			cout << "faculty " << arr[i]->get_faculty() << ": " << arr[i]->get_surname() << " " << arr[i]->get_name() << " " 
			<< arr[i]->get_patronymic() << ". ";
		cout << endl;
	}
	cout << endl;
}

void University::check_by_year(int year) 
{
	cout << "Students, born after " << year << ": " << endl;
	for (int i = 0; i < this->size; i++)
	{
		if (this->arr[i] == NULL)
			continue;
		if (year < this->arr[i]->get_byear())
			this->arr[i]->show();
	}
}
void University::compare() 
{
	cout << "Enter the indices of objects, which age you wanna compare: " << endl;
	int i, j;
	cin >> i;
	cin >> j;
	if (this->arr[i]->get_byear() == this->arr[j]->get_byear())
		cout << "These students are the same age" << endl;
	else
	{
		cout << "This student is older:" << endl;
		this->arr[i]->compare(this->arr[j]).show();
	}
}
