#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void printlist(struct node *p)
{
    while(p!=NULL) {
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()
{
    int v,flag=0;
    struct node *p,*head,*ennd,*second;
    while(1){
        cin>>v;
        if(v<0) break;
        p = (struct node *)malloc(sizeof(struct node));

        p->data=v;
        p->next=NULL;
        if(flag==0){
            head=p;
            flag=1;
        }
        else{
            ennd->next=p;
        }
        ennd = p;
    }
    cout<<"Enter the value of the new node: ";
    int n;
    cin>>n;
    p = (struct node *)malloc(sizeof(struct node));

    p->data=n;
    p->next=NULL;

    second = head;
    head = p;
    head->next = second;

    printlist(head);
}
