#include<stdio.h>

struct node {
    char data;
    struct node *llink;
    struct node *rlink
};

int size, i, flag;
struct node *temp, *head, *tail, *midNode, *ptr;

void addToList()
{
    temp = (struct node *)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf(" %c",&(temp->data));
    temp->llink = NULL;
    temp->rlink = NULL;

    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else 
    {
        tail->rlink = temp;
        temp->llink = tail;
        tail = temp;
    }
}

void checkPalin()
{
    ptr = head;
    int count=1;
    while(ptr->rlink!=NULL){
        ptr = ptr->rlink;
        count++;
    }
    size = count;
    int mid;
    if(size%2 == 0)
    {
        mid = size/2;
    }
    else {
        mid = (size+1)/2;
    }
    midNode = head;
    for(i=1; i<mid; i++){
        midNode = midNode->llink;
    }
    while(head!=midNode && tail!=midNode)
    {
        flag = 1;
        if(head->data != tail->data)
        {
            flag = 0;
            break;
        }
        else {
            tail = tail->llink;
            head = head->rlink;
        }
    }
    if(flag == 1){
        printf("******************");
        printf("\nlist is palindrome\n");
        printf("******************");
        exit(0);
    }
    else {
        printf("**********************");
        printf("\nlist is not palindrome\n");
        printf("**********************");
        exit(0);
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n=====================");
        printf("\n1.add to list\n2.check palindrome\n3.exit\n");
        printf("=====================\n");
        printf("\nenter choice\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: addToList(); break;
            case 2: checkPalin(); break;
            case 3: exit(0); break;
        }
    }
    
}
