#ifndef SOFTLINK_H
#define SOFTLINK_H

#include "Dir.h"

class softLink : public Dir
{
    public:
        softLink(Dir* dir, std::string name):
            Dir(name), _path(""), _target(dir) {
            _prev = dir; 
            _type = "SOFTLINK";
            _path = createPath();
        }

        std::string createPath() const
        {
            Dir* node = _target;   // lokalna kopia!
            std::string path;

            while (node)
            {
                path = node->getName() + " " + path;
                node = node->getPrev();
            }

            return path;
        }

        std::ostream &print(std::ostream &os, int spaces) const override
        {
            
            for (int i = 0; i< spaces; i++)
            {
                os << " ";
            }
            os <<  _name << " (" << _type << ") -> " << _path;
            return os;
        }

    protected:
        std::string _path;
        Dir* _target;
};

#endif
