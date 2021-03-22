
#include <iostream>

using namespace std;

struct Node
{
    int item;
    Node *next;
};

class List
{

public:
    List()
    {
        head = new Node();
    }

    ~List()
    {
        clear();
    }

    // Copy constructor
    List(const List &other)
    {
        copy(other);
    }

    List &operator=(const List &other)
    {
        if (this != &other)
        {
            clear();
            copy(other);
        }
        return *this;
    }

    void copy(const List &other)
    {
        head = new Node();
        head->item = other.head->item;

        Node *newNode = head;
        Node *curr = other.head;
        while (curr->next != nullptr)
        {
            curr = curr->next;
            newNode->next = new Node();
            newNode = newNode->next;
            newNode->item = curr->item;
        }
    }

    void clear()
    {
        Node *temp;
        while (head->next != nullptr)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
        delete head;
    }

    void insert(int position, int newItem)
    {
        Node *newNode = new Node();
        newNode->item = newItem;

        Node *curr = head;
        while (curr->next != nullptr)
        {
            for (int i = 1; i < position; i++)
            // The loop stops one node before the position,
            // and inserts new node is inserted in the position.
            {
                curr = curr->next;
            }
        }
        newNode->next = curr->next;
        curr->next = newNode;
    }

private:
    Node *head;
};

int main()
{
    List p = List();

    p.insert(1, 3);

    List q = p;
}