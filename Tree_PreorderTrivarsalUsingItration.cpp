#include<bits/stdc++.h>
using namespace std;
struct node{
    node* lchild;
    int data;
    node* rchild;
};

struct Node{
    node* data;
    Node* next;
};

Node* front=NULL,*rare=NULL;
node* root=NULL;
void enqueue(node* x){
    Node* p=NULL;
    p=new Node;
    if(p){
        p->data=x;
        p->next=NULL;
        if(front==NULL){
            front=rare=p;
        }
        else{
            rare->next=p;
            rare=p;
        }
    }
    else{cout<<"Heap Overflow";}
}
node* dequeue(){
    node* value;
    value=front->data;
    front=front->next;
    return value;
}
Node* top=NULL;
void push(node* p){
    Node* t=NULL;
    t=new Node;
    t->data=p;
    t->next=top;
    top=t;
}
node* pop(){
    Node* t;
    node* value;
    t=top;
    value=t->data;
    top=top->next;
    delete t;
    t==NULL;
    return value;
}
void preorder(node* p){
    while(p || top){
        if(p!=NULL){
            cout<<p->data<<endl;
            push(p);
            p=p->lchild;
        }
        else{p=pop();p=p->rchild;}
    }
}
int main(){
    cout<<"Input the root data : ";
    root=new node;
    cin>>root->data;
    root->lchild=root->rchild=0;
    enqueue(root);
    while(front){
        node* p;
        p=dequeue();
        cout<<"Input left child : ";
        int x;
        cin>>x;
        if(x!=-1){
            node* t;
            t=new node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(t);
        }
        cout<<"Input right child : ";
        cin>>x;
        if(x!=-1){
            node* t;
            t=new node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enqueue(t);
        }

    }
    preorder(root);
    return 0;
}
