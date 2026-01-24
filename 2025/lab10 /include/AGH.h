#ifndef _AGH_H_
#define _AGH_H_

#include <string>
#include <iostream>

class AGH{

    private:
        AGH();
        static AGH* _ptr1;
        static AGH* _ptr2;



        static std::string _name1;
        static std::string _name2;

        //static std::string _name;


        static int _choice;

    public:


    static AGH* Create(void);
    void SetName(std::string name);
    void Presentation(void);

    static void Delete(void);



};



#endif