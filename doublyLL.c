#include <stdio.h>

struct node
{
  int data;
  struct node *llink;
  struct node *rlink;
};

struct node *temp, *start, *ptr;

void create()
{
  temp = (struct node *)malloc(sizeof(struct node));
  temp->llink = NULL;
  temp->rlink = NULL;
  printf("enter data :\n");
  scanf("%d", &temp->data);
}

void insert_beg() 
{
    create();
    
    if(start==NULL)
    {
        start = temp;
    }
    
    else
    {
        temp->rlink = start;
        start->llink = temp;
        start = temp;
    }
}

void insert_end() 
{
     create();
    
    if(start==NULL)
    {
        start = temp;
    }
    
    else 
    {
        ptr = start;
        while(ptr->rlink!=NULL)
        {
            ptr = ptr->rlink;
        }
        
         temp->rlink = NULL;
         ptr->rlink = temp;
         temp->llink = ptr;
    }
}

void display()
{
    ptr = start;
    while(ptr!=NULL)
    {
        printf("%d --> ", ptr->data);
        ptr = ptr->rlink;
    }
}

void insert_any()
{
    int count=1, pos, i; 
    ptr = start;
    while(ptr->rlink != NULL)
    {
        ptr = ptr->rlink;
        count++;
    }
    
    printf("enter the position:\n");
    scanf("%d", &pos);
    
    if(pos == 1)
    {
        insert_beg();
    }
    
    else if(pos == count+1)
    {
       insert_end(); 
    }
    
    else if(pos>1 && pos<count+1)
    {
        create();
        ptr = start;
        for(i=1; i<pos-1; i++)
        {
            ptr = ptr->rlink;
        }
        temp->rlink = ptr->rlink;
        temp->llink = ptr;
        ptr->rlink = temp;
        temp->rlink->llink = temp;
    }
}

void delete_beg()
{
    if(start==NULL)
    {
        printf("the list is empty");
    }
    
    else
    {
        ptr = start;
        start->rlink->llink = NULL;
        start = start->rlink;
        free(ptr);
    }
}

void delete_end()
{
    if(start==NULL)
    {
        printf("the list is empty");
    }
    
    else
    {
        ptr = start;
        while(ptr->rlink != NULL)
        {
            ptr = ptr->rlink;
        }
        
        ptr->llink->rlink = NULL;
        free(ptr);
        
    }
}

void delete_any()
{
    int count=1, pos, i; 
    ptr = start;
    while(ptr->rlink != NULL)
    {
        ptr = ptr->rlink;
        count++;
    }
    
    printf("enter the position:\n");
    scanf("%d", &pos);
    
    if(pos == 1)
    {
        delete_beg();
    }
    
    else if(pos == count)
    {
       delete_end(); 
    }
    
   else if(pos>1 && pos<count)
   {
        ptr = start;
        for(i=1; i<pos; i++)
        {
            ptr = ptr->rlink;
        }
        
        ptr->llink->rlink = ptr->rlink;
        ptr->rlink->llink = ptr->llink;
        free(ptr);
   }
}

void main()
{
    int ch;
    
    while(1)
    {
        printf("\n1.insert begenning\n2.insert end\n3.insert at any position\n4.detete begenning\n5.delete end\n6.delete at any position\n7.display\n");
        printf("enter the operation to be performed\n");
        scanf("%d", &ch);
        
        switch(ch)
        {
            case 1: insert_beg();
                    break;
                    
            case 2: insert_end();
                    break;
                    
            case 3: insert_any();
                    break;
            
            case 4: delete_beg();
                    break;
            
            case 5: delete_end();
                    break;
                    
            case 6: delete_any();
                    break;
                    
            case 7: display();
                    break;
                    
        }
    }
}











