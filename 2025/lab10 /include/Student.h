#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <string>

class Student{
    private:
        int* _grades;
        int _n;
        std::string _name;


    public:
        void Set(int gradeNum, int grade);
        int Get(int grade) const;

        int* GetGrades(void) const;
        std::string GetName(void) const;
        void Copy(Student &student);



        Student(Student && obj);
        Student&  operator=(const Student &obj);
        Student(int* grades, int n, std::string _name);
        Student(const Student& obj);
        ~Student();
};



#endif