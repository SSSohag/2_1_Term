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

void after_value(struct node *p, int target, int value){
    struct node *z;
    z = (struct node*) malloc (sizeof(struct node));
    z->data = value;
    z->next = NULL;
    while(p!=NULL){
        if(p->data==target){
            z->next = p->next;
            p->next = z;
            break;
        }
        p = p->next;
    }
}

int main()
{
    //cout<<"If You Input Negative Value The Linklist is Stopped....."<<endl;
    struct node *p, *head, *last;
    int v, flag (0);
    while(1){
        cin>>v;
        if(v<0) break;
        p = (struct node *) malloc (sizeof(struct node));
        p->data = v;
        p->next = NULL;

        if(flag==0){
            head = p;
            flag = 1;
        }
        else{
            last->next = p;
        }
        last = p;
    }
    int t,n;
    cout<<"Enter the target: ";
    cin>>t;
    cout<<"Enter the new Value: ";
    cin>>n;

    after_value(head, t, n);
    print(head);
}
