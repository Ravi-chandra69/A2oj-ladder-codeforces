#include <bits/stdc++.h>
 
struct Node
{
    int data;
    struct Node *next;
};
int length =0;
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        length++;

    }
}
void findMiddle(struct Node *head, int x){
    
    int middle = length/2;
    int temp=middle-x;
    
    struct Node *y =head;
    int z =1;
    while(z!=temp){
        y= y->next;
    }
  printf("Element: %d\n",y->data);

}

 
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = NULL;
 
    linkedListTraversal(head);
    findMiddle(head,1);
}


