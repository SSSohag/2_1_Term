#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void printlist(struct node *p){
    while(p!=NULL){
        cout<<p->data<< ' ';
        p = p->next;
        if(p!=NULL) cout<<"-> ";
    }
}

void check(struct node *p,int v){
    while(p!=NULL){
        if(p->data==v){
            v=0;
        }
        p=p->next;
    }
}
int main(){
    struct node *head, *last,*p;
    int flag(0);
    while(1){
        int v;
        cin>>v;
        if(v<0){
            break;
        }
        //else if(v==0) continue;
        p = (struct node*) malloc (sizeof(struct node));
        p->data = v*10;
        p->next = NULL;
        if(flag==0){
            head = p;
            flag = 1;
        }
        else{
            last->next= p;
        }
        last=p;
    }
    cout<<"Multiply Every Element with 10: ";
    printlist(head);
}
