#ifndef _AGH_H_
#define _AGH_H_

#include <string>
#include <iostream>

class AGH{

    private:
        AGH();

    public:

    static AGH* _ptr;
    static std::string _name;
    static AGH* Create(void);
    void SetName(std::string name);
    void Presentation(void);

    static void Delete(void);



};



#endif