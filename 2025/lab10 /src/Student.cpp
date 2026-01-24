#include "Student.h"


void Student::Set(int gradeNum,int grade)
{
    if (gradeNum < _n)
        _grades[gradeNum] = grade;
        

    
}

int Student::Get(int n) const
{
    return _grades[n];
}

int* Student::GetGrades(void) const
{
    return _grades;
}

std::string Student::GetName(void) const
{
    return _name;
}


void Student::Copy(Student &student) 
{
    if (&student == this)
        return;

    if (_grades)
        delete [] _grades;

    _grades = new int [student._n];

    for (int i = 0; i<student._n; ++i)
    {
        _grades[i] = student._grades[i];
    }

    _n = student._n;
    _name = student._name+ "_copy";
}



Student::Student(int* grades, int n, std::string name):
    _grades{new int[n]}, _n{n}, _name{name}
{
    for (int i =0; i<n; i++)
    {
        _grades[i] = grades[i];
    }
}

Student::Student(const Student& obj)
{
    if (&obj == this)
    {
        return;
    }
   
        _n = obj._n;

        _name = obj._name + "_copy";

        _grades = new int[_n];

        for (int i = 0; i<_n; i++)
        {
            _grades[i] = obj._grades[i];
        }
    


   
}

Student&  Student::operator=(const Student &obj)
{
    if (_n < obj._n)
    {
        int* temp = new int[obj._n];

        for (int i =0; i<obj._n; i++)
        {
            temp[i] = obj._grades[i];
        }

        delete [] _grades;

        _grades = temp;

    } else {
        for(int i = 0; i< obj._n; i++)
        {
            _grades[i] = obj._grades[i];
        }
    }

    _n = obj._n;

    _name = obj._name;
    
    return *this;
}

Student::Student(Student && obj)
{
    _n = obj._n;
    _name = obj._name;

    _grades = obj._grades;

    obj._grades = nullptr;
    obj._name = "";
    
}



Student::~Student()
{
    if (_grades)
        delete [] _grades;
}
