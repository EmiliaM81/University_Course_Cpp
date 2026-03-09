#pragma once

#include <string>
#include <vector>

class Widget
{
    private:
        std::string _color;

public:
    virtual std::string widgetDescription() const = 0;
    
    void changeColor(std::string color)
    {
        _color = color;
    }

    std::string getColor() const
    {
        return _color;
    }


    Widget(): 
        _color("grey") {}

    virtual ~Widget() = default;
};


class Button: public Widget 
{
    public:

        std::string widgetDescription() const override
        {
            return (this->getColor() + " button");
        }
        

};

class RadioButton: public Button 
{
    public:
        RadioButton():
            Button() {}

        std::string widgetDescription() const override
        {
            return (this->getColor() + " radiobutton");
        }
        


};

class EditBox: public Widget 
{
    public:


        std::string widgetDescription() const override
        {
            return (this->getColor() + " editbox");
        }
        

};


class MaskedEditBox: public EditBox 
{
    public:


        std::string widgetDescription() const override
        {
            return (this->getColor() + " maskededitbox");
        }
        

};

class WidgetPainter 
{
    public:
        void paintWidgets(std::vector<Widget*> &vec)
        {
            for (Widget* element: vec)
            {
                if (dynamic_cast<Button*>(element) != nullptr)
                {
                    element->changeColor("blue");
                } else if (dynamic_cast<EditBox*>(element) != nullptr)
                {
                    element->changeColor("red");
                }
            }
        }

};