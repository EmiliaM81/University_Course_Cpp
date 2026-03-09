#ifndef FILE_H
#define FILE_H

#include "Dir.h"

class File : public Dir {
public:
    File(std::string name): 
        Dir(name) {_type = "FILE";};
    ~File() override = default;

    std::ostream &print(std::ostream &os, int spaces) const override {
        for (int i = 0; i< spaces; i++)
        {
            os << " ";
        }
        os <<  _name << " (" << _type << ")\n";
        return os;
    }
};


#endif