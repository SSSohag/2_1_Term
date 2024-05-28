#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void print(struct node * n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n= n->next;
    }
}

int main()
{
    struct node *head, *last, *p;
    int v,flag=0;
    while(1){
        cin>>v;
        if(v<0) break;
        p=(struct node*)malloc(sizeof(struct node));
        p->data = v;
        p->next = NULL;
        if(flag==0){
            head = p;
            flag =1;
        }
        else{
            last->next = p;
        }
        last = p;
    }
    int m;
    cout<<"Enter The Value of Last Node: ";
    cin>>m;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = m;
    p->next = NULL;

    last->next =p;
    last = p;

    print(head);
}
