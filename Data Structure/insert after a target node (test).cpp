#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void print(struct node *p){
    while(p!=NULL){
        cout<<p->data<<' ';
        p = p->next;
    }
}

void before_value(struct node *p, int target, int value){
    struct node *z;
    z = (struct node*) malloc(sizeof(struct node));
    z->data = value;
    z->next = NULL;

    while(p!=NULL){
        if(p->next->data==target){
            z->next=p->next;
            p->next = z;
            break;
        }
        p = p->next;
    }
}

int main()
{
    struct node *head, *last, *p;
    int v, flag(0);
    while(1){
        cin>>v;
        if(v<0) break;
        p = (struct node*) malloc (sizeof(struct node));
        p->data = v;
        p->next =  NULL;

        if(flag ==0){
            head = p;
            flag=1;
        }
        else{
            last->next = p;
        }
        last = p;
    }
    cout<<"Enter The Target: ";
    int t;
    cin>>t;
    int n;
    cout<<"Enter The Value: ";
    cin>>n;

    before_value(head,t,n);
    print(head);
}
