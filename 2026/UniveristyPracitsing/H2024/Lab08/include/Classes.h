#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


class Updatable
{
    public:

        virtual ~Updatable() = default;


        inline virtual void update() const
        {
            std::cout << "Updating object\n";
        }

};


class Collidable : virtual public Updatable
{
    public:


        void virtual collide() const
        {
            std::cout << "Handling collision\n";
        }


};

class Renderable : virtual public Updatable
{
    public:
        inline virtual void render() const
        {
            std::cout <<"Rendering object\n";
        }

};

class GameObject
{
    private:
        static std::vector<GameObject*> _vec;

    protected:
        std::string _name;

    public:
        inline static GameObject* addGameObject(GameObject *obj)
        {
            _vec.push_back(obj);
            return obj;
        }

        inline static std::vector<GameObject*> ActiveGameObjects()
        {
            return _vec;
        }

        inline static void destroyGameObjects()
        {
            for (GameObject* &obj: _vec)
            {
                if (obj)
                    delete obj;
            }

            _vec.clear();
        }

        inline static void destroyGameObject(GameObject* obj)
        {
            _vec.erase(std::remove(_vec.begin(), _vec.end(), obj), _vec.end());
            if (obj)
                delete obj;
        }

        GameObject(std::string name = "Unnamed Player"):
            _name(name) {};

        virtual ~GameObject() = default;


        inline std::string Name() const
        {
            return _name;
        }

        virtual void action() const = 0;


};