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


Student::Student(int* grades, int n):
    _grades{new int[n]}, _n{n}
{
    for (int i =0; i<n; i++)
    {
        _grades[i] = grades[i];
    }
}

Student::Student(const Student& obj)
{
    _n = obj._n;

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
    
    return *this;
}



Student::~Student()
{
    if (_grades)
        delete [] _grades;
}
