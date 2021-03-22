#include <iostream>


// The node class for our linked list
template <typename T>
class node
{
public:
    T data;
    node<T> *next;

    node() : next(nullptr) {}
    node(const T &item, node<T> *ptr = nullptr) : data(item), next(ptr) {}
};

// Linked list class
template <typename T>
class list
{
public:
    list()
    {
        // Create the dummy head node
        head = tail = new node<T>();
    }
    list(const list<T> &other) = delete;
    list(list<T> &&other) = delete;
    ~list()
    {
        while (head->next != nullptr)
        {
            node<T> *temp = head;
            head = head->next;
            delete temp;
        }
        delete head;
    }

    list<T> &operator=(const list<T> &other) = delete;
    list<T> &operator=(list<T> &&other) = delete;

    // Inner class iterator
    class iterator
    {
        friend class list;

    private:
        node<T> *nodePtr;
        // The constructor is private, so only our friends
        // can create instances of iterators.
        iterator(node<T> *newPtr) : nodePtr(newPtr) {}

    public:
        iterator() : nodePtr(nullptr) {}

        // Overload for the comparison operator !=
        bool operator!=(const iterator &itr) const
        {
            return nodePtr != itr.nodePtr;
        }

        // Overload for the dereference operator *
        T &operator*() const
        {
            return nodePtr->next->data;
        }

        // Overload for the postincrement operator ++
        iterator operator++(int)
        {
            iterator temp = *this;
            nodePtr = nodePtr->next;
            return temp;
        }
    }; // End of inner class iterator

    iterator begin() const
    {
        return iterator(head);
    }

    iterator end() const
    {
        return iterator(tail);
    }

    iterator insert(iterator position, const T &value)
    {
        node<T> *newNode = new node<T>(value, position.nodePtr->next);
        if (position.nodePtr == tail)
            tail = newNode;
        position.nodePtr->next = newNode;
        return position;
    }

    iterator erase(iterator position)
    {
        node<T> *toDelete = position.nodePtr->next;
        position.nodePtr->next = position.nodePtr->next->next;
        if (toDelete == tail)
            tail = position.nodePtr;
        delete toDelete;
        return position;
    }

private:
    node<T> *head;
    node<T> *tail;
};

int main(int argc, const char *argv[])
{
    list<int> v;

    v.insert(v.end(), 2);
    v.insert(v.end(), 4);
    v.insert(v.end(), 5);

    auto iter = v.begin();
    iter = v.insert(iter, 1); // Insert 1 before 2
    iter++;                   // Points to 2
    v.insert(iter++, 3);      // Insert 3 before 2, advance to 4
    iter++;                   // Points to 5
    v.insert(iter, 10);       // Insert 10 before 5

    iter = v.begin();
    iter++;        // Points to 3
    v.erase(iter); // Erase 3

    for (auto itr = v.begin(); itr != v.end(); itr++)
        std::cout << *itr << std::endl;

    return 0;
}