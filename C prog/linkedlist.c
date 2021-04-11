#include<stdlib.h>
#include <stdio.h>
struct node
{
        int info;
        struct node *ptr;
};
struct node *head=NULL;
void add()
{
        struct node *temp,*tail;
        temp=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data value for the node:	");
        scanf("%d",&temp->info);
        temp->ptr=NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                tail=head;
                while(tail->ptr!=NULL)
                {
                        tail=tail->ptr;
                }
                tail->ptr=temp;
        }
}
void display()
{
    struct node *tail;
    if(head==NULL)
    {
        printf("List is empty:\n");
        return;
    }
    else
    {
        tail=head;
        printf("The List elements are:\n");
        while(tail!=NULL)
        {
            printf("%d\n",tail->info );
            tail=tail->ptr ;
        }
    }
}
void insertbegin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data value for the node:	" );
        scanf("%d",&temp->info);
        temp->ptr =NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                temp->ptr=head;
                head=temp;
        }
}
void insertend()
{
        struct node *temp,*tail;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("Out of Memory Space:\n");
                return;
        }
        printf("Enter the data value for the node:	" );
        scanf("%d",&temp->info );
        temp->ptr =NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                tail=head;
                while(tail->ptr !=NULL)
                {
                        tail=tail->ptr ;
                }
                tail->ptr=temp;
        }
}
void insertpos()
{
        struct node *tail,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("Out of Memory Space:\n");
                return;
        }
        printf("Enter the position for the new node to be inserted:	");
        scanf("%d",&pos);
        printf("Enter the data value of the node:	");
        scanf("%d",&temp->info) ;
  
        temp->ptr=NULL;
        if(pos==0)
        {
                temp->ptr=head;
                head=temp;
        }
        else
        {
                for(i=0,tail=head;i<pos-1;i++) 
				{ 
					tail=tail->ptr;
                }
                temp->ptr=tail->ptr ;
                tail->ptr=temp;
        }
}
void deletebegin()
{
        struct node *temp;
        if(head==NULL)
        {
                printf("List is Empty:\n");
                return;
        }
        else
        {
                temp=head;
                head=head->ptr ;
                printf("The deleted element is :%d\n",temp->info);
        }
}
void deleteend()
{
        struct node *temp,*tail;
        if(head==NULL)
        {
                printf("List is Empty:");
        }
        else if(head->ptr ==NULL)
        {
                tail=head;
                head=NULL;
                printf("The deleted element is:%d\n",tail->info);
        }
        else
        {
                tail=head;
                while(tail->ptr!=NULL)
                {
                        temp=tail;
                        tail=tail->ptr;
                }
                temp->ptr=NULL;
                printf("The deleted element is:%d\n",tail->info);
        }
}
void deletepos()
{
        int i,pos;
        struct node *temp,*tail;
        if(head==NULL)
        {
                printf("The List is Empty:\n");
        }
        else
        {
                printf("Enter the position of the node to be deleted:	");
                scanf("%d",&pos);
                if(pos==0)
                {
                        tail=head;
                        head=head->ptr ;
                        printf("The deleted element is:%d\n",tail->info  );
                }
                else
                {
                    tail=head;
                    for(i=0;i<pos;i++) 
						{ 
						temp=tail; 
						tail=tail->ptr;
                    	}
                    temp->ptr =tail->ptr ;
                    printf("The deleted element is:%d\n",tail->info );
                }
			}
}
int main()     
{
	add();
	add();
	add();
	add();
	add();
	display();
	deletebegin();
	insertbegin();
	insertend();
	display();
	deletepos();
	deleteend();
	display();
}
