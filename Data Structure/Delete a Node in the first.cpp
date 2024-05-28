#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};

void print (struct node *p){
    while(p!=NULL){
        cout<<p->data<<' ';
        p = p->next;
    }
}

int main()
{
    struct node *head, *p, *last;
    int v, flag(0);
    while(1){
        cin>>v;
        if(v<0)break;
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
    head = head->next;

    print(head);
}
