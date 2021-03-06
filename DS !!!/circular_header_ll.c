#include<stdio.h>
#include<stdlib.h>
struct node
{
            int data;
            struct node *link;
};
typedef struct node* NODE;
int count = 0;         /* To count no of nodes in the list and put it into header node */

NODE getnode()
{
            NODE x;
            x = (NODE)malloc(sizeof(struct node));
            return x;
}
NODE insert_at_end(NODE head, int item)
{
            NODE temp, cur;
            temp = getnode();
            temp->data = item;
            cur = head->link;
            while(cur->link!=head)
            {
                        cur = cur->link;
            }
            cur->link = temp;
            temp->link = head;
            head->data = ++count;
            return head;
}
void display(NODE head)
{
            NODE temp;
            if(head->link == head)
            {
                        printf("\nList is empty.");
                        return;
            }
            printf("\nContents of the CLL:\n");
            printf("\nNo of nodes in the CLL is %d\n", head->data);
            temp = head->link;
            while(temp!=head)
            {
                        printf("|%d|%d| --> ",temp->data,temp->link);
                        temp = temp->link;
            }
}
void main()
{
            int ch, item;
            NODE head;
            head = getnode();
            head->data = 0;
            head->link = head;      /*Empty header node*/
            while(1)
            {
                        printf("\n~~MENU~~");
                        printf("\n1:Insert At End \n2:Display \n3:Exit \n");
                        printf("Enter the choice: ");
                        scanf("%d", &ch);
                        switch(ch)
                        {
                                    case 1: printf("\nEnter the item to be inserted : ");
                                                scanf("%d", &item);
                                                head = insert_at_end(head, item);
                                                break;
                                    case 2: display(head);
                                                break;
                                    case 3: exit(0);
                        }
            }
}
