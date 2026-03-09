#pragma once

#include <vector>
#include <string>
#include <iostream>

class SparseMatrix
{
    private:
        std::vector<std::vector<int*>> _matrix;
        int _x;
        int _y;


    public:
        SparseMatrix(int x, int y):
            _matrix(x, std::vector<int*>(y, nullptr)), _x(x), _y(y) {};

        SparseMatrix(const SparseMatrix &obj):
            SparseMatrix(obj._x, obj._y) {
                for (int i = 0; i< _x; i++)
                {
                    for (int j = 0; j<_y; j++)
                    {
                        if (obj._matrix[i][j] != nullptr )
                        {
                            (*this)[i][j] = new int(*obj._matrix[i][j]);
                        }

                    }
                }
            }

        SparseMatrix(SparseMatrix &&obj) noexcept:
            _x(obj._x), _y(obj._y), _matrix(std::move(obj._matrix))
            {

                obj._x = -1;
                obj._y = -1;

            }
        

        ~SparseMatrix()
        {
            for (std::vector<int*> &vec: _matrix)
            {
                for (int* element: vec)
                {
                    if (element != nullptr)
                        delete element;
                }
            }
        }

        SparseMatrix& operator=(const SparseMatrix &obj)
        {
            if (this == &obj)
                return *this;

            for (std::vector<int*> &vec: _matrix)
            {
                for (int* element: vec)
                {
                    if (element != nullptr)
                    {
                        delete element;
                    }
                }
            }

            _x = obj._x;
            _y = obj._y;

            _matrix = std::vector<std::vector<int*>>( _x, std::vector<int*>(_y, nullptr));

            for (int i = 0; i< _x; i++)
            {
                for (int j = 0; j<_y; j++)
                {
                    if (obj._matrix[i][j] != nullptr )
                    {
                        (*this)[i][j] = new int(*obj._matrix[i][j]);
                    }
                }
            }

            return *this;
        }

        SparseMatrix& operator=(SparseMatrix &&obj) noexcept
        {
            if (this == &obj)
                return *this;

            for (std::vector<int*> vec: _matrix)
            {
                for (int* element: vec)
                {
                    if (element != nullptr)
                    {
                        delete element;
                    }
                }
            }

            _matrix = std::move(obj._matrix);

            _x = obj._x;
            _y = obj._y;

            obj._x = -1;
            obj._y = -1;

            return *this;

        }

        void insert(int idX, int idY, int* value)
        {
            if (_matrix[idX][idY] != nullptr)
                delete _matrix[idX][idY];
            _matrix[idX][idY] = value;
        }

        std::vector<int*>& operator[](int index) 
        {
            return _matrix[index];
        }

        const std::vector<int*>& operator[](int index) const
        {
            return _matrix[index];
        }

        void reset(int x, int y)
        {
            if (_matrix[x][y] != nullptr)
            {
                delete _matrix[x][y];
                _matrix[x][y] = nullptr;
            }
        }



        friend std::ostream &operator<<(std::ostream &os, const SparseMatrix& obj)
        {
            for (std::vector<int*> vec : obj._matrix)
            {
                for (int* element: vec)
                {
                    if (element != nullptr)
                        os << *element <<" ";
                    else 
                        os << "0 ";
                }

                os << "\n";
            }

            return os;
        }


};