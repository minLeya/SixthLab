#ifndef FIGUREARRAY_H
#define FIGUREARRAY_H

#include <cassert> //for assert()

template <typename T>
class FigureArray
{
private:
    int m_length{};
    T* m_data{};

public:
    FigureArray() = default;

    FigureArray(int length) :
        m_length{ length }
    {
        assert(length >= 0);
        if (length > 0)
            m_data = new T[length] {};
    }

    ~FigureArray()
    {
        delete[] m_data;
        // we don't need to set m_data to null or m_length to 0 here, since the object will be destroyed immediately after this function anyway
    }

    void erase()
    {
        delete[] m_data;
        // We need to make sure we set m_data to nullptr here, otherwise it will
        // be left pointing at deallocated memory!
        m_data = nullptr;
        m_length = 0;
    }

   
};

#endif