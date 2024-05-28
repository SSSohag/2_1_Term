#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

typedef struct node node;

void Add_Before(node *p)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    int pos;
    cout << "Element before which to add data: ";
    cin >> pos;
    cout << "Enter added data: ";
    cin >> ptr->data;

    while (p != NULL){
        if (p->next != NULL && p->next->data == pos) {
            ptr->next = p->next;
            ptr->prev = p;
            p->next->prev = ptr;
            p->next = ptr;
            break; // Exit the loop after adding the new node
        }
        p = p->next;
    }
}

void Add_After(node *p){
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    int pos;
    cout << "Element after which to add data: ";
    cin >> pos;
    cout << "Enter added data: ";
    cin >> ptr->data;
    while (p!= NULL){
        if (p->next!= NULL && p->data == pos){
            ptr->next = p->next;
            ptr->prev = p;
            p->next->prev = ptr;
            p->next = ptr;
            break; // Exit the loop after adding the new node
        }
        p = p->next;
    }
}

void print(node *p){
    while (p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    node *head = (node *)malloc(sizeof(node));
    cin >> head->data;
    head->next = NULL;
    head->prev = NULL;

    int i = 2;
    node *tail = head; // Initialize tail directly to head
    while (1)
    {
        node *temp = (node *)malloc(sizeof(node));
        cin >> temp->data;
        if (temp->data <0){
            free(temp); // Free the unused memory for the last node
            break;
        }
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
        temp->next = NULL;
    }

    int test;
    cout << "Press 1 to add before & Press 2 to add after: "<<endl;;
    cout<<"Press 1 or 2 : ";
    cin >> test;
    node *nod = head;
    if (test == 1) {
        Add_Before(nod);
        print(head);
    }
    if(test == 2){
        Add_After(nod);
        print(head);
    }
    while (head != NULL){
        node *temp = head;
        head = head->next;
        free(temp);
    }
}
