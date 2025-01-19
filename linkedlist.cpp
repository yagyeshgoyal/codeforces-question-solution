#include<iostream>
using namespace std;

struct node
{
    int value;
    node* next;
};
class linklist{
    private:
        node* head;
        node* tail;
    public:
        linklist(){
            head=NULL;
            tail=NULL;
        }
        //enter the vlaue in linklist;
        void push_back(int value)
        {
            if(head==NULL){
                node* element = new node;
                element->value=value;
                element->next=NULL;
                head=element;
                tail=element;
            }
            else{
                 node* element = new node;
                element->value=value;
                element->next=NULL;
                tail->next=element;
                tail=element;
            }
        }
        // raversing the linklist;
        void traverse(){
            node* p;
            p=head;
            while(p!=NULL){
                cout<<p->value<<" ";
                p=p->next;
            }
            cout<<endl;
        }
        // inserting the new node;
        void insert(int position, int value){
            int i=2;
            node* p;
            p=head;
            if(position==1){
                node* element = new node;
                element->value=value;
                element->next=head;
                head=element;
                cout<<endl;
                return ;
            }
            else{
                while (p!=NULL)
                {
                    if(i==position){
                        node* element = new node;
                        element->value=value;
                        element->next=p->next;
                        p->next=element;
                        cout<<endl;
                        return;

                    }
                    else{
                        p=p->next;
                        i++;
                    }
                }
                cout<<"input is wrong";
                
            }
            
        }
        // delete the node;
            void deletion(int position){
                int i=2;
                node* p;
                p=head;
                if(position==1){
                    node* element ;
                    element=head;
                    head=head->next;
                    delete element;
                    cout<<endl;
                    return ;
                }
                else{
                    while (p!=NULL)
                    {
                        if(i==position){
                            node* element ;
                            element=p->next;
                            p->next=element->next;
                            cout<<endl;
                            delete element;
                            return;

                        }
                        else{
                            p=p->next;
                            i++;
                        }
                    }
                    
                    cout<<"input is wrong";
                
                }

            }

};

void start(){
    linklist lt;
    for(int i=0;i<6;i++)
    {
        int v;
        cout<<"Enter the value : ";
        cin>>v;
        lt.push_back(v);
    }
    lt.traverse();
    lt.insert(7,2);
    lt.traverse();
    lt.deletion(8);
    lt.traverse();
}


int main()
{

start();

    return 0;
}