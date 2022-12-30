#ifndef LISTCONTAINER_H
#define LISTCONTAINER_H
#include "Figure.h"

template <typename T>
class ListContainer
{
private:
    // ��������� ���� ������������ ������
    struct Node {
        Node() : m_next(NULL) { }

        Node(const T& data) : m_data{ data }, m_next(NULL) { }

        // �������� ����
        //T m_t;
        T m_data;
        // ��������� �� ��������� ����
        Node* m_next;
    };

    // ������ ������������ ������
    Node* m_head;

public:
    class Iterator {
    public:
        Iterator(Node* node) : m_node{ node } { }

        // �������� �� ���������
        bool operator==(const Iterator& other) const {
            if (this == &other) {
                return true;
            }
            return m_node == other.m_node;
        }

        // �������� �� �����������
        bool operator!=(const Iterator& other) const {
            return !operator==(other);
        }

        // ��������� �������� �������� ����
        T operator*() const {
            if (m_node) {
                return m_node->m_data;
            } // ����� ��������� ����� ������. ����� ������� ��������� ����������
            return T();
        }

        // ������� � ���������� ����
        void operator++() {
            if (m_node) {
                m_node = m_node->m_next;
            } // ����� ��������� ����� ������. ����� ������� ��������� ����������
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
        // ����� ���� ������������� � ������� ��������� ��������
        node->m_next = m_head;
        // ����� ���� ��� ���������� �������� ���������
        m_head = node;
    };

    // ������� ��������� ����������� ���� �� ������
    void remove()
    {
        if (m_head) { // ���� ������ �� ����:
            // ��������� ��������� �� ������ ����, ������� ������ ����� �������� ���������
            Node* newHead = m_head->m_next;

            // ����������� ������, ���������� ��� ���������� ��������� ��������
            delete m_head;

            // ��������� ����� �������� �������
            m_head = newHead;
        } // ����� �� ����� �� ��������� ����������
    };

    // �������� �������� ������� ������
    Node* head() const
    {
        return m_head;
    };

    // �������� �������� �� ������ ������
    Iterator begin() const
    {
        return Iterator(m_head);
    };

    // �������� �������� �� ����� ������
    Iterator end() const
    {
        return Iterator(NULL);
    };

    // �������� ������ ������
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