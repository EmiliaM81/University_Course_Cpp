#ifndef DIR_H
#define DIR_H

#include <vector>
#include <iostream>
#include <string>



class Dir 
{
    friend std::ostream &operator<<(std::ostream &os,const Dir &obj)
    {
        return obj.print(os, 0);
    }


    public:
        Dir(std::string name):
            _name(name), _prev(nullptr), _type("DIR") {};
        
        virtual ~Dir()
        {
            for (Dir* element: _vec)
            {
                delete element;
            }
        }

        void operator+=(Dir* obj)
        {
            _vec.push_back(obj);
            obj->_prev = this;
        }


        void add(Dir* file)
        {
            _vec.push_back(file);
            file->_prev = this;
        }



        Dir* findDir(const std::string& name)
        {
            for (Dir* element: _vec)
            {
                if (element->_name == name && element->_type == "DIR")
                    return element;

                Dir* found = element->findDir(name);
                if (found)
                    return found;
            }
            return nullptr;
        }

        virtual std::ostream &print(std::ostream &os, int spaces) const
        {
            for (int i = 0; i< spaces; i++)
            {
                os << " ";
            }

            os << _name << "  (" << _type << ")\n";
            for (Dir* element: _vec)
            {
                element->print(os, spaces + 2);
            }
            return os;
        }

        Dir* getPrev() const 
        { return _prev; }

        const std::string& getName() const { return _name; }


    private:

        std::vector<Dir *> _vec;

    protected:
        Dir* _prev;
        std::string _name;
        std::string _type;

};

#endif
