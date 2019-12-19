#include<stdio.h>

struct node {
    int data;
    struct node *llink;
    struct node *rlink;
};

struct node *root, *temp;

void create(struct node *tree)
{
    if(is_lchild(tree) == 1)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d", &temp->data);
        tree->llink = temp;
        create(temp);
    } else {
        tree->llink = NULL;
    }
    
    if(is_rchild(tree) == 1)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d", &temp->data);
        tree->rlink = temp;
        create(temp);
    } else {
        tree->rlink = NULL;
    }
    
}

int is_lchild(struct node *tree)
{
    int ch;
    printf("Do you want left child for %d\n", tree->data);
    printf("Press 1 for YES\nPress 0 for NO\n");
    scanf("%d", &ch);
    return ch;
}

int is_rchild(struct node *tree)
{
    int ch;
    printf("Do you want right child for %d\n", tree->data);
    printf("Press 1 for YES\nPress 0 for NO\n");
    scanf("%d", &ch);
    return ch;
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
    root = (struct node *)malloc(sizeof(struct node));
    printf("enter the data associated with root node\n");
    scanf("%d", &root->data);
    root->llink = NULL;
    root->rlink = NULL;
    create(root);
    printf("\ninorder display :\n");
    inorder(root);
    printf("\npreorder display :\n");
    preorder(root);
    printf("\npostorder display :\n");
    postorder(root);
}
