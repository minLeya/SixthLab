#ifndef ARRAYCONTAINER_H
#define ARRAYCONTAINER_H

#include <cassert> //for assert()

template <typename T>
class ArrayContainer
{
private:
    int m_length{};
    T* m_data{};

public:


    class Iterator
    {
    private:
        T* m_ptr{};

    public:
        Iterator(T* ptr) : m_ptr{ ptr }
        {

        }

        Iterator operator++()
        {
            ++m_ptr;
            return *this;
        }

        bool operator!=(const Iterator& other)
        {
            return m_ptr != other.m_ptr;
        }

        T& operator*()
        {
            return *m_ptr;
        }
    };

    Iterator begin() const
    {
        return Iterator{ m_data };
    }

    Iterator end() const
    {
        return Iterator{ m_data + m_length };
    }

    int size() const
    {
        return m_length;
    }

    ArrayContainer() = default;

    ArrayContainer(int length) :
        m_length{ length }
    {
        assert(length >= 0);
        if (length > 0)
            m_data = new T[length]{};
    }

    ~ArrayContainer()
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

    T& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

 
};

#endif