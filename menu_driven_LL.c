#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int n;
    struct node *next;
}NODE ;
#define newnode() (NODE*)malloc(sizeof(NODE));
void search(NODE *);
void insert(NODE**);
void del(NODE **);
void disp(NODE *);
void create(NODE **);
main()
{
    NODE *h,*p;
    int ch;
    do
    {
        printf("\n1.Create / Append.\n2. Insert.\n3. Delete.\n4. Search\n5. Display\n6.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: create(&h);
            break;
            case 2: insert(&h);
            break;
            case 3: del(&h);
            break;
            case 4: search(h);
            break;
            case 5: disp(h);
            break;
            case 6:printf("\nThank you...!!");
            break;
            default:printf("\nInvalid choice number ...!!");
        }
    }while(ch!=6);
}

void insert(NODE **x)
{
    NODE *p,*t;
    int i,pos;
    if(*x==NULL)
    {
        printf("\nList doesn't exist..!!");
        return;
    }
    printf("\nEnter position :");
    scanf("%d",&pos);
    if(pos==1)
    {
        t=newnode();
        t->next=*x;
        *x=t;
    }
    else
    {
        p=*x;
        pos--;
        for(i=0;i<pos&&p!=NULL;i++)
        {
            p=p->next;
        }
        if(p==NULL)
        {
            printf("\nInvalid position..!!");
            return;
        }
        t=newnode();
        t->next=p->next;
        p->next=t;
    }
    printf("\nEnter integer :");
    scanf("%d",&t->n);
}












