#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct Node
{
    int value;
    struct Node *left, *right;
};


void SearchElement(struct Node *root, int data)
{
    while (root != NULL)
    {
        if (root->value == data)
        {
            printf("Found\n");
            return;
        }
        else if (data < root->value)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }

    printf("Not found\n");
}


void Preorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printf(" %d ", root->value);
        Preorder(root->left);
        Preorder(root->right);
    }
}
void Inorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        Inorder(root->left);
        printf(" %d ", root->value);
        Inorder(root->right);
    }
}
void Postorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        Postorder(root->left);
        Postorder(root->right);
        printf(" %d ", root->value);
    }
}

int main()
{
    int i = 0, last = 0, current = 0;
    struct Node *root, *pleft, *pright, *list[2000]; // Limiting the size of the list to 2000
    int n = 0;

    printf("root value ?   ");
    scanf("%d", &n);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->value = n;
    root->left = NULL;
    root->right = NULL;
    list[0] = root;
    current = 0;
    last = 0;

    while (1)
    {
        if (current > last)
        {
            break;
        }

        if (list[current]->value == -1)
        {
            current++;
            continue;
        }

        printf("left of %d?    ", list[current]->value);
        scanf("%d", &n);
        if (n == -1)
        {
            pleft = NULL;
        }
        else
        {
            pleft = (struct Node *)malloc(sizeof(struct Node));
            pleft->value = n;
            pleft->left = NULL;
            pleft->right = NULL;
        }

        printf("right of %d?   ", list[current]->value);
        scanf("%d", &n);
        if (n == -1)
        {
            pright = NULL;
        }
        else
        {
            pright = (struct Node *)malloc(sizeof(struct Node));
            pright->value = n;
            pright->left = NULL;
            pright->right = NULL;
        }

        list[current]->left = pleft;
        list[current]->right = pright;

        if (pleft != NULL)
        {
            list[last + 1] = pleft;
            last++;
        }

        if (pright != NULL)
        {
            list[last + 1] = pright;
            last++;
        }

        current++;
    }

    printf("Preorder traversal: ");
    Preorder(root);
    printf("\n");

    printf("Inorder traversal: ");
    Inorder(root);
    printf("\n");

    printf("Postorder traversal: ");
    Postorder(root);
    printf("\n");

    cout<<endl<<"Enter Searching Element: ";
    int m;
    cin>>m;
    SearchElement(root, m);

}

