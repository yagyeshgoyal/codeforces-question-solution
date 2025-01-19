#include <iostream>

using namespace std;

struct node
{
    int value;
    node *next;
};

class linklist
{
private:
    node *head;
    node *tail;

public:
    linklist()
    {
        head = NULL;
        tail = NULL;
    }

    void insertElement(int v)
    {
       
        if (head == NULL)
        {   
            node* temp = new node;
            temp->value = v;
            temp->next = NULL;
            head = temp;
            tail = head;
        }
        else
        {
            node *curr = new node;
            curr->value = v;
            curr->next = NULL;
            tail->next = curr;
            tail = curr;
        }
    }
    void insertAtHead(int v){
        node* temp = new node;
        temp->value = v;
        temp->next = head;
        head = temp;
    }

    void insertAtposition(int pos, int v){
        node* temp = new node;
        temp->value = v;
        temp->next = NULL;
        if(pos == 1){
            temp->next = head;
            head = temp;
            return ;
        }

        node* curr = head;
        pos--;
        while(pos != 1 && curr != NULL){
            pos--;
            curr=curr->next;
        }

        if(pos == 1){
            temp->next = curr->next;
            curr->next = temp;
            return ;
        }
        else{
            cout<<"this is wrong position"<<endl;
        }
    }

    void traversal()
    {
        node *temp = head;

        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    linklist ll;
    ll.insertElement(2);
    ll.traversal();
    ll.insertElement(4);
    ll.traversal();
    ll.insertElement(4);
    ll.traversal();
    ll.insertAtHead(5);
    ll.traversal();
    ll.insertAtposition(3,7);
    ll.traversal();
    ll.insertAtposition(1,23);
    ll.traversal();
    ll.insertAtposition(7,13);
    ll.traversal();
    ll.insertAtposition(13,23);
    ll.traversal();

    return 0;
}