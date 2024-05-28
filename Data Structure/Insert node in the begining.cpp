#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

typedef struct node node;

void Add_First(node *head,node *p,int value){
    p->data = value;
    p->next = head;
    head->prev = p;
    p->prev = NULL;
    head = p;
}

void Add_Last(node *head,int value){
    node *p;
    p = (node *)malloc(sizeof(node));

    p->data = value;
    p->next = NULL;
    p->prev = NULL;

    while (1){
        if (head->next == NULL){
            head->next = p;
            p->next = NULL;
            p->prev = head;
            break;
        }
        head = head->next;
    }
}

void print(node *head){
    node *tmp = head;
    while(tmp!= NULL){
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main(){
    node *head = (node*)malloc(sizeof(node));
    //cout<<"Enter data 1 : ";
    cin>>head->data;
    head->next = NULL;
    head->prev = NULL;

    //int i = 2;
    node *tail = (node*)malloc(sizeof(node));
    tail = head;
    while (1)
    {
        node *temp = (node*)malloc(sizeof(node));
        cin>>temp->data;
        if (temp->data < 0)
        {
            break;
        }
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
        temp->next = NULL;
    }
    int test,last,add;
    cout<<"Input 1 : Add node in the Beginning "<<endl;
    cout<<"Input 2 : Add node in the Last "<<endl;
    cout<<"Press 1 or 2 : ";
    cin>>test;
    if(test == 2){//add last;
        cout<<"Enter data to be added : ";
        cin>>last;
        Add_Last(head,last);
        print(head);
    }
    if(test == 1){//int add;
        cout<<"Enter data to be added : ";
        cin>>add;
        node *tmp = (node *)malloc(sizeof(node));
        Add_First(head,tmp,add);
        print(tmp);
    }
}
