#include "Student.h"
#include <iostream>

void Student::set_surname(string cur_s)
{
	surname = cur_s;
}

void Student::set_name(string cur_n)
{
	name = cur_n;
}

void Student::set_patronymic(string cur_pat)
{
	patronymic = cur_pat;
}

void Student::set_bday(int cur_bd)
{
	b_day = cur_bd;
}

void Student::set_bmonth(int cur_bm)
{
	b_month = cur_bm;
}

void Student::set_byear(int cur_by)
{
	b_year = cur_by;
}

void Student::set_birthday(int cur_bd, int cur_bm, int cur_by)
{
	b_day = cur_bd;
	b_month = cur_bm;
	b_year = cur_by;
}

void Student::set_address(string cur_a)
{
	address = cur_a;
}

void Student::set_phone(string cur_ph)
{
	phone = cur_ph;
}

void Student::set_faculty(string cur_f)
{
	faculty = cur_f;
}

void Student::set_course(int cur_c)
{
	course = cur_c;
}

void Student::show() const
{	
	cout << "Surname: " << surname << endl
		<< "Name: " << name << endl
		<< "Patronymic: " << patronymic << endl
		<< "Date of birth: " << b_day << "." << b_month << "." << b_year << endl
		<< "Address: " << address << endl
		<< "Number of phone: " << phone << endl
		<< "Faculty: " << faculty << endl
		<< "Course: " << course << endl << endl;
}
Student Student::compare(Student* st)
{
	if (st->b_year < this->b_year)
		return *st;
	else
		return *this;
}