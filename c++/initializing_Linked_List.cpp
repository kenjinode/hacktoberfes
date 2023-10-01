#include <iostream>

using namespace std;

// Initalizing a class named linked_list with the vallue data and a pointer next

class linked_list
{
public:
    int data;
    linked_list *next;

    // Initializing a constructor that accept an parameter int
    linked_list(int val)
    {
        data = val;
        // Declare next as null
        next = NULL;
    }
};

// Itertating thought the created linked list and print them
void print(linked_list *head)
{
    // Iniatlized a pointer object to the class linked list and inserting a int val
    linked_list *temp = head;

    // Iterating though the temp till temp !=NULL
    while (temp != NULL)
    {
        // Printing temp->data that it each node data we inserted
        cout << temp->data << " ";

        // Moving the current pointer to the next pointer so the we will reach the next node
        temp = temp->next;
    }
}

int main()
{
    // Initating a head and declaring it as null
    linked_list *head = NULL;

    // Inserting the value to the linked list head
    head = new linked_list(1);

    // Inserting the value to the next of the linked list head
    head->next = new linked_list(2);

    // Calling the print function to print all the value of the linked list
    print(head);

    return 0;
}