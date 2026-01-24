#ifndef _STUDENT_H_
#define _STUDENT_H_

class Student{
    private:
        int* _grades;
        int _n;


    public:
        void Set(int gradeNum, int grade);
        int Get(int grade) const;


        Student&  operator=(const Student &obj);
        Student(int* grades, int n);
        Student(const Student& obj);
        ~Student();
};



#endif