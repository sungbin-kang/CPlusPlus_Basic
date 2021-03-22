#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Set
{
private:
    vector<T> m_element;
    int size;

public:
    Set() : size(0){};
    Set(const Set &rhs)
    {
        m_element = rhs.m_element;
        size = rhs.size;
    }

    void push(T data)
    {

        m_element.push_back(data);
        ++size;
    }

    class iterator;
    friend class iterator;
    class iterator
    {
    private:
        int i_index;
        Set &s;

    public:
        iterator(Set &is) : s(is), i_index(0) {}
        iterator(Set &is, bool) : s(is), i_index(s.size) {}
        iterator(Set &is, bool val, bool last) : s(is), i_index(s.size)
        {

            cout << endl
                 << "size " << s.size << endl;
            if (last)
                i_index = s.size - 1;
        }

        T operator*()
        {
            return s.m_element[i_index];
        }

        int operator++()
        {
            return s.m_element[++i_index];
        }
        int current() const
        {
            return s.m_element[i_index];
        }
        bool operator!=(const iterator &rv) const
        {
            return i_index != rv.i_index;
        }
        int getI()
        {
            return i_index;
        }
    };
    iterator begin() { return iterator(*this); }
    //function to check if we have passed last element
    iterator end() { return iterator(*this, true); }
    //function to get last element
    iterator last() { return iterator(*this, true, true); }
};

template <class T>
istream &operator>>(istream &in, Set<T> &element)
{
    T elementin;
    Set<T> is;
    class Set<T>::iterator it = element.begin();
    while (it != element.end())
    {
        in >> elementin;
        element.push(elementin);
    }
    return in;
}

int main()
{
    Set<int> intset;
    Set<int>::iterator it = intset.begin();
    for (int i = 0; i < 5; i++)
    {
        intset.push(i);
        cout << it.getI();
        ++it;
    }

    // cout << endl << intset.begin() << intset.end();
    //We use last() to print the last element as end() confirms
    //that we have passed last element and does not point to last element.
    cout << endl
         << *(intset.begin()) << " " << *(intset.last()) << endl;

    return 0;
}