#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
    node* prev;
};

class linklist
{
    public:
    node* head;
    node* tail;

    linklist(){
        head = NULL;
        tail = NULL;
    }

    void insertelement(int value){

        node* element = new node;
        element->data = value;
        element->next = NULL;
        element->prev = NULL;

        if(head == NULL){
            head = element;
            tail = element;
        }
        else{
            
            // node* p = head;
            // while(p->next!= NULL){
            //     p=p->next;
            // }
            // p->next = element; 
            // element->prev =p;

            tail->next = element;
            element->prev =tail;
            tail = element;

        }
    }
    void traverse(){
        node* p = head;
        while(p!= NULL){
            cout<<p->data<<" ";
            p = p->next;
        }
        cout<<endl;
    }

    void traverseTail(){
        node* p = tail;
        while(p!= NULL){
            cout<<p->data<<" ";
            p = p->prev;
        }
        cout<<endl;
    }

    void insertElementAt(int a, int b,node* &head){
        if(head == NULL){
            cout<<"This posistion is not available ";
        }

        if(a==1){
            node* element = new node;
            element->data = b;
            element->next = head;
            head->prev = element;
            element->prev = NULL;
            head = element;
            
        }
        else{
            insertElementAt(a-1,b,head->next);
        }

        return ;
    }

    node* deleteElementAt(int a, node* &head){
        if(head == NULL){
            cout<<"This position is already NULL";
            return NULL;
        }

        if(a == 1){
            node* element = head->next;
            delete head;
            return element;
        }
        else{
            head->next = deleteElementAt(a-1,head->next);
            return head;
        }
    }
};




int main()
{
    linklist ll ;

    cout<<"how many number you want to insert";
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int a ;
        cin>>a;

        ll.insertelement(a);
    }
    cout<<"element are present in the linklist : ";
    ll.traverse();
    ll.traverseTail();

    cout<<"Enter that position where you want to insert element and vlaue of the value : ";
    int a, b;
    cin>>a>>b;

    ll.insertElementAt(a,b,ll.head);;

    cout<<"element are present in the linklist : ";
    ll.traverse();

    // cout<<"Enter the position that you want to delete : ";
    // int a;
    // cin>>a;

    
    


    return 0;
}