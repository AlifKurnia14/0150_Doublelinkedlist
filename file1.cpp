#include <iostream>
#include <string>
using namespace std;

class Node{
    public:
    int noMhs;
    Node *next;
    Node *prev;
};
// Next & prev adalah pointer (untuk menunjukan alamat memory)

class DoubleLinkedList
{
    private :
    Node *START;

    public :
    DoubleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\nEnter the roll number of the student :";
        cin >> nim;

        // Step 1: Alocate memory for new node
        Node *newNode = new Node();

    }
    };
    
    public :
    {

        //Step 2: Assign value to the data fields
        newNode -> noMhs = nim;

        //Step 3: Insert at begining if list is empty or nim is 
        if (START == NULL || nim <= START -> noMhs)
        {
            if (START != NULL && nim == START -> noMhs)
            {
                cout << "\nDuplicate number not allowed "<< endl;
                return;

            }
            //Step 4 : newCode.next = START 
            newCode -> = START ;

            //Step 5: START.prev = newCode (IF START exists)
            if (START != NULL)
            START -> prev = newcode;

            // Step 6: newCode.prev = NULL
            newCode -> prev = NULL;

            // Step 7:  START = newCode
            START = newCode;
            return;

        }
    }
        // Insert in between node 
        // Step 8: Locate position for Inserttion

        Node *current = START ;
        while (current => next != NULL && current => next =>noMhs < nim)
        {
        current = current -> next ;
        }

        if (current -> next ! = NULL && nim == current -> next -> noMhs)
        {
            cout << "\nDuplicate roll number not allowed ";
            return ;

        }
         newCode -> next = current -> next ;
         newCode -> prev = current; 

         //Insert last node
         if (current -> next ! = NULL ){
         current -> next -> prev  = newCode; 
         current -> next = newCode; 
    }
    void hapus()
    {
        if (START == NULL )
        {
            cout << "\nList is empty "<< endl;
            return ;

        }
        cout << "\nMasukan NIM yang akan didelete :";
        int rollNo ;
        cin >> rollNo ;

        Node *current = START ;
        // Step 1: Tranverse the list to find the node
        while (current !=NULL && current ->noMhs != rollNo)
        {
            current = current-> next;

        }
        if (current == NULL )
        {
            cout << "Record not found " << endl;
            return;
        }

        //Step 2: if node is at the beginning 
        if (current == START )
        {
            START = current -> next; //Step 2a: START = START.next 
        if (START != NULL)
        {
            START -> prev = NULL; // Step 2b: START .prev = NULL

        }
        else
        {
            // Step 3: Link previous node to next of current
            current -> prev-> next = current -> next ;

            // Step 4: if current is not the node 
            if (current ->next != NULL)
            current ->next ->prev = current->prev;
        }
        
        //Step 5: delate the node
        delete current;
        cout << "Record with roll number " << rollNo << "deleted"<< endl;
        
        }

    };





