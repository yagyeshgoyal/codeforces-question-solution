#include<iostream>
#include<queue>
using namespace std;


class node{
    public:
    int data ;
    node* left;
    node* right;
    
    node(){
        data = -1;
        left = NULL;
        right = NULL;
    }

    node* getinput(node* root){
        cout<<"Enter input : "<<endl;;
        int a ;
        cin>>a;

        if(a == -1){
            return NULL;
        }
        root = new node();
        root->data = a;

        root->left = getinput(root->left);
        root ->right = getinput(root->right);
    }

    void levelOrderTraversal(node* root){
        queue<node*>q;
        q.push(root);

        while(!q.empty()){
            
            int s = q.size();

            while(s--){
                auto top = q.front();
                q.pop();

                cout<<top->data<<" ";
                if(top->left != NULL){
                    q.push(top->left);
                }
                if(top->right != NULL){
                    q.push(top->right);
                }
            }

            cout<<endl;
        }
    }

    void convertInFlatten(node* root){
        node* curr = root;

        while(curr != NULL){
            
            if(curr->left == NULL){
                curr = curr->right;
            }
            else{
                node* prec = curr->left;

                node* temp = prec;
                while(temp->right != NULL){
                    temp = temp->right;
                }

                temp->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
                curr = curr->right;
            }
        }
    }

};

int main()
{
    node* root = NULL;

    root = root->getinput(root);

    root->levelOrderTraversal(root);

    root->convertInFlatten(root);

    root->levelOrderTraversal(root);

    


    return 0;
}