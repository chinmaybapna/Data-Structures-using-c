#include<stdio.h>

struct node {
    int data;
    struct node *llink;
    struct node *rlink;
};

struct node *temp, *root = NULL, *ptr, *parent;

void insert()
{
    temp = (struct node *)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d", &temp->data);
    temp->llink = NULL;
    temp->rlink = NULL;
    
    if(root == NULL)
    {
        root = temp;
    }
    else {
        ptr = root;
        while(ptr != NULL)
        {
            parent = ptr;
            if(temp->data == ptr->data)
            {
                printf("node exists\n");
                return;
            }
            else if(temp->data > ptr->data)
            {
                ptr = ptr->rlink;
            }
            else
            {
                ptr = ptr->llink;
            }
        }
        if(parent->data > temp->data)
        {
            parent->llink = temp;
        }
        else
        {
            parent->rlink =  temp;
        }
    }
}

void display()
{
    printf("\ninorder display :\n");
    inorder(root);
    printf("\npreorder display :\n");
    preorder(root);
    printf("\npostorder display :\n");
    postorder(root);
}

void inorder(struct node *tree)
{
    if(tree != NULL)
    {
        inorder(tree->llink);
        printf("%d ", tree->data);
        inorder(tree->rlink);
    }
}

void preorder(struct node *tree)
{
    if(tree != NULL)
    {
        printf("%d ", tree->data);
        preorder(tree->llink);
        preorder(tree->rlink);
    }
}

void postorder(struct node *tree)
{
    if(tree != NULL)
    {
        postorder(tree->llink);
        postorder(tree->rlink);
        printf("%d ", tree->data);
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n1.insert\n2.display\n3.exit\n");
        printf("enter choice\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: insert(); break;
            case 2: display(); break;
            case 3: exit(0);
        }
    }
}