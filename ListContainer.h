#ifndef LISTCONTAINER_H
#define LISTCONTAINER_H
#include "Figure.h"

template <typename T>
class ListContainer
{
private:
    // Структура узла односвязного списка
    struct Node {
        Node() : m_next(NULL) { }

        Node(const T& data) : m_data{ data }, m_next(NULL) { }

        // Значение узла
        //T m_t;
        T m_data;
        // Указатель на следующий узел
        Node* m_next;
    };

    // Голова односвязного списка
    Node* m_head;

public:
    class Iterator {
    public:
        Iterator(Node* node) : m_node{ node } { }

        // Проверка на равенство
        bool operator==(const Iterator& other) const {
            if (this == &other) {
                return true;
            }
            return m_node == other.m_node;
        }

        // Проверка на неравенство
        bool operator!=(const Iterator& other) const {
            return !operator==(other);
        }

        // Получение значения текущего узла
        T operator*() const {
            if (m_node) {
                return m_node->m_data;
            } // Иначе достигнут конец списка. Здесь уместно возбудить исключение
            return T();
        }

        // Переход к следующему узлу
        void operator++() {
            if (m_node) {
                m_node = m_node->m_next;
            } // Иначе достигнут конец списка. Здесь уместно возбудить исключение
        }

    private:
        Node* m_node;
    };

    ListContainer() : m_head(nullptr)
    {

    }

    ~ListContainer()
    {
        while (m_head) {
            remove();
        }
    };

    
    void append(const T& data)
    {
        Node* node = new Node(data);
        // Новый узел привязывается к старому головному элементу
        node->m_next = m_head;
        // Новый узел сам становится головным элементом
        m_head = node;
    };

    // Удаляем последний добавленный узел из списка
    void remove()
    {
        if (m_head) { // Если список не пуст:
            // Сохраняем указатель на второй узел, который станет новым головным элементом
            Node* newHead = m_head->m_next;

            // Освобождаем память, выделенную для удаляемого головного элемента
            delete m_head;

            // Назначаем новый головной элемент
            m_head = newHead;
        } // Иначе мы могли бы возбудить исключение
    };

    // Получаем головной элемент списка
    Node* head() const
    {
        return m_head;
    };

    // Получаем итератор на начало списка
    Iterator begin() const
    {
        return Iterator(m_head);
    };

    // Получаем итератор на конец списка
    Iterator end() const
    {
        return Iterator(NULL);
    };

    // Получаем размер списка
    size_t size() const
    {
        size_t s = 0;
        for (Iterator it = begin(); it != end(); ++it) {
            ++s;
            return s;
        }
    }


};

#endif