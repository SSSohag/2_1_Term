#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};

void printlist(struct node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
}

int main()
{
    struct node *head, *last, *p, *second;
    int v;
    int flag(0);
    while(1){
        cin>>v;
        if(v==-1) break;
        p = (struct node*)malloc(sizeof(struct node));
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
    cout<<"Enter the Node Value: ";
    cin>>v;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = v;
    p->next = NULL;
    second = head;
    head = p;
    head->next = second;
    printlist(head);
}
